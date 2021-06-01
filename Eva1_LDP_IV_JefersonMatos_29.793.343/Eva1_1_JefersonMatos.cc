//1. 1.Realizar un programa en c++ obedeciendo a la siguiente argumentación:
//El costo de la carrera del IUTA puede ser cancelado de la siguiente manera : una inicla del 20% del costo completo y el resto debe
//ser cancelado en cuotas mensuales durante 3 años, imprima un conjunto de instrucciones que permita calcular e imprimir la
//inicial y el monto de las cuotas mensuales dado el costo de la carrera

//respuesta:

#include <iostream>// Libreria necesaria para las entradas y salidas del programa
#include <iomanip>// Libreria necesaria para usar la funcion "setprecision()"
#include <stdlib.h> // Libreria necesaria para usar la funcion "system()"

using namespace std;

int main(void){
	
	double CuotaInicial,Monto,Cuotas;
	char continuar, entrada[30];
	
	//Incorpore todo el programa dentro de un bucle "While", por si el usuario quiere ingresar otro
	//valor sin la necesidad de tener que cerrar y volver a abrir el programa
	
	continuar = 's';
	while (continuar == 's' || continuar == 'S'){
		
		//Emplee la funcion system("cls"), pora limpiar la pantalla, por si el usuario quiere ingresar otro valor
		
		system("cls");
	
		//Esta seccion sirve como presentacion del programa y, pide al usuario ingresar un valor
		//a la variable entrada para de esa manera realizar todo los calculos
		
		cout<<"Programa para calcular el costo de las cuotas de una carrera de 3"<<endl;
		cout<<"an#os en el IUTA"<<endl;
		cout<<endl;
		cout<<"Por favor ingrese el costo completo de la carrera: ";cin>>entrada;
		cout<<endl;
		
		//incorpore la funcion "atof()" por si el usuario ingresa por error un caracter en vez de un numero valido
		//Para de esta manera evitar que el programa se trabe, convirtiendo los caracteres no numericos en 0
		//Para poder utilizar esa funcion defini la variable "entrada" como una cadena de caracteres

		Monto = atof(entrada);
		
		//Para calcular la couta inicial de la carrera que es del 20%, realize una operacion matematica donde
		//multiplique el monto total de la carrera por 20, para luego dividirlo entre 100 asi pudiendo
		//sacar el porcentaje deseado
		
		CuotaInicial=Monto*20/100;
		Cuotas=(Monto-CuotaInicial);
		
		//En esta seccion se muestra el resultado de la couta inicial donde para evitar confunsion por parte del usuario
		//agrege 2 funciones las cuales son:
		//setprecision(2), para que el valor mostrado solo poseea 2 decimales
		//std::fixed, para evitar que se muestre notaciones cientificas con numeros grandes
		
		cout<<"La cuota inicial de la carrera es de: "<<std::fixed<<setprecision(2)<<CuotaInicial<<endl;
		
		//para realizar los calculos de las coutas mensuales de los 3 años, dividi el resultado de la variable
		//"coutas" entre 36 meses
		
		cout<<"Las cuotas mensuales de la carrera es de: "<<std::fixed<<setprecision(2)<<Cuotas/36<<endl;
		
		//Esta seccion sirve para indicar al usuario si esta interezado en ingresar otro valor, o si
		//quiere salir del programa
		
		cout<<endl;
		cout<<"Deseas introducir otro monto?"<<endl;
		cout<<"Presiona S para continuar o N para salir: ";

		cin>>continuar;
	
}
return 0;
}

	
