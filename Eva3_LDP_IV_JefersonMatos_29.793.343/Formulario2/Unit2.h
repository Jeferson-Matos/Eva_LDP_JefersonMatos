//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TLabel *L_Titulo2;
	TEdit *T_Nombres2;
	TEdit *T_Apellidos2;
	TEdit *T_Civil2;
	TEdit *T_Fecha2;
	TEdit *T_Sexo2;
	TEdit *T_Telf2;
	TLabel *L_Nombres2;
	TLabel *L_Fecha2;
	TLabel *L_Sexo2;
	TLabel *L_Civil2;
	TLabel *L_Apellidos2;
	TLabel *L_Telf2;
	TButton *B_Form1;
	void __fastcall B_Form1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
