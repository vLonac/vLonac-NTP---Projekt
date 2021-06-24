//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "thread.h"
#include "TCP.cpp"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TSyncronize::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall TSyncronize::TSyncronize(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TSyncronize::Execute()
{
    void newConnection(String text);
}
//---------------------------------------------------------------------------
