#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10, *p1=NULL, *p2=NULL;
    int *puntero = &a;
    cout << "Valor de a: " << a << endl;
    cout << "Direccion de a: " << &a << endl;
    cout << "Valor/contenido de puntero: " << puntero << endl;
    cout << "Direccion de puntero: " << &puntero << endl;
    cout << "Valor de a a traves del puntero: " << *puntero << endl;
    return 0;
}