//---------------------------------------------------------------------------

#ifndef addNewVehicleH
#define addNewVehicleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
//---------------------------------------------------------------------------
class TaddVehicleWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *noviManufacturer;
	TEdit *noviModel;
	TCheckBox *checkAC;
	TCheckBox *checkBluetooth;
	TCheckBox *checkENC;
	TCheckBox *checkCruiseControl;
	TButton *Button1;
	TXMLDocument *XMLDocument2;
	TComboBox *noviFuel;
	TComboBox *noviDoors;
	TComboBox *noviShift;
	TComboBox *noviDrive;
	TIdUDPClient *UDPClient;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TaddVehicleWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TaddVehicleWindow *addVehicleWindow;
//---------------------------------------------------------------------------
#endif
