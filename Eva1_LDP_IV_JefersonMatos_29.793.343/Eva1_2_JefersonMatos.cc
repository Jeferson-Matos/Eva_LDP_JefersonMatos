//2. Escriba un programa que permita determina si el número es par e impar

//respuesta:

#include <iostream> // Libreria necesaria para las entradas y salidas del programa
#include <cstdlib> // Libreria necesaria para la conversion de datos
#include <stdlib.h> // Libreria necesaria para usar la funcion "system()"

using namespace std;

int main(void){

    int numero;
    char continuar,entrada[30];

	//Incorpore todo el programa dentro de un bucle "While", por si el usuario quiere ingresar otro
	//valor sin la necesidad de tener que cerrar y volver a abrir el programa

	continuar = 's';
	while (continuar == 's' || continuar == 'S'){

	//Emplee la funcion system("cls"), pora limpiar la pantalla, por si el usuario quiere ingresar otro valor

		system("cls");

	//Esta seccion sirve como presentacion del programa y, pide al usuario ingresar un valor
	//a la variable entrada para de esa manera realizar todo los calculos
	
	cout<<"Programa para identificar si un numero es par o impar"<<endl;
	cout<<""<<endl;
	cout<<"Por favor ingrese un numero: ";cin>>entrada;
	cout<<endl;

	//incorpore la funcion "atof()" por si el usuario ingresa por error un caracter en vez de un numero valido
	//Para de esta manera evitar que el programa se trabe, convirtiendo los caracteres no numericos en 0
	//Para poder utilizar esa funcion defini la variable "entrada" como una cadena de caracteres

	numero=atof(entrada);

	//para calcular si un numero es par o no emplee la funcion "div()", dividiendo el numero entre 2, y luego
	//use el ".rem" al final de la variable "calculo" para obtener el remanente de la division, si este es igual
	// a "0" el numero es par, si no es igual a "0" el numero es impar

	div_t calculo = div(numero,2);
	
	if (calculo.rem == 0){
    	cout<<"El numero "<<numero<<" es par"<<endl;
	}else{
    	cout<<"El numero "<<numero<<" es impar"<<endl;
	}
	
	//Esta seccion sirve para indicar al usuario si esta interezado en ingresar otro valor, o si
	//quiere salir del programa
	
	cout<<""<<endl;
	cout<<"Deseas introducir otro numero?"<<endl;
	cout<<"Presiona S para continuar o N para salir: ";

	cin>>continuar;

} 
return 0;
}
