//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit3.h"
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
//      void __fastcall CountNames::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall CountNames::CountNames(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall CountNames::Execute()
{
	FreeOnTerminate = true;
	std::unique_ptr<TStringStream> jsonStream(new TStringStream);
	jsonStream->LoadFromFile("vacation.json");
	TJSONObject* jsonFile = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);
	TJSONArray* vacationsArray = (TJSONArray*)TJSONObject::ParseJSONValue(jsonFile->GetValue("vacation")->ToString());

	int countNames = vacationsArray->Count;
	int addLenght = 0;
	for(int i = 0; i < vacationsArray->Count; i++) {
		String name = vacationsArray->Items[i]->GetValue<UnicodeString>("name");
		addLenght += name.Length();
		Sleep(750);
	}
	ShowMessage("Prosjecna duljina imena radnika upisanih u godisnji odmor je: " + String(float(addLenght)/float(countNames)));
}
//---------------------------------------------------------------------------
