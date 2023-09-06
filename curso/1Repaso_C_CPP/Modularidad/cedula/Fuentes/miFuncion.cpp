#include <iostream>
#include "miFuncion.hpp"

int digVerif(char ced[MAX]){
    int suma=0, i, num[7]={2,9,8,7,6,3,4};
    for(i=0;i<7;i++)
        suma=suma+(((int)ced[i])-48)*num[i];
    suma=suma%10;
    if(suma==(int)(ced[7]-48))
        return 1;
    else
        return 0;
}