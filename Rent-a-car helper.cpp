//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
#include <registry.hpp>
//---------------------------------------------------------------------------
USEFORM("register.cpp", registerWindow);
USEFORM("login.cpp", loginWindow);
USEFORM("vacation.cpp", vacationWindow);
USEFORM("ticket.cpp", ticketWindow);
USEFORM("adminHome.cpp", adminHomeWindow);
USEFORM("adminChange.cpp", changeAdmin);
USEFORM("addNewVehicle.cpp", addVehicleWindow);
USEFORM("HTTP.cpp", HTTPWindow);
USEFORM("home.cpp", homeWindow);
USEFORM("database.cpp", databaseWindow);
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
				ShowMessage("Zabranjeno je pokretanje jo? jedne instance aplikacije Rent-a-car helper!");
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
		Application->CreateForm(__classid(TticketWindow), &ticketWindow);
		Application->CreateForm(__classid(TchangeAdmin), &changeAdmin);
		Application->CreateForm(__classid(TvacationWindow), &vacationWindow);
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
