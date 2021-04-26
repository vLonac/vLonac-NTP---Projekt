//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if(newName->Text == "" || newSurname->Text == "" || newUsername->Text == "" || newPassword->Text == "" || newEmail->Text == "") {
		Application->MessageBox(L"Molimo ispunite sva polja", L"Greška, nisu popunjena sva polja!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------

