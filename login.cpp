//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
#include "home.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TloginWindow *loginWindow;
//---------------------------------------------------------------------------
__fastcall TloginWindow::TloginWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TloginWindow::newUserButtonClick(TObject *Sender)
{
	registerWindow->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TloginWindow::loginButtonClick(TObject *Sender)
{
	if(username->Text == "")
	{
		Application->MessageBox(L"Molimo upisite vaše korisničko ime", L"Greška, nije upisano korisničko ime!", MB_ICONSTOP);
	}
	else if(password->Text == "")
	{
		Application->MessageBox(L"Molimo upisite vašu lozinku", L"Greška, nije upisana lozinka!", MB_ICONSTOP);
	}
	else
	{
		homeWindow->Caption = "Dobrodošli: " + username->Text;
		homeWindow->ShowModal();
    }
}
//---------------------------------------------------------------------------

