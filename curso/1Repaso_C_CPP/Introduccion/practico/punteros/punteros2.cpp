#include <iostream>

using namespace std;

int main() {
    int x = 15, *p = NULL, *q = NULL;
    p = &x;
    q = p;
    
    cout << &x << "\t" << "Direccion de memoria de x" << endl;
    cout << p << "\t" << "Valor guardado en p" << endl;
    cout << q << "\t" << "Valor guardado en q" << endl;
    cout << &p << "\t" << "Direccion de memoria de p" << endl;
    cout << &q << "\t" << "Direccion de memoria de q" << endl;
    cout << *p << "\t\t" << "Valor de p" << endl;
    cout << *q << "\t\t" << "Valor de q" << endl;
    cout << x << "\t\t" << "Valor de x" << endl;
    
    return 0;
}
