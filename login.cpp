//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
#include "home.h"
#include "adminHome.h"
#include "data.h"
#include "string.h"
#include <registry.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

class Racun {
private:
	String username;
	String password;
public:
	Racun(String _username, String _password) {
		username = _username;
		password = _password;
	}

	String getUsername() {
		return username;
	}

	String getPassword() {
		return password;
	}
};

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
		Racun login(username->Text, password->Text);
		for(int i = 0; i < userData->Count; i++){
			if (login.getUsername() == userData->user[i]->Get_username() && login.getPassword() == userData->user[i]->Get_password()) {
				if(userData->user[i]->Get_administrator() == true) {
					adminHomeWindow->Caption = "Dobrodošli: " + userData->user[i]->name + " " + userData->user[i]->surname + " (administrator mode)";
					adminHomeWindow->ShowModal();
				}

				else {
					if(!offlineCheck->Checked) {
						loginClient->Host = "127.0.0.1";
						loginClient->Port = 12345;
						loginClient->Connect();
						loginClient->Socket->WriteLn("Korisnik " + userData->user[i]->name + " " + userData->user[i]->surname + " ulogirao se " + Now());
						loginClient->Disconnect();
					}
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
		ini->WriteString("LoginWindow", "Password", password->Text);
		ini->WriteString("LoginWindow", "Date", Now());
		ini->WriteString("LoginWindow", "Double instances", switchInstance->State);
		delete ini;
	}
	else{
		TIniFile *ini = new TIniFile(GetCurrentDir() + "sUsername.ini");
		ini->WriteString("LoginWindow", "Username", "");
		ini->WriteString("LoginWindow", "Password", "");
		ini->WriteString("LoginWindow", "Date", "");
		ini->WriteString("LoginWindow", "Double instances", switchInstance->State);
		delete ini;
    }
}
//---------------------------------------------------------------------------

void __fastcall TloginWindow::FormCreate(TObject *Sender)
{
	TIniFile *ini = new TIniFile(GetCurrentDir() + "sUsername.ini");

	String stanje = ini->ReadString("LoginWindow", "Double instances", switchInstance->State);
	if(stanje == "1") {
		switchInstance->State = tssOn;
	}

	if(ini->ReadString("LoginWindow", "Username", username->Text) != ""){
		username->Text=ini->ReadString("LoginWindow", "Username", username->Text);
		password->Text=ini->ReadString("LoginWindow", "Password", password->Text);
		ShowMessage("Dobro došli natrag " + ini->ReadString("LoginWindow", "Username", username->Text) + ", vaš zadnji pristup bio je: " + ini->ReadString("LoginWindow", "Date", Now()));
	}
	delete ini;
}
//---------------------------------------------------------------------------






