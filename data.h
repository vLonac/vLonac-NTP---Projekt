
// ***************************************************************************************** //
//                                                                                         
//                                    XML Data Binding                                     
//                                                                                         
//         Generated on: 1.5.2021. 17:18:31                                                
//       Generated from: D:\Projekti C++ Builder\vLonac-NTP---Projekt-Sa-XML-om\data.xml   
//   Settings stored in: D:\Projekti C++ Builder\vLonac-NTP---Projekt-Sa-XML-om\data.xdb   
//                                                                                         
// ***************************************************************************************** //

#ifndef   dataH
#define   dataH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLusersType;
typedef System::DelphiInterface<IXMLusersType> _di_IXMLusersType;
__interface IXMLuserType;
typedef System::DelphiInterface<IXMLuserType> _di_IXMLuserType;

// IXMLusersType 

__interface INTERFACE_UUID("{FED5BAEC-428D-4F96-A9FE-27B8596E2FFB}") IXMLusersType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLuserType __fastcall Get_user(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLuserType __fastcall Add() = 0;
  virtual _di_IXMLuserType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLuserType user[int Index] = { read=Get_user };/* default */
};

// IXMLuserType 

__interface INTERFACE_UUID("{529BF55D-7156-4A17-BCC1-31E55A744E72}") IXMLuserType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_username() = 0;
  virtual System::UnicodeString __fastcall Get_password() = 0;
  virtual System::UnicodeString __fastcall Get_name() = 0;
  virtual System::UnicodeString __fastcall Get_surname() = 0;
  virtual System::UnicodeString __fastcall Get_email() = 0;
  virtual System::UnicodeString __fastcall Get_birthDate() = 0;
  virtual bool __fastcall Get_administrator() = 0;
  virtual void __fastcall Set_username(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_password(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_name(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_surname(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_email(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_birthDate(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_administrator(bool Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString username = { read=Get_username, write=Set_username };
  __property System::UnicodeString password = { read=Get_password, write=Set_password };
  __property System::UnicodeString name = { read=Get_name, write=Set_name };
  __property System::UnicodeString surname = { read=Get_surname, write=Set_surname };
  __property System::UnicodeString email = { read=Get_email, write=Set_email };
  __property System::UnicodeString birthDate = { read=Get_birthDate, write=Set_birthDate };
  __property bool administrator = { read=Get_administrator, write=Set_administrator };
};

// Forward Decls 

class TXMLusersType;
class TXMLuserType;

// TXMLusersType 

class TXMLusersType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLusersType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLusersType 
  virtual _di_IXMLuserType __fastcall Get_user(int Index);
  virtual _di_IXMLuserType __fastcall Add();
  virtual _di_IXMLuserType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLuserType 

class TXMLuserType : public Xml::Xmldoc::TXMLNode, public IXMLuserType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLuserType 
  virtual System::UnicodeString __fastcall Get_username();
  virtual System::UnicodeString __fastcall Get_password();
  virtual System::UnicodeString __fastcall Get_name();
  virtual System::UnicodeString __fastcall Get_surname();
  virtual System::UnicodeString __fastcall Get_email();
  virtual System::UnicodeString __fastcall Get_birthDate();
  virtual bool __fastcall Get_administrator();
  virtual void __fastcall Set_username(System::UnicodeString Value);
  virtual void __fastcall Set_password(System::UnicodeString Value);
  virtual void __fastcall Set_name(System::UnicodeString Value);
  virtual void __fastcall Set_surname(System::UnicodeString Value);
  virtual void __fastcall Set_email(System::UnicodeString Value);
  virtual void __fastcall Set_birthDate(System::UnicodeString Value);
  virtual void __fastcall Set_administrator(bool Value);
};

// Global Functions 

_di_IXMLusersType __fastcall Getusers(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLusersType __fastcall Getusers(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLusersType __fastcall Loadusers(const System::UnicodeString& FileName);
_di_IXMLusersType __fastcall  Newusers();

#define TargetNamespace ""

#endif