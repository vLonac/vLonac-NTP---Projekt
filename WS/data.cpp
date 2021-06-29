
// ******************************************************************** //
//                                                                    
//                          XML Data Binding                          
//                                                                    
//         Generated on: 29/06/2021 16:17:05                          
//       Generated from: D:\GitHub\vLonac-NTP---Projekt\data.xml      
//   Settings stored in: D:\GitHub\vLonac-NTP---Projekt\WS\data.xdb   
//                                                                    
// ******************************************************************** //

#include <System.hpp>
#pragma hdrstop

#include "data.h"


// Global Functions 

_di_IXMLusersType __fastcall Getusers(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLusersType) Doc->GetDocBinding("users", __classid(TXMLusersType), TargetNamespace);
};

_di_IXMLusersType __fastcall Getusers(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getusers(DocIntf);
};

_di_IXMLusersType __fastcall Loadusers(const System::UnicodeString& FileName)
{
  return (_di_IXMLusersType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("users", __classid(TXMLusersType), TargetNamespace);
};

_di_IXMLusersType __fastcall  Newusers()
{
  return (_di_IXMLusersType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("users", __classid(TXMLusersType), TargetNamespace);
};

// TXMLusersType 

void __fastcall TXMLusersType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("user"), __classid(TXMLuserType));
  ItemTag = "user";
  ItemInterface = __uuidof(IXMLuserType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLuserType __fastcall TXMLusersType::Get_user(int Index)
{
  return (_di_IXMLuserType) List->Nodes[Index];
};

_di_IXMLuserType __fastcall TXMLusersType::Add()
{
  return (_di_IXMLuserType) AddItem(-1);
};

_di_IXMLuserType __fastcall TXMLusersType::Insert(const int Index)
{
  return (_di_IXMLuserType) AddItem(Index);
};

// TXMLuserType 

System::UnicodeString __fastcall TXMLuserType::Get_username()
{
  return GetChildNodes()->Nodes[System::UnicodeString("username")]->Text;
};

void __fastcall TXMLuserType::Set_username(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("username")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLuserType::Get_password()
{
  return GetChildNodes()->Nodes[System::UnicodeString("password")]->Text;
};

void __fastcall TXMLuserType::Set_password(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("password")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLuserType::Get_name()
{
  return GetChildNodes()->Nodes[System::UnicodeString("name")]->Text;
};

void __fastcall TXMLuserType::Set_name(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLuserType::Get_surname()
{
  return GetChildNodes()->Nodes[System::UnicodeString("surname")]->Text;
};

void __fastcall TXMLuserType::Set_surname(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("surname")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLuserType::Get_email()
{
  return GetChildNodes()->Nodes[System::UnicodeString("email")]->Text;
};

void __fastcall TXMLuserType::Set_email(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("email")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLuserType::Get_birthDate()
{
  return GetChildNodes()->Nodes[System::UnicodeString("birthDate")]->Text;
};

void __fastcall TXMLuserType::Set_birthDate(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("birthDate")]->NodeValue = Value;
};

bool __fastcall TXMLuserType::Get_administrator()
{
  return GetChildNodes()->Nodes[System::UnicodeString("administrator")]->NodeValue.operator bool();
};

void __fastcall TXMLuserType::Set_administrator(bool Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("administrator")]->NodeValue = Value;
};
