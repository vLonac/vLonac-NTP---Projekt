//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "home.h"
#include "login.h"
#include "register.h"
#include "vehicles.h"
#include "login.h"
#include "data.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
ThomeWindow *homeWindow;
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
        for(int i = 0; i < userData->Count; i++){
			if (loginWindow->username->Text == userData->user[i]->Get_username() && loginWindow->password->Text == userData->user[i]->Get_password()) {
				_di_IXMLvehiclesType svaVozila = Getvehicles(XMLDocument2);
				homeWindow->Caption = "Odabral je " + userData->user[i]->name + " " + svaVozila->vehicle[listCars->ItemIndex]->model;
			}
		}
	}
	else {
		Application->MessageBox(L"Molimo odaberite vozilo koje želite obrisati", L"Greška, nije odabrano niti jedno vozilo!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------

