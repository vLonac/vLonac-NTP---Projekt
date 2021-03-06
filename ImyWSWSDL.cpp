// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : D:\GitHub\vLonac-NTP---Projekt\WS\ImyWSWSDL.xml
//  >Import : D:\GitHub\vLonac-NTP---Projekt\WS\ImyWSWSDL.xml>0
//  >Import : D:\GitHub\vLonac-NTP---Projekt\WS\ImyWSWSDL.xml>1
// Version  : 1.0
// (29/06/2021 16:24:32 - - $Rev: 96726 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "ImyWSWSDL.h"



namespace NS_ImyWSWSDL {

_di_ImyWS GetImyWS(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "D:\\GitHub\\vLonac-NTP---Projekt\\WS\\ImyWSWSDL.xml";
  static const char* defURL = "http://localhost:8080/soap/ImyWS";
  static const char* defSvc = "ImyWSservice";
  static const char* defPrt = "ImyWSPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_ImyWS service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* ImyWS */
  InvRegistry()->RegisterInterface(__delphirtti(ImyWS), L"urn:myWS-ImyWS", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(ImyWS), L"urn:myWS-ImyWS#%operationName%");
  /* ImyWS->echoEnum */
  InvRegistry()->RegisterParamInfo(__delphirtti(ImyWS), "echoEnum", "return_", L"return", L"");
  /* ImyWS->echoDoubleArray */
  InvRegistry()->RegisterParamInfo(__delphirtti(ImyWS), "echoDoubleArray", "return_", L"return", L"");
  /* ImyWS->echoStruct */
  InvRegistry()->RegisterParamInfo(__delphirtti(ImyWS), "echoStruct", "return_", L"return", L"");
  /* ImyWS->echoDouble */
  InvRegistry()->RegisterParamInfo(__delphirtti(ImyWS), "echoDouble", "return_", L"return", L"");
  /* SampleEnum */
  /*RemClassRegistry()->RegisterXSInfo(GetClsMemberTypeInfo(__typeinfo(SampleEnum_TypeInfoHolder)), L"urn:myWS", L"SampleEnum");
   TSampleStruct */
  RemClassRegistry()->RegisterXSClass(__classid(TSampleStruct), L"urn:@:myWS", L"TSampleStruct");
  /* TDoubleDynArray */
  RemClassRegistry()->RegisterXSInfo(__delphirtti(TDoubleDynArray), L"urn:myWS", L"TDoubleDynArray");
}
#pragma startup RegTypes 32

};     // NS_ImyWSWSDL

