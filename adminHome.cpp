//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "adminHome.h"
#include "addNewVehicle.h"
#include "vehicles.h"

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
		vozila->Delete(listCars->ItemIndex);
		XMLDocument2->SaveToFile(XMLDocument2->FileName);
		Application->MessageBox(L"Brisanje odabranog vozila uspešno obavljeno", L"Uspješno je obrisano odabrano vozilo!", MB_ICONINFORMATION);
	}
	else {
		Application->MessageBox(L"Molimo odaberite vozilo koje želite obrisati", L"Greška, nije odabrano niti jedno vozilo!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------

