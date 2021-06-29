//---------------------------------------------------------------------------

#ifndef adminChangeH
#define adminChangeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
//---------------------------------------------------------------------------
class TchangeAdmin : public TForm
{
__published:	// IDE-managed Components
	TButton *buttonMakeAdmin;
	TButton *buttonRemoveAdmin;
	TListView *userList;
	TXMLDocument *XMLDocument1;
	void __fastcall buttonMakeAdminClick(TObject *Sender);
	void __fastcall buttonRemoveAdminClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TchangeAdmin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TchangeAdmin *changeAdmin;
//---------------------------------------------------------------------------
#endif
