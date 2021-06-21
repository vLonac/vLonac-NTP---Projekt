//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "home.h"
#include "login.h"
#include "register.h"
#include "vehicles.h"
#include "login.h"
#include "data.h"
#include <string.h>
#include <memory>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
ThomeWindow *homeWindow;
//---------------------------------------------------------------------------
class rezervacijaHeader{
  public:
  wchar_t formatIme[15];
  float  verzija;
  rezervacijaHeader(){
	wcsncpy(formatIme, L"Rezervacija", 20);
	verzija = 1;
  }
};

class Rezervacija{
	public:
	wchar_t ime[20], prezime[20], proizvodac[20], model[20], pocetakRez[20], krajRez[20];
	Rezervacija() = default;
	Rezervacija(wchar_t* _ime, wchar_t* _prezime, wchar_t* _proizvodac,
	wchar_t* _model, wchar_t* _pocetakRez, wchar_t* _krajRez){
		wcsncpy(ime, _ime, 20);
		wcsncpy(prezime, _prezime, 20);
		wcsncpy(proizvodac, _proizvodac, 20);
		wcsncpy(model, _model, 20);
		wcsncpy(pocetakRez, _pocetakRez, 20);
		wcsncpy(krajRez, _krajRez, 20);
	}
};
//---------------------------------------------------------------------------
__fastcall ThomeWindow::ThomeWindow(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall ThomeWindow::FormShow(TObject *Sender)
{
	_di_IXMLvehiclesType vozila = Getvehicles(XMLDocument2);
	listCars->Items->Clear();
	for(int i = 0; i < vozila->Count; i++) {
        listCars->Items->Add();
		listCars->Items->Item[i]->Caption = vozila->vehicle[i]->Get_manufacturer();
		listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_model());
		listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_fuel());
		listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_doors());
		listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_shift());
		listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_drive());
		if(vozila->vehicle[i]->Get_AC())
			listCars->Items->Item[i]->SubItems->Add("Ima");
		else
			listCars->Items->Item[i]->SubItems->Add("Nema");
		if(vozila->vehicle[i]->Get_bluetooth())
			listCars->Items->Item[i]->SubItems->Add("Ima");
		else
			listCars->Items->Item[i]->SubItems->Add("Nema");
		if(vozila->vehicle[i]->Get_ENC())
			listCars->Items->Item[i]->SubItems->Add("Ima");
		else
			listCars->Items->Item[i]->SubItems->Add("Nema");
        if(vozila->vehicle[i]->Get_cruiseControl())
			listCars->Items->Item[i]->SubItems->Add("Ima");
		else
			listCars->Items->Item[i]->SubItems->Add("Nema");
	}
}
//---------------------------------------------------------------------------

void __fastcall ThomeWindow::newReservationButtonClick(TObject *Sender)
{
	if(listCars->ItemIndex != -1){
		_di_IXMLusersType userData = Getusers(XMLDocument1);
		if(newReservationStart->Date>newReservationEnd->Date){
			Application->MessageBox(L"Greška, datum početka ne smije biti kasniji od datuma završetka!", L"Molimo odaberite pravilan datum", MB_ICONSTOP);
			return;
		}
		for(int i = 0; i < userData->Count; i++){
			if (loginWindow->username->Text == userData->user[i]->Get_username() && loginWindow->password->Text == userData->user[i]->Get_password()) {
				_di_IXMLvehiclesType svaVozila = Getvehicles(XMLDocument2);
				wchar_t test[20];
				wcsncpy(test, WideString(userData->user[i]->name).c_bstr(), 20);
				Rezervacija rezervacija(WideString(userData->user[i]->name).c_bstr(), WideString(userData->user[i]->surname).c_bstr(), WideString(svaVozila->vehicle[listCars->ItemIndex]->manufacturer).c_bstr(), WideString(svaVozila->vehicle[listCars->ItemIndex]->model).c_bstr(), WideString(DateToStr(newReservationStart->Date)).c_bstr(), WideString(DateToStr(newReservationEnd->Date)).c_bstr());
				rezervacijaHeader Header;
				std::unique_ptr<TFileStream> rezervacijaStrim(new TFileStream("rezervacije.rezz", fmCreate));
				rezervacijaStrim->Write(&Header, sizeof(rezervacijaHeader));
				rezervacijaStrim->Write(&rezervacija, sizeof(Rezervacija));
			}
		}
	}
	else {
		Application->MessageBox(L"Molimo odaberite vozilo koje želite rezervirati", L"Greška, nije odabrano niti jedno vozilo!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------

void __fastcall ThomeWindow::showReservationsClick(TObject *Sender)
{
std::unique_ptr<TMemoryStream> rezervacijaStrim(new TMemoryStream);
rezervacijaStrim->LoadFromFile("rezervacije.rezz");

rezervacijaHeader Header;
rezervacijaStrim->Read(&Header, sizeof(rezervacijaHeader));

if(String(Header.formatIme) != "Rezervacija" || Header.verzija != 1){
	ShowMessage("Wrong Format!");
	return;
}

Rezervacija tmp;
int brojRezervacija = (rezervacijaStrim->Size - sizeof(Header)) / sizeof(Rezervacija);
for(int i=0; i< brojRezervacija; i++){
UnicodeString rezervacija;
rezervacijaStrim->Read(&tmp, sizeof(Rezervacija));

rezervacija = "Rezervacija je rezervirana na ime: ";
rezervacija += String(tmp.ime) +  " ";
rezervacija += String(tmp.prezime) + " za vozilo ";
rezervacija += String(tmp.proizvodac) +  " ";
rezervacija += String(tmp.model) +  " te vrijedi od ";
rezervacija += String(tmp.pocetakRez) +  " do ";
rezervacija += String(tmp.krajRez) +  ".";

ShowMessage(rezervacija);
}


}
//---------------------------------------------------------------------------

