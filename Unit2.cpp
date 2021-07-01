//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "Unit2.h"
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
//      void __fastcall Count::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall Count::Count(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall Count::Execute()
{
	FreeOnTerminate = true;
	std::unique_ptr<TStringStream> jsonStream(new TStringStream);
	jsonStream->LoadFromFile("vacation.json");
	TJSONObject* jsonFile = (TJSONObject*)TJSONObject::ParseJSONValue(jsonStream->DataString);
	TJSONArray* vacationsArray = (TJSONArray*)TJSONObject::ParseJSONValue(jsonFile->GetValue("vacation")->ToString());

	int countDays = vacationsArray->Count;
	int addLenght = 0;
	for(int i = 0; i < vacationsArray->Count; i++) {
		int daysOff = vacationsArray->Items[i]->GetValue<int>("daysOff");
		addLenght += daysOff;
		Sleep(750);
	}
	ShowMessage("Prosjecna duljina trajanja odmora je: " + String(float(addLenght)/float(countDays)));
}
//---------------------------------------------------------------------------
