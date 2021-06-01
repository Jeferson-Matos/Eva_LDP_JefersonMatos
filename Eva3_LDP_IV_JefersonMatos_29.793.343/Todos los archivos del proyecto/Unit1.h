//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *L_Titulo;
	TEdit *T_Nombre;
	TEdit *T_Apellido;
	TComboBox *T_Civil;
	TComboBox *T_Sexo;
	TLabel *L_Civil;
	TLabel *L_Nombre;
	TLabel *L_Apellido;
	TLabel *L_Fecha;
	TLabel *L_Sexo;
	TLabel *L_Telf;
	TEdit *T_Telf;
	TButton *B_Form2;
	TComboBox *D_Mes;
	TComboBox *D_Axo;
	TComboBox *D_Dia;
	void __fastcall B_Form2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
