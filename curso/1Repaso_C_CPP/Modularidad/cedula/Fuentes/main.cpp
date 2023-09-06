#include <iostream>
#include <stdio.h>
#include "miFuncion.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    char cedula[10];
    cout << "Ingrese su cedula: ";
    cin.getline(cedula, sizeof(cedula));
    if(digVerif(cedula)==1)
        cout << "Cedula valida" << endl;
    else
        cout << "Cedula invalida" << endl;
    return 0;
}