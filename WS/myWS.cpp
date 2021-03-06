// ************************************************************************ //
// Implementation class for interface ImyWS
// ************************************************************************ //


#include <stdio.h>
#include <vcl.h>
#pragma hdrstop



#if !defined(__myWS_h__)
#include "myWS.h"
#endif

#include "FormUnit1.h"
#include "data.h"
// ************************************************************************ //
//  TmyWSImpl implements interface ImyWS
// ************************************************************************ //
class TmyWSImpl : public TInvokableClass, public ImyWS
{
public:
    /* Sample methods of ImyWS */
  SampleEnum     echoEnum(SampleEnum eValue);
  TDoubleArray   echoDoubleArray(const TDoubleArray daValue);
  TSampleStruct* echoStruct(const TSampleStruct* pStruct);
  double         echoDouble(double dValue);
  void           getUserStatus(){
	  _di_IXMLusersType userData = Getusers(Form1->XMLDocument1);
	  int countAdmin=0, countUser=0;
	  for(int i = 0; i < userData->Count; i++){
		if(userData->user[i]->Get_administrator()==true){countAdmin++;}
		else if(userData->user[i]->Get_administrator()==false){countUser++;}
		}
		ShowMessage("Broj administratora: " + String(countAdmin) + "\nBroj korisnika: " + String(countUser));
  };

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
};


SampleEnum TmyWSImpl::echoEnum(SampleEnum eValue)
{
  /* TODO : Implement method echoEnum */
  return eValue;
}

TDoubleArray TmyWSImpl::echoDoubleArray(TDoubleArray daValue)
{
  /* TODO : Implement method echoDoubleArray */
  return daValue;
}

TSampleStruct* TmyWSImpl::echoStruct(const TSampleStruct* pEmployee)
{
  /* TODO : Implement method echoMyEmployee */
  return new TSampleStruct();
}

double TmyWSImpl::echoDouble(const double dValue)
{
  /* TODO : Implement method echoDouble */
  return dValue;
}


static void __fastcall myWSFactory(System::TObject* &obj)
{
  static _di_ImyWS iInstance;
  static TmyWSImpl *instance = 0;
  if (!instance)
  {
    instance = new TmyWSImpl();
    instance->GetInterface(iInstance);
  }
  obj = instance;
}

// ************************************************************************ //
//  The following routine registers the interface and implementation class
//  as well as the type used by the methods of the interface
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(ImyWS));
  InvRegistry()->RegisterInvokableClass(__classid(TmyWSImpl), myWSFactory);
}
#pragma startup RegTypes 32

