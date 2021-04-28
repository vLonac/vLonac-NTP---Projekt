//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TregisterWindow *registerWindow;
//---------------------------------------------------------------------------
__fastcall TregisterWindow::TregisterWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TregisterWindow::registerUserClick(TObject *Sender)
{
	if(newName->Text == "" || newSurname->Text == "" || newUsername->Text == "" || newPassword->Text == "" || newEmail->Text == "") {
		Application->MessageBox(L"Molimo ispunite sva polja", L"Greška, nisu popunjena sva polja!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------

