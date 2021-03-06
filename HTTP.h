//---------------------------------------------------------------------------

#ifndef HTTPH
#define HTTPH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdHTTP.hpp>
#include <IdIOHandler.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdIOHandlerStack.hpp>
#include <IdSSL.hpp>
#include <IdSSLOpenSSL.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <Vcl.ComCtrls.hpp>
#include <IdIntercept.hpp>
#include <IdInterceptThrottler.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class THTTPWindow : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TProgressBar *progressBar;
	TButton *buttonCancel;
	TButton *buttonDownload;
	TIdHTTP *komponentaHTTP;
	TEdit *linkEdit;
	TIdInterceptThrottler *downloadSpeedLimiter;
	TButton *buttonSpeed3;
	TButton *buttonSpeed4;
	TButton *buttonSpeed1;
	TButton *buttonSpeed2;
	TGroupBox *GroupBox2;
	TLabel *statusLabel;
	TImage *Image1;
	TButton *buttonImage;
	void __fastcall buttonDownloadClick(TObject *Sender);
	void __fastcall komponentaHTTPWorkBegin(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCountMax);
	void __fastcall komponentaHTTPWork(TObject *ASender, TWorkMode AWorkMode, __int64 AWorkCount);
	void __fastcall komponentaHTTPWorkEnd(TObject *ASender, TWorkMode AWorkMode);
	void __fastcall buttonCancelClick(TObject *Sender);
	void __fastcall buttonSpeed1Click(TObject *Sender);
	void __fastcall buttonSpeed2Click(TObject *Sender);
	void __fastcall buttonSpeed3Click(TObject *Sender);
	void __fastcall buttonImageClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall THTTPWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THTTPWindow *HTTPWindow;
//---------------------------------------------------------------------------
#endif
