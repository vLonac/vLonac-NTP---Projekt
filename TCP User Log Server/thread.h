//---------------------------------------------------------------------------

#ifndef threadH
#define threadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TSyncronize : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TSyncronize(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
