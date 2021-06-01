//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "addNewVehicle.h"
#include "vehicles.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TaddVehicleWindow *addVehicleWindow;
//---------------------------------------------------------------------------
__fastcall TaddVehicleWindow::TaddVehicleWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TaddVehicleWindow::Button1Click(TObject *Sender)
{
if(noviManufacturer->Text == "") {
		Application->MessageBox(L"Molimo upišite ime proizvođača!", L"Greška, nije upisan proizvođač!", MB_ICONSTOP);
	}

	else if(noviModel->Text == "") {
		Application->MessageBox(L"Molimo upišite naziv modela!", L"Greška, nije upisan model!", MB_ICONSTOP);
	}

	else {
			_di_IXMLvehiclesType vozila = Getvehicles(XMLDocument2);
			_di_IXMLvehicleType vozilo = vozila->Add();
			vozilo->manufacturer = noviManufacturer->Text;
			vozilo->model = noviModel->Text;
			vozilo->fuel = noviFuel->Text;
			vozilo->doors = noviDoors->Text.ToInt();
			vozilo->shift = noviShift->Text;
			vozilo->drive = noviDrive->Text;
			vozilo->AC = checkAC->Checked;
			vozilo->bluetooth = checkBluetooth->Checked;
			vozilo->ENC = checkENC->Checked;
			vozilo->cruiseControl = checkCruiseControl->Checked;
			XMLDocument2->SaveToFile(XMLDocument2->FileName);
			Application->MessageBox(L"Dodavanje novog vozila uspešno obavljeno", L"Uspješno je dodano novo vozilo!", MB_ICONINFORMATION);
			addVehicleWindow->Close();
	}
}
//---------------------------------------------------------------------------
