#include <stdio.h>
/*
int minimo(int tam, int[] arreglo)
{
    int iMin = 0;
    for (int i = 1; i < tam; i++)
        if (arreglo[i] < arreglo[iMin])
            iMin = i;
    return arreglo[iMin];
}
*/

int minimo(int tam, int arreglo[]) {
    int iMin = 0;
    for (int i = 1; i < tam; i++) {
        if (arreglo[i] < arreglo[iMin]) {
            iMin = i;
        }
    }
    return arreglo[iMin];
}

int main() {
    int arreglo[] = {10, 5, 8, 3, 15, 2};
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);

    int valorMinimo = minimo(tam, arreglo);

    printf("El valor mínimo en el arreglo es: %d\n", valorMinimo);

    return 0;
}
