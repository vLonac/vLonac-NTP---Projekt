// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : D:\GitHub\vLonac-NTP---Projekt\WS\ImyWSWSDL.xml
//  >Import : D:\GitHub\vLonac-NTP---Projekt\WS\ImyWSWSDL.xml>0
//  >Import : D:\GitHub\vLonac-NTP---Projekt\WS\ImyWSWSDL.xml>1
// Version  : 1.0
// (29/06/2021 16:24:32 - - $Rev: 96726 $)
// ************************************************************************ //

#ifndef   ImyWSWSDLH
#define   ImyWSWSDLH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif

namespace NS_ImyWSWSDL {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:string          - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:double          - "http://www.w3.org/2001/XMLSchema"[Gbl]

class SOAP_REMOTABLE_CLASS TSampleStruct;

enum class SampleEnum   /* "urn:myWS"[GblSmpl] */
{
  etNone, 
  etAFew, 
  etSome, 
  etALot
};

class SampleEnum_TypeInfoHolder : public TObject {
  SampleEnum __instanceType;
public:
__published:
  __property SampleEnum __propType = { read=__instanceType };
};



// ************************************************************************ //
// XML       : TSampleStruct, global, <complexType>
// Namespace : urn:@:myWS
// ************************************************************************ //
class TSampleStruct : public TRemotable {
private:
  UnicodeString   FLastName;
  UnicodeString   FFirstName;
  double          FSalary;
__published:
  __property UnicodeString   LastName = { read=FLastName, write=FLastName };
  __property UnicodeString  FirstName = { read=FFirstName, write=FFirstName };
  __property double         Salary = { read=FSalary, write=FSalary };
};


typedef DynamicArray<double>      TDoubleDynArray; /* "urn:myWS"[GblCplx] */

// ************************************************************************ //
// Namespace : urn:myWS-ImyWS
// soapAction: urn:myWS-ImyWS#%operationName%
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// use       : encoded
// binding   : ImyWSbinding
// service   : ImyWSservice
// port      : ImyWSPort
// URL       : http://localhost:8080/soap/ImyWS
// ************************************************************************ //
__interface INTERFACE_UUID("{4F41870C-75FE-F6E5-DE27-4049A954CADC}") ImyWS : public IInvokable
{
public:
  virtual SampleEnum      echoEnum(const SampleEnum eValue) = 0; 
  virtual TDoubleDynArray echoDoubleArray(const TDoubleDynArray daValue) = 0; 
  virtual TSampleStruct*  echoStruct(const TSampleStruct* pEmployee) = 0; 
  virtual double          echoDouble(const double dValue) = 0; 
  virtual void            getUserStatus() = 0; 
};
typedef DelphiInterface<ImyWS> _di_ImyWS;

_di_ImyWS GetImyWS(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_ImyWSWSDL

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_ImyWSWSDL;
#endif



#endif // ImyWSWSDLH
