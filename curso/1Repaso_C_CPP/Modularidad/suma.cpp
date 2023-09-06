#include <iostream>

using namespace std;

int suma(int, int); //prototipo o firma de la funcion

int main(){
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "La suma es: " << suma(a, b) << endl; //calculo on the fly
    return 0;
}

int suma(int num1, int num2){
    return num1 + num2; 
}

void sumarEnB(int a, int b, int &c){
    c = a + b;
}