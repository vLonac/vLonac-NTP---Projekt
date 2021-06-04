//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
#include "home.h"
#include "adminHome.h"
#include "data.h"
#include <registry.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TloginWindow *loginWindow;
//---------------------------------------------------------------------------
__fastcall TloginWindow::TloginWindow(TComponent* Owner)
	: TForm(Owner)
{}
//---------------------------------------------------------------------------

void __fastcall TloginWindow::newUserButtonClick(TObject *Sender)
{
	registerWindow->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TloginWindow::loginButtonClick(TObject *Sender)
{
	_di_IXMLusersType userData = Getusers(XMLDocument1);
	int wrong = 1;
	if(username->Text.IsEmpty())
	{
		Application->MessageBox(L"Molimo upisite vaše korisničko ime", L"Greška, nije upisano korisničko ime!", MB_ICONSTOP);
	}
	else if(password->Text == "")
	{
		Application->MessageBox(L"Molimo upisite vašu lozinku", L"Greška, nije upisana lozinka!", MB_ICONSTOP);
	}
	else
	{
		for(int i = 0; i < userData->Count; i++){
			if (username->Text == userData->user[i]->Get_username() && password->Text == userData->user[i]->Get_password()) {
				if(userData->user[i]->Get_administrator() == true) {
					adminHomeWindow->Caption = "Dobrodošli: " + userData->user[i]->name + " " + userData->user[i]->surname + " (administrator mode)";
					adminHomeWindow->ShowModal();
				}
				else {
					homeWindow->Caption = "Dobrodošli: " + userData->user[i]->name + " " + userData->user[i]->surname;
					homeWindow->ShowModal();
				}
				wrong = 0;
				return;
			}
		}
		if(wrong == 1)
			Application->MessageBox(L"Korisničko ime ili lozinka nisu ispravni", L"Greška, nije se moguće ulogirati!", MB_ICONSTOP);
	}
}
//---------------------------------------------------------------------------





void __fastcall TloginWindow::xmlLoadClick(TObject *Sender)
{
	_di_IXMLusersType userData = Getusers(XMLDocument1);
		ListView1->Items->Clear();
		for(int i = 0; i < userData->Count; i++) {
			ListView1->Items->Add();
			ListView1->Items->Item[i]->Caption = userData->user[i]->Get_username();
			ListView1->Items->Item[i]->SubItems->Add(userData->user[i]->password);
			ListView1->Items->Item[i]->SubItems->Add(userData->user[i]->name);
			ListView1->Items->Item[i]->SubItems->Add(userData->user[i]->surname);
			ListView1->Items->Item[i]->SubItems->Add(userData->user[i]->email);
			ListView1->Items->Item[i]->SubItems->Add(userData->user[i]->birthDate);
			if (userData->user[i]->administrator)
				ListView1->Items->Item[i]->SubItems->Add("Is an administrator");
			else
                ListView1->Items->Item[i]->SubItems->Add("Is a customer");
		}
}
//---------------------------------------------------------------------------

void __fastcall TloginWindow::FormClose(TObject *Sender, TCloseAction &Action)
{
	if(rememberUsername->Checked){
		TIniFile *ini = new TIniFile(GetCurrentDir() + "sUsername.ini");
		ini->WriteString("LoginWindow", "Username", username->Text);
		delete ini;
	}
	else{
		TIniFile *ini = new TIniFile(GetCurrentDir() + "sUsername.ini");
		ini->WriteString("LoginWindow", "Username", "");
		delete ini;
    }
}
//---------------------------------------------------------------------------

void __fastcall TloginWindow::FormCreate(TObject *Sender)
{
	TIniFile *ini = new TIniFile(GetCurrentDir() + "sUsername.ini");
	username->Text=ini->ReadString("LoginWindow", "Username", username->Text);
	delete ini;
}
//---------------------------------------------------------------------------


