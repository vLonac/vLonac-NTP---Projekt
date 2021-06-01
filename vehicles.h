
// ************************************************************************* //
//                                                                         
//                            XML Data Binding                             
//                                                                         
//         Generated on: 1.6.2021. 16:22:22                                
//       Generated from: D:\Projekti C++ Builder\sa githuba\vehicles.xml   
//   Settings stored in: D:\Projekti C++ Builder\sa githuba\vehicles.xdb   
//                                                                         
// ************************************************************************* //

#ifndef   vehiclesH
#define   vehiclesH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLvehiclesType;
typedef System::DelphiInterface<IXMLvehiclesType> _di_IXMLvehiclesType;
__interface IXMLvehicleType;
typedef System::DelphiInterface<IXMLvehicleType> _di_IXMLvehicleType;

// IXMLvehiclesType 

__interface INTERFACE_UUID("{C7EE3928-C558-4FB1-B7FB-802B97AC3DC0}") IXMLvehiclesType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLvehicleType __fastcall Get_vehicle(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLvehicleType __fastcall Add() = 0;
  virtual _di_IXMLvehicleType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLvehicleType vehicle[int Index] = { read=Get_vehicle };/* default */
};

// IXMLvehicleType 

__interface INTERFACE_UUID("{1FB6D397-06F9-4FA9-9526-932A7730DB74}") IXMLvehicleType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_manufacturer() = 0;
  virtual System::UnicodeString __fastcall Get_model() = 0;
  virtual System::UnicodeString __fastcall Get_fuel() = 0;
  virtual int __fastcall Get_doors() = 0;
  virtual System::UnicodeString __fastcall Get_shift() = 0;
  virtual System::UnicodeString __fastcall Get_drive() = 0;
  virtual bool __fastcall Get_AC() = 0;
  virtual bool __fastcall Get_bluetooth() = 0;
  virtual bool __fastcall Get_ENC() = 0;
  virtual bool __fastcall Get_cruiseControl() = 0;
  virtual void __fastcall Set_manufacturer(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_model(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_fuel(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_doors(int Value) = 0;
  virtual void __fastcall Set_shift(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_drive(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_AC(bool Value) = 0;
  virtual void __fastcall Set_bluetooth(bool Value) = 0;
  virtual void __fastcall Set_ENC(bool Value) = 0;
  virtual void __fastcall Set_cruiseControl(bool Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString manufacturer = { read=Get_manufacturer, write=Set_manufacturer };
  __property System::UnicodeString model = { read=Get_model, write=Set_model };
  __property System::UnicodeString fuel = { read=Get_fuel, write=Set_fuel };
  __property int doors = { read=Get_doors, write=Set_doors };
  __property System::UnicodeString shift = { read=Get_shift, write=Set_shift };
  __property System::UnicodeString drive = { read=Get_drive, write=Set_drive };
  __property bool AC = { read=Get_AC, write=Set_AC };
  __property bool bluetooth = { read=Get_bluetooth, write=Set_bluetooth };
  __property bool ENC = { read=Get_ENC, write=Set_ENC };
  __property bool cruiseControl = { read=Get_cruiseControl, write=Set_cruiseControl };
};

// Forward Decls 

class TXMLvehiclesType;
class TXMLvehicleType;

// TXMLvehiclesType 

class TXMLvehiclesType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLvehiclesType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLvehiclesType 
  virtual _di_IXMLvehicleType __fastcall Get_vehicle(int Index);
  virtual _di_IXMLvehicleType __fastcall Add();
  virtual _di_IXMLvehicleType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLvehicleType 

class TXMLvehicleType : public Xml::Xmldoc::TXMLNode, public IXMLvehicleType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLvehicleType 
  virtual System::UnicodeString __fastcall Get_manufacturer();
  virtual System::UnicodeString __fastcall Get_model();
  virtual System::UnicodeString __fastcall Get_fuel();
  virtual int __fastcall Get_doors();
  virtual System::UnicodeString __fastcall Get_shift();
  virtual System::UnicodeString __fastcall Get_drive();
  virtual bool __fastcall Get_AC();
  virtual bool __fastcall Get_bluetooth();
  virtual bool __fastcall Get_ENC();
  virtual bool __fastcall Get_cruiseControl();
  virtual void __fastcall Set_manufacturer(System::UnicodeString Value);
  virtual void __fastcall Set_model(System::UnicodeString Value);
  virtual void __fastcall Set_fuel(System::UnicodeString Value);
  virtual void __fastcall Set_doors(int Value);
  virtual void __fastcall Set_shift(System::UnicodeString Value);
  virtual void __fastcall Set_drive(System::UnicodeString Value);
  virtual void __fastcall Set_AC(bool Value);
  virtual void __fastcall Set_bluetooth(bool Value);
  virtual void __fastcall Set_ENC(bool Value);
  virtual void __fastcall Set_cruiseControl(bool Value);
};

// Global Functions 

_di_IXMLvehiclesType __fastcall Getvehicles(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLvehiclesType __fastcall Getvehicles(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLvehiclesType __fastcall Loadvehicles(const System::UnicodeString& FileName);
_di_IXMLvehiclesType __fastcall  Newvehicles();

#define TargetNamespace ""

#endif