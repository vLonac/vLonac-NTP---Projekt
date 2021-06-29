//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "addNewVehicle.h"
#include "vehicles.h"
#include "adminHome.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

class Vozilo {
private:
	String manufacturer, model, fuel, shift, drive;
	int doors;
	bool AC, bluetooth, ENC, cruiseControl;

public:
	Vozilo(String _manufacturer, String _model, String _fuel, int _doors, String _shift, String _drive, bool _AC , bool _bluetooth , bool _ENC , bool _cruiseControl){
		manufacturer = _manufacturer;
		model = _model;
		fuel = _fuel;
		shift = _shift;
		drive = _drive;
		doors = _doors;
		AC = _AC;
		bluetooth = _bluetooth;
		ENC = _ENC;
		cruiseControl = _cruiseControl;
	}

	String getManufacturer() {
		return manufacturer;
	}

	String getModel() {
		return model;
	}

	String getFuel() {
		return fuel;
	}

	String getShift() {
		return shift;
	}

	String getDrive() {
		return drive;
	}

	int getDoors() {
		return doors;
	}

	bool getAC() {
		return AC;
	}

	bool getBluetooth() {
		return bluetooth;
	}

	bool getENC() {
		return ENC;
	}

	bool getCruiseControl() {
		return cruiseControl;
	}

};

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
			Vozilo novo(noviManufacturer->Text, noviModel->Text, noviFuel->Text, noviDoors->Text.ToInt(), noviShift->Text, noviDrive->Text, checkAC->Checked, checkBluetooth->Checked, checkENC->Checked, checkCruiseControl->Checked);
			vozilo->manufacturer = novo.getManufacturer();
			vozilo->model = novo.getModel();
			vozilo->fuel = novo.getFuel();
			vozilo->doors = novo.getDoors();
			vozilo->shift = novo.getShift();
			vozilo->drive = novo.getDrive();
			vozilo->AC = novo.getAC();
			vozilo->bluetooth = novo.getBluetooth();
			vozilo->ENC = novo.getENC;
			vozilo->cruiseControl = novo.getCruiseControl();
			XMLDocument2->SaveToFile(XMLDocument2->FileName);
            UDPClient->Port = 15555;
			UDPClient->SendBuffer("127.0.0.1", 15555, ToBytes(String(DateTimeToStr(Now())) + ": " + "Dodano je vozilo " + novo.getManufacturer() + " " + novo.getModel()));
			Application->MessageBox(L"Dodavanje novog vozila uspešno obavljeno", L"Uspješno je dodano novo vozilo!", MB_ICONINFORMATION);
			adminHomeWindow->listCars->Items->Clear();
			for(int i = 0; i < vozila->Count; i++) {
				adminHomeWindow->listCars->Items->Add();
				adminHomeWindow->listCars->Items->Item[i]->Caption = vozila->vehicle[i]->Get_manufacturer();
				adminHomeWindow->listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_model());
				adminHomeWindow->listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_fuel());
				adminHomeWindow->listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_doors());
				adminHomeWindow->listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_shift());
				adminHomeWindow->listCars->Items->Item[i]->SubItems->Add(vozila->vehicle[i]->Get_drive());
				if(vozila->vehicle[i]->Get_AC())
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Ima");
				else
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Nema");
				if(vozila->vehicle[i]->Get_bluetooth())
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Ima");
				else
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Nema");
				if(vozila->vehicle[i]->Get_ENC())
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Ima");
				else
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Nema");
				if(vozila->vehicle[i]->Get_cruiseControl())
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Ima");
				else
					adminHomeWindow->listCars->Items->Item[i]->SubItems->Add("Nema");
			}
			addVehicleWindow->Close();
	}
}
//---------------------------------------------------------------------------
