//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "login.h"
#include "register.h"
#include "home.h"
#include "data.cpp"
/*
//Include za JSON
#include <System.JSON.hpp>
#include <memory>
*/
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TloginWindow *loginWindow;
//---------------------------------------------------------------------------
__fastcall TloginWindow::TloginWindow(TComponent* Owner)
	: TForm(Owner)
{ /*
	//Učitavanje JSON datoteke
	std::unique_ptr<TStringStream> jsonStream(new TStringStream);
	jsonStream->LoadFromFile("data.json");

	//Stvaranje objekta koji predstavlja cijeli JSON
	TJSONObject* jsonFile = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);

	//Stvaranje JSON objekta koji predstavlja polje unutar carRental objekta u JSON-u
	TJSONArray* usersArray = (TJSONArray*)TJSONObject::ParseJSONValue(jsonFile->GetValue("users")->ToString());

	//Čitanje i spremanje podataka svakog korisnika
	ListView1->Items->Clear();
	for(int i = 0; i < usersArray->Count; i++) {
		//Čitanje korisnika
		String username = usersArray->Items[i]->GetValue<UnicodeString>("username");
		String password = usersArray->Items[i]->GetValue<UnicodeString>("password");
		String ime = usersArray->Items[i]->GetValue<UnicodeString>("ime");
		String prezime = usersArray->Items[i]->GetValue<UnicodeString>("prezime");
		String email = usersArray->Items[i]->GetValue<UnicodeString>("email");
		String birthDate = usersArray->Items[i]->GetValue<UnicodeString>("birthDate");

		//Učitavanje krosnika u listu
		ListView1->Items->Add();
		ListView1->Items->Item[i]->Caption = username;
		ListView1->Items->Item[i]->SubItems->Add(password);
		ListView1->Items->Item[i]->SubItems->Add(ime);
		ListView1->Items->Item[i]->SubItems->Add(prezime);
		ListView1->Items->Item[i]->SubItems->Add(email);
		ListView1->Items->Item[i]->SubItems->Add(birthDate);
	}
 */
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
		for(int i = 0; i < userData->Count; i++){
			if (username->Text == userData->user[i]->Get_username() && password->Text == userData->user[i]->Get_password()) {
				homeWindow->Caption = "Dobrodošli: " + userData->user[i]->name + " " + userData->user[i]->surname;
				homeWindow->ShowModal();
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

