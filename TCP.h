//---------------------------------------------------------------------------

#ifndef TCPH
#define TCPH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdContext.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPServer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TIdTCPServer *IdTCPServer1;
	TListBox *ListBoxLog;
	void __fastcall IdTCPServer1Execute(TIdContext *AContext);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
