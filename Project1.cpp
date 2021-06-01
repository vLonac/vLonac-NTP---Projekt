//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("register.cpp", registerWindow);
USEFORM("adminHome.cpp", adminHomeWindow);
USEFORM("home.cpp", homeWindow);
USEFORM("login.cpp", loginWindow);
USEFORM("addNewVehicle.cpp", addVehicleWindow);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TloginWindow), &loginWindow);
		Application->CreateForm(__classid(TregisterWindow), &registerWindow);
		Application->CreateForm(__classid(ThomeWindow), &homeWindow);
		Application->CreateForm(__classid(TadminHomeWindow), &adminHomeWindow);
		Application->CreateForm(__classid(TaddVehicleWindow), &addVehicleWindow);
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
