//---------------------------------------------------------------------------

#ifndef adminHomeH
#define adminHomeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <REST.Client.hpp>
#include <REST.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
//---------------------------------------------------------------------------
class TadminHomeWindow : public TForm
{
__published:	// IDE-managed Components
	TListView *listCars;
	TButton *newVehicleButton;
	TButton *loadVehiclesButton;
	TXMLDocument *XMLDocument2;
	TButton *deleteVehicleButton;
	TButton *showDatabase;
	TButton *Button1;
	TGroupBox *GroupBox1;
	TGroupBox *GroupBox2;
	TIdUDPClient *UDPClient;
	TButton *getIP;
	TRESTClient *RESTClient1;
	TRESTRequest *RESTRequest1;
	TRESTResponse *RESTResponse1;
	TMemo *showIP;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TButton *editPermissions;
	TButton *getUsers;
	TButton *Button2;
	void __fastcall newVehicleButtonClick(TObject *Sender);
	void __fastcall loadVehiclesButtonClick(TObject *Sender);
	void __fastcall deleteVehicleButtonClick(TObject *Sender);
	void __fastcall showDatabaseClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall editPermissionsClick(TObject *Sender);
	void __fastcall getIPClick(TObject *Sender);
	void __fastcall getUsersClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TadminHomeWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TadminHomeWindow *adminHomeWindow;
//---------------------------------------------------------------------------
#endif
