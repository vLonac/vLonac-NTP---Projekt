//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.WinXCtrls.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
//---------------------------------------------------------------------------
class TloginWindow : public TForm
{
__published:	// IDE-managed Components
	TLabel *credits;
	TGroupBox *loginGroup;
	TEdit *username;
	TLabel *loginUsernameLabel;
	TButton *loginButton;
	TLabel *loginPasswordLabel;
	TEdit *password;
	TLabel *newUserLabel;
	TButton *newUserButton;
	TImage *Image1;
	TListView *ListView1;
	TXMLDocument *XMLDocument1;
	TButton *xmlLoad;
	TCheckBox *rememberUsername;
	TToggleSwitch *switchInstance;
	TLabel *Label1;
	TIdTCPClient *loginClient;
	TCheckBox *offlineCheck;
	TButton *aboutUs;
	void __fastcall newUserButtonClick(TObject *Sender);
	void __fastcall loginButtonClick(TObject *Sender);
	void __fastcall xmlLoadClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall aboutUsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TloginWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TloginWindow *loginWindow;
//---------------------------------------------------------------------------
#endif
