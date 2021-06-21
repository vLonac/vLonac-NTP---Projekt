//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include <registry.hpp>
//---------------------------------------------------------------------------
USEFORM("login.cpp", loginWindow);
USEFORM("register.cpp", registerWindow);
USEFORM("addNewVehicle.cpp", addVehicleWindow);
USEFORM("adminHome.cpp", adminHomeWindow);
USEFORM("database.cpp", databaseWindow);
USEFORM("home.cpp", homeWindow);
USEFORM("HTTP.cpp", HTTPWindow);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	TIniFile *ini = new TIniFile(GetCurrentDir() + "sUsername.ini");

	String stanje = ini->ReadString("LoginWindow", "Double instances", 1);
	if(stanje=="1") {
		HANDLE mutexObjekt = CreateMutex(NULL, FALSE, L"Rent-a-car helper");
		if(mutexObjekt == NULL)
			ShowMessage(GetLastError());
		else
			if(GetLastError() == ERROR_ALREADY_EXISTS) {
				ShowMessage("Zabranjeno je pokretanje jo� jedne instance aplikacije Rent-a-car helper!");
				return -1;
			}
	}



	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TloginWindow), &loginWindow);
		Application->CreateForm(__classid(TregisterWindow), &registerWindow);
		Application->CreateForm(__classid(ThomeWindow), &homeWindow);
		Application->CreateForm(__classid(TadminHomeWindow), &adminHomeWindow);
		Application->CreateForm(__classid(TaddVehicleWindow), &addVehicleWindow);
		Application->CreateForm(__classid(TdatabaseWindow), &databaseWindow);
		Application->CreateForm(__classid(THTTPWindow), &HTTPWindow);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------