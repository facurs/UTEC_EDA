#include <iostream>
using namespace std;
int main()
{
    int i = 100, *p, *q;
    p = &i;
    q = p;
    if (p == q) /* estamos comparando dos punteros */
        cout << "p apunta a la misma dirección de memoria que q" << endl;
    *p = *q + 2; /* El * tiene más prioridad que el + */
    cout << "El valor de *p es: " << *p << endl;
    cout << "El valor de *q es: " << *q << endl;
    (*q)++; /* ante la duda de prioridades usamos paréntesis */
    cout << "El valor de *p es: " << *p << endl;
    cout << "El valor de *q es: " << *q << endl;
    i--;
    cout << "El valor de i es: " << i;
    return 0;
}