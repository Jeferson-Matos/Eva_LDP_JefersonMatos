//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"  //incluye el primer formulario
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::B_Form1Click(TObject *Sender)
{
	Close( ); // Funcion para cerrar el formulario

	Form1->Show( ); //Funcion para mostrar el primer formulario
}
//---------------------------------------------------------------------------
