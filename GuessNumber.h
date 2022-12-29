//---------------------------------------------------------------------------

#ifndef GuessNumberH
#define GuessNumberH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TLabel *TitleLabel;
	TEdit *NumbersEdit;
	TButton *ConfirmButton;
	TLabel *HelperLabel;
	TLabel *CounterLabel;
	TLabel *Label1;
	void __fastcall ConfirmButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
