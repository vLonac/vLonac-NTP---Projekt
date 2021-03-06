
// ************************************************************************* //
//                                                                         
//                            XML Data Binding                             
//                                                                         
//         Generated on: 1.6.2021. 16:22:22                                
//       Generated from: D:\Projekti C++ Builder\sa githuba\vehicles.xml   
//   Settings stored in: D:\Projekti C++ Builder\sa githuba\vehicles.xdb   
//                                                                         
// ************************************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "vehicles.h"


// Global Functions 

_di_IXMLvehiclesType __fastcall Getvehicles(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLvehiclesType) Doc->GetDocBinding("vehicles", __classid(TXMLvehiclesType), TargetNamespace);
};

_di_IXMLvehiclesType __fastcall Getvehicles(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getvehicles(DocIntf);
};

_di_IXMLvehiclesType __fastcall Loadvehicles(const System::UnicodeString& FileName)
{
  return (_di_IXMLvehiclesType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("vehicles", __classid(TXMLvehiclesType), TargetNamespace);
};

_di_IXMLvehiclesType __fastcall  Newvehicles()
{
  return (_di_IXMLvehiclesType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("vehicles", __classid(TXMLvehiclesType), TargetNamespace);
};

// TXMLvehiclesType 

void __fastcall TXMLvehiclesType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("vehicle"), __classid(TXMLvehicleType));
  ItemTag = "vehicle";
  ItemInterface = __uuidof(IXMLvehicleType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLvehicleType __fastcall TXMLvehiclesType::Get_vehicle(int Index)
{
  return (_di_IXMLvehicleType) List->Nodes[Index];
};

_di_IXMLvehicleType __fastcall TXMLvehiclesType::Add()
{
  return (_di_IXMLvehicleType) AddItem(-1);
};

_di_IXMLvehicleType __fastcall TXMLvehiclesType::Insert(const int Index)
{
  return (_di_IXMLvehicleType) AddItem(Index);
};

// TXMLvehicleType 

System::UnicodeString __fastcall TXMLvehicleType::Get_manufacturer()
{
  return GetChildNodes()->Nodes[System::UnicodeString("manufacturer")]->Text;
};

void __fastcall TXMLvehicleType::Set_manufacturer(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("manufacturer")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLvehicleType::Get_model()
{
  return GetChildNodes()->Nodes[System::UnicodeString("model")]->Text;
};

void __fastcall TXMLvehicleType::Set_model(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("model")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLvehicleType::Get_fuel()
{
  return GetChildNodes()->Nodes[System::UnicodeString("fuel")]->Text;
};

void __fastcall TXMLvehicleType::Set_fuel(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("fuel")]->NodeValue = Value;
};

int __fastcall TXMLvehicleType::Get_doors()
{
  return GetChildNodes()->Nodes[System::UnicodeString("doors")]->NodeValue.operator int();
};

void __fastcall TXMLvehicleType::Set_doors(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("doors")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLvehicleType::Get_shift()
{
  return GetChildNodes()->Nodes[System::UnicodeString("shift")]->Text;
};

void __fastcall TXMLvehicleType::Set_shift(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("shift")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLvehicleType::Get_drive()
{
  return GetChildNodes()->Nodes[System::UnicodeString("drive")]->Text;
};

void __fastcall TXMLvehicleType::Set_drive(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("drive")]->NodeValue = Value;
};

bool __fastcall TXMLvehicleType::Get_AC()
{
  return GetChildNodes()->Nodes[System::UnicodeString("AC")]->NodeValue.operator bool();
};

void __fastcall TXMLvehicleType::Set_AC(bool Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("AC")]->NodeValue = Value;
};

bool __fastcall TXMLvehicleType::Get_bluetooth()
{
  return GetChildNodes()->Nodes[System::UnicodeString("bluetooth")]->NodeValue.operator bool();
};

void __fastcall TXMLvehicleType::Set_bluetooth(bool Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("bluetooth")]->NodeValue = Value;
};

bool __fastcall TXMLvehicleType::Get_ENC()
{
  return GetChildNodes()->Nodes[System::UnicodeString("ENC")]->NodeValue.operator bool();
};

void __fastcall TXMLvehicleType::Set_ENC(bool Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("ENC")]->NodeValue = Value;
};

bool __fastcall TXMLvehicleType::Get_cruiseControl()
{
  return GetChildNodes()->Nodes[System::UnicodeString("cruiseControl")]->NodeValue.operator bool();
};

void __fastcall TXMLvehicleType::Set_cruiseControl(bool Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("cruiseControl")]->NodeValue = Value;
};
