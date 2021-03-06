//---------------------------------------------------------------------------

#include "ImyWSWSDL.h"
#include <vcl.h>
#pragma hdrstop
#include <memory>

#include "adminHome.h"
#include "addNewVehicle.h"
#include "vehicles.h"
#include "database.h"
#include "home.cpp"
#include "HTTP.h"
#include "adminChange.h"
#include "vacation.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TadminHomeWindow *adminHomeWindow;

//---------------------------------------------------------------------------
__fastcall TadminHomeWindow::TadminHomeWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TadminHomeWindow::newVehicleButtonClick(TObject *Sender)
{
		addVehicleWindow->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TadminHomeWindow::loadVehiclesButtonClick(TObject *Sender)
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

void __fastcall TadminHomeWindow::deleteVehicleButtonClick(TObject *Sender)
{
	if(listCars->ItemIndex != -1){
		_di_IXMLvehiclesType vozila = Getvehicles(XMLDocument2);
		int i = listCars->ItemIndex;
		UDPClient->Port = 15555;
		UDPClient->SendBuffer("127.0.0.1", 15555, ToBytes(String(DateTimeToStr(Now())) + ": " + "Obrisano je vozilo " + vozila->vehicle[i]->Get_manufacturer() + " " + vozila->vehicle[i]->Get_model()));
		vozila->Delete(listCars->ItemIndex);
		XMLDocument2->SaveToFile(XMLDocument2->FileName);
		Application->MessageBox(L"Brisanje odabranog vozila uspe?no obavljeno", L"Uspje?no je obrisano odabrano vozilo!", MB_ICONINFORMATION);
	}
	else {
		Application->MessageBox(L"Molimo odaberite vozilo koje ?elite obrisati", L"Gre?ka, nije odabrano niti jedno vozilo!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------



void __fastcall TadminHomeWindow::showDatabaseClick(TObject *Sender)
{
	databaseWindow->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TadminHomeWindow::Button1Click(TObject *Sender)
{
		HTTPWindow->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TadminHomeWindow::editPermissionsClick(TObject *Sender)
{
	changeAdmin->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TadminHomeWindow::getIPClick(TObject *Sender)
{
	RESTRequest1->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TadminHomeWindow::getUsersClick(TObject *Sender)
{
_di_ImyWS myWS = GetImyWS();
myWS->getUserStatus();
}
//---------------------------------------------------------------------------

void __fastcall TadminHomeWindow::Button2Click(TObject *Sender)
{
	vacationWindow->ShowModal();
}
//---------------------------------------------------------------------------

