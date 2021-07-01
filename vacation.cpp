//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <System.JSON.hpp>
#include <memory>
#include "vacation.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TvacationWindow *vacationWindow;
//---------------------------------------------------------------------------
__fastcall TvacationWindow::TvacationWindow(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TvacationWindow::buttonLoadClick(TObject *Sender)
{
	std::unique_ptr<TStringStream> jsonStream(new TStringStream);
	jsonStream->LoadFromFile("vacation.json");
	TJSONObject* jsonFile = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);
	TJSONArray* vacationsArray = (TJSONArray*)TJSONObject::ParseJSONValue(jsonFile->GetValue("vacation")->ToString());

	listVacations->Items->Clear();
	for(int i = 0; i < vacationsArray->Count; i++) {
		String name = vacationsArray->Items[i]->GetValue<UnicodeString>("name");
		String surname = vacationsArray->Items[i]->GetValue<UnicodeString>("surname");
		int daysOff = vacationsArray->Items[i]->GetValue<int>("daysOff");
		listVacations->Items->Add();
		listVacations->Items->Item[i]->Caption = name;
		listVacations->Items->Item[i]->SubItems->Add(surname);
		listVacations->Items->Item[i]->SubItems->Add(daysOff);
	}

}
//---------------------------------------------------------------------------
void __fastcall TvacationWindow::buttonAddClick(TObject *Sender)
{
	listVacations->Items->Add();
	int lastIndex = listVacations->Items->Count-1;
	listVacations->Items->Item[lastIndex]->Caption = editName->Text;
	listVacations->Items->Item[lastIndex]->SubItems->Add(editSurname->Text);
	listVacations->Items->Item[lastIndex]->SubItems->Add(editLenght->Text);
}
//---------------------------------------------------------------------------
void __fastcall TvacationWindow::deleteButtonClick(TObject *Sender)
{
	listVacations->DeleteSelected();
}
//---------------------------------------------------------------------------
void __fastcall TvacationWindow::editCurrentButtonClick(TObject *Sender)
{
	if(listVacations->ItemIndex == -1) {
		ShowMessage("Nije odabran niti jedan godisnji u tablici");
		return;
	}

	int selected = listVacations->ItemIndex;
	listVacations->Items->Item[selected]->Caption = editName->Text;
	listVacations->Items->Item[selected]->SubItems->Strings[0] = editSurname->Text;
	listVacations->Items->Item[selected]->SubItems->Strings[1] = editLenght->Text;
}
//---------------------------------------------------------------------------
void __fastcall TvacationWindow::saveToJSONClick(TObject *Sender)
{
	String jsonDoc;
	jsonDoc = "{";
		jsonDoc += "\"vacation\":";
		jsonDoc += "[";
			for(int i = 0; i < listVacations->Items->Count; i++) {
				jsonDoc +=
				"{"
					"\"name\":\"" + listVacations->Items->Item[i]->Caption + "\"," +
					"\"surname\":\"" + listVacations->Items->Item[i]->SubItems->Strings[0] + "\"," +
					"\"daysOff\":" + (listVacations->Items->Item[i]->SubItems->Strings[1]).ToInt() +
				"}";
				jsonDoc += (i+1 != listVacations->Items->Count) ? "," : "";
			}
		jsonDoc += "]";
	jsonDoc += "}";

	jsonDoc = ((TJSONObject*)TJSONObject::ParseJSONValue(jsonDoc))->Format(2);
	std::unique_ptr<TStringStream> datoteka(new TStringStream);
	datoteka->WriteString(jsonDoc);
	datoteka->SaveToFile("vacation.json");
}
//---------------------------------------------------------------------------

void __fastcall TvacationWindow::buttonSurnameLenghtClick(TObject *Sender)
{
	CountSurnames *thread = new CountSurnames(false);
}
//---------------------------------------------------------------------------

void __fastcall TvacationWindow::buttonDaysLenghtClick(TObject *Sender)
{
	Count *thread = new Count(false);
}
//---------------------------------------------------------------------------

void __fastcall TvacationWindow::buttonNameLenghtClick(TObject *Sender)
{
	CountNames *thread = new CountNames(false);
}
//---------------------------------------------------------------------------



