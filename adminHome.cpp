//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "adminHome.h"
#include "addNewVehicle.h"

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

