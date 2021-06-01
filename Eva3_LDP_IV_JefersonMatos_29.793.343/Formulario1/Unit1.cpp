//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"  //incluye el segundo formulario

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------





void __fastcall TForm1::B_Form2Click(TObject *Sender)
{
	 Hide( ); //funcion para esconder el primer formulario

	 Form2->Show( ); //funcion para mostrar el segundo formulario

	 Form2->T_Nombres2->Text=T_Nombre->Text;

	 Form2->T_Apellidos2->Text=T_Apellido->Text;

	 Form2->T_Fecha2->Text=D_Dia->Text+"/"+D_Mes->Text+"/"+D_Axo->Text;

	 Form2->T_Sexo2->Text=T_Sexo->Text;

	 Form2->T_Civil2->Text=T_Civil->Text;

	 Form2->T_Telf2->Text=T_Telf->Text;
}
//---------------------------------------------------------------------------

