//---------------------------------------------------------------------------

#include <vcl.h>
#include "data.h"
#pragma hdrstop

#include "adminChange.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TchangeAdmin *changeAdmin;

void __fastcall listRefresh() {
	_di_IXMLusersType userData = Getusers(changeAdmin->XMLDocument1);
		changeAdmin->userList->Items->Clear();
		for(int i = 0; i < userData->Count; i++) {
			changeAdmin->userList->Items->Add();
			changeAdmin->userList->Items->Item[i]->Caption = userData->user[i]->Get_username();
			changeAdmin->userList->Items->Item[i]->SubItems->Add(userData->user[i]->password);
			changeAdmin->userList->Items->Item[i]->SubItems->Add(userData->user[i]->name);
			changeAdmin->userList->Items->Item[i]->SubItems->Add(userData->user[i]->surname);
			changeAdmin->userList->Items->Item[i]->SubItems->Add(userData->user[i]->email);
			changeAdmin->userList->Items->Item[i]->SubItems->Add(userData->user[i]->birthDate);
			if (userData->user[i]->administrator)
				changeAdmin->userList->Items->Item[i]->SubItems->Add("Is an administrator");
			else
				changeAdmin->userList->Items->Item[i]->SubItems->Add("Is a customer");
		}
}
//---------------------------------------------------------------------------
__fastcall TchangeAdmin::TchangeAdmin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TchangeAdmin::buttonMakeAdminClick(TObject *Sender)
{
	if(userList->ItemIndex != -1){
		_di_IXMLusersType userData = Getusers(XMLDocument1);
		int i = userList->ItemIndex;
		if(userData->user[i]->Get_administrator() == true) {
			Application->MessageBox(L"Odabrani račun već ima administratorske privilegije", L"Greška, odabran administrator!", MB_ICONSTOP);
			return;
		}
		int countAdmin = 0;
			for(int i = 0; i < userData->Count; i++) {
				if (userData->user[i]->administrator)
					countAdmin++;
			}

		HINSTANCE MyDll;
		typedef bool(__stdcall*pfmakeAdministrator) (int);
		pfmakeAdministrator makeAdministrator;

		if ((MyDll = LoadLibrary(L"MyDLL.dll")) == NULL) {
				ShowMessage(L"DDL se ne može učitati");
				return;
		}

		if ((makeAdministrator = (pfmakeAdministrator)GetProcAddress(MyDll, "makeAdministrator")) == NULL) {
		ShowMessage(L"DDL se ne može pronaći");
		return;
		}
		if (makeAdministrator(countAdmin)) {
			_di_IXMLusersType userData = Getusers(XMLDocument1);
			int i = userList->ItemIndex;
			userData->user[i]->Set_administrator(1);
			XMLDocument1->SaveToFile(XMLDocument1->FileName);
			Application->MessageBox(L"Odabran računa sada je administrator", L"Uspješno postavljen novi administrator!", MB_ICONINFORMATION);
			listRefresh();
		}
		else {
				Application->MessageBox(L"Mogu postojati najviše 2 administratora!", L"Greška, prevelik broj administratora!", MB_ICONSTOP);
		}
		FreeLibrary(MyDll);
	}
	else {
		Application->MessageBox(L"Molimo odaberite račun kojem želite promijeniti privilegije!", L"Nije odabran niti jedan račun", MB_ICONINFORMATION);
	}

/*

		HINSTANCE MyDll;
		typedef double(__stdcall*pfSum) (double, double);
    	pfSum Sum;

    			if ((MyDll = LoadLibrary(L"MyDLL.dll")) == NULL) {
    				ShowMessage(L"DDL se ne može učitati");
    				return;
    			}

    			if ((Sum = (pfSum)GetProcAddress(MyDll, "Sum")) == NULL) {
    				ShowMessage(L"DDL se ne može pronaći");
    				return;
    			}

    	ShowMessage(Sum(5,8));
		FreeLibrary(MyDll);
*/
}
//---------------------------------------------------------------------------
void __fastcall TchangeAdmin::buttonRemoveAdminClick(TObject *Sender)
{
    if(userList->ItemIndex != -1){
		_di_IXMLusersType userData = Getusers(XMLDocument1);
		int i = userList->ItemIndex;
		if(userData->user[i]->Get_administrator() == false) {
			Application->MessageBox(L"Odabrani račun već nema administratorske privilegije", L"Greška, odabran je običan korisnik!", MB_ICONSTOP);
			return;
		}
		int countAdmin = 0;
			for(int i = 0; i < userData->Count; i++) {
				if (userData->user[i]->administrator)
					countAdmin++;
			}

		HINSTANCE MyDll;
		typedef bool(__stdcall*pfremoveAdministrator) (int);
		pfremoveAdministrator removeAdministrator;

		if ((MyDll = LoadLibrary(L"MyDLL.dll")) == NULL) {
			ShowMessage(L"DDL se ne može učitati");
			return;
		}

		if ((removeAdministrator = (pfremoveAdministrator)GetProcAddress(MyDll, "removeAdministrator")) == NULL) {
		ShowMessage(L"DDL se ne može pronaći");
		return;
		}

		if (removeAdministrator(countAdmin)) {
			_di_IXMLusersType userData = Getusers(XMLDocument1);
			int i = userList->ItemIndex;
			userData->user[i]->Set_administrator(0);
			XMLDocument1->SaveToFile(XMLDocument1->FileName);
			Application->MessageBox(L"Odabran računa više nije administrator", L"Uspješno izbrisan administrator!", MB_ICONINFORMATION);
			listRefresh();
		}
		else {
				Application->MessageBox(L"Mora postojati barem jedan administrator!", L"Greška, premalen broj administratora!", MB_ICONSTOP);
		}
		FreeLibrary(MyDll);
	}
	else {
		Application->MessageBox(L"Molimo odaberite račun kojem želite promijeniti privilegije!", L"Nije odabran niti jedan račun", MB_ICONINFORMATION);
	}
}
//---------------------------------------------------------------------------

void __fastcall TchangeAdmin::FormShow(TObject *Sender)
{
	_di_IXMLusersType userData = Getusers(XMLDocument1);
		userList->Items->Clear();
		for(int i = 0; i < userData->Count; i++) {
			userList->Items->Add();
			userList->Items->Item[i]->Caption = userData->user[i]->Get_username();
			userList->Items->Item[i]->SubItems->Add(userData->user[i]->password);
			userList->Items->Item[i]->SubItems->Add(userData->user[i]->name);
			userList->Items->Item[i]->SubItems->Add(userData->user[i]->surname);
			userList->Items->Item[i]->SubItems->Add(userData->user[i]->email);
			userList->Items->Item[i]->SubItems->Add(userData->user[i]->birthDate);
			if (userData->user[i]->administrator)
				userList->Items->Item[i]->SubItems->Add("Is an administrator");
			else
				userList->Items->Item[i]->SubItems->Add("Is a customer");
		}
}
//---------------------------------------------------------------------------


