/*
1. Determine y justifique cuáles de las siguientes instrucciones son válidas, si se supone que
se hicieron las siguientes definiciones y declaraciones:
#include <stdlib.h>
...............
typedef int* apunta;
typedef char* apuntb;
apunta ap1, ap2;
apuntb ap3, ap4;
..............
a) ap1=new apunta; NO es valida, new se usa para memoria dinamica

b) delete* ap1; Sin asterisco
c) ap1=ap2;
d) ap2=*ap2 + *ap1; QUiere guardar un valor en un puntero que solo guarda direcciones de memoria
e) ap1=NULL;
f) ap4=NULL;
g) delete apuntb; delete solo para datos, apuntb es un alias no un puntero
h) ap3=*ap4 * *ap1; tratas de asignar un valor en un puntero que solo guarda direcciones de memoria
i) ap2=new(ap1); No necesitas usar new, ya esta declarado
    ap2=new int(*api); valida
j) ap2=new int[7]; valida
k) ap2=new int;
m) delete ap3; ap3 no tiene nada que deletear


2. En el siguiente trozo del programa, ¿qué contiene la variable p?:
int a; int *p; p = &a; a = 1;
p contiene la dirección de memoria de a


3. Dado el siguiente programa:
float a = 0.001; float *b; float *c; b = &a; c = b; a = *c + *b;
¿Cuál de las siguientes afirmaciones es correcta?
a) Las variables b y c se almacenan en la misma dirección de memoria.
No, almacenan el mismo valor, pero no la misma dirección
b) La sentencia *c = 4; no modificaría el contenido de la variable a.
SI modificaria el valor de a
c) a tomará un valor indeterminado.
d) c almacena la dirección de la variable a.
Cierta


4. Después de ejecutar el siguiente fragmento de código:
float n1 = 10;
float n2 = 5;
float *p , *q ;p = &n1;
q = &n2;
*q = *p + *p;

¿Cuál de las siguientes afirmaciones es cierta?:
a. n1 = 10 y n2 = 5. 
b. n1 = 10 y n2 = 10.
c. La sentencia *q = *p + *p es ilegal.
d. n1 = 10 y n2 = 20. Cierta
*/