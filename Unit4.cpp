//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit4.h"
#include "vacation.cpp"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall CountSurnames::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall CountSurnames::CountSurnames(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall CountSurnames::Execute()
{
	    std::unique_ptr<TStringStream> jsonStream(new TStringStream);
	jsonStream->LoadFromFile("vacation.json");
	TJSONObject* jsonFile = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);
	TJSONArray* vacationsArray = (TJSONArray*)TJSONObject::ParseJSONValue(jsonFile->GetValue("vacation")->ToString());

	int countSurnames = vacationsArray->Count;
	int addSurnameLenght = 0;
	for(int i = 0; i < vacationsArray->Count; i++) {
		String surname = vacationsArray->Items[i]->GetValue<UnicodeString>("surname");
		addSurnameLenght += surname.Length();
		Sleep(750);
	}
	ShowMessage("Prosjecna duljina prezimena radnika upisanih u godisnji odmor je: " + String(float(addSurnameLenght)/float(countSurnames)));
}
//---------------------------------------------------------------------------
