#include <stdio.h>
#include <stdlib.h>

#define TOL 0.0001

#include <math.h>


float raizCuadrada(float x, float tol);


int main()
{
    float numero;

    do{

    printf("\n Ingrese un numero mayor a cero : ");
    scanf("%f", &numero);

    }while(numero < 0);

    printf("\n La raiz de %d es : %.8f", (int)numero, raizCuadrada(numero, TOL));
    printf("\n La raiz de %d es : %.8f", (int)numero, sqrt(numero));

    return 0;
}

float raizCuadrada(float x, float tol) {

    // R1 = 1
    // Ri = 0.5 / ( (Ri - R1) + ( x / (Ri - R1) )

    // Ri > R1  :  si no, me da numero negativo

    // termina cuando ( Ri - R1) < tol


    float rUno = 1; // R1
    float rDos = 0; // Ri

    while( (rUno - rDos) > TOL) {

        rDos = rUno;
        rDos = 0.5 * rUno + ( x / rUno);

    }

    return rDos;
}
