//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Form2->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(username->Text == "")
	{
		Application->MessageBox(L"Molimo upisite vaše korisničko ime", L"Greška, nije upisano korisničko ime!", MB_ICONSTOP);
	}
	else if(password->Text == "")
	{
		Application->MessageBox(L"Molimo upisite vašu lozinku", L"Greška, nije upisana lozinka!", MB_ICONSTOP);
	}
	Form1->Caption = "Dobrodosli: " + username->Text;
}
//---------------------------------------------------------------------------

