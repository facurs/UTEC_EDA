#include<iostream>
#include "../Cabeceras/Funciones.hpp"
#include <cstdlib>
using namespace std;

/*
INGRESA A LA RUTA DEL PROYECTO
cd /ruta/hacia/tu/directorio/Proyecto

PARA C++ USAR g++ Y PARA C USAR gcc
gcc archivo_fuente.c -o nombre_ejecutable

Al ejecutar los dos archivos funciona el programa
g++ main.cpp Funciones.cpp -o nombre_ejecutable

*/

int main (int argc, char *argv[]) {
	int a, b, opcion=1;
	do
	{
		menu();
		cin>>opcion;
		switch(opcion)
		{
		case 1:
			cout<<"Ingrese primer número: ";
			cin>>a;
			cout<<"Ingrese segundo número: ";
			cin>>b;
			cout<<"El resultado es: "<<suma(a, b);  //on-the-fly
			system("pause");
			break;
		case 0:
			system("pause");
			break;
		default:
			cout<<"Opcion incorrecta";
			system("pause");
			break;
		}
	}while(opcion!=0);
	return 0;
}
