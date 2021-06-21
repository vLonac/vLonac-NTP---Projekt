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
class TTCPWindow : public TForm
{
__published:	// IDE-managed Components
	TIdTCPServer *IdTCPServer1;
	TEdit *logEdit;
	void __fastcall IdTCPServer1Execute(TIdContext *AContext);
private:	// User declarations
public:		// User declarations
	__fastcall TTCPWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTCPWindow *TCPWindow;
//---------------------------------------------------------------------------
#endif
