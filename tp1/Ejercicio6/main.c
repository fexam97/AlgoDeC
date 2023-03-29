#include <stdio.h>
#include <stdlib.h>
#define TOL 0.00001

#include <math.h>

// sin(x) = x - ( x^3 / 3! ) + ( x^5 / 5! ) - ( x^7 / 7!) ...

float calcularSeno(float dato);
float factorial(float dato);

int main()
{
    float numero;

    printf("\n ingrese un numero : ");
    scanf("%f", &numero);

    printf("\nSen(x) : %f", calcularSeno(numero));
    printf("\nAproximado : %f", sin(numero) );

    return 0;
}

float factorial(float dato) {

    float acum = 1;

    if(dato != 0) {

        for(int i = 1 ; i <= dato ; i++)
            acum = acum + i;
    }
    return acum;
}

float calcularSeno(float dato) {

    float seno = 0;
    int i = 0; // exponente


    while(seno < TOL) {

            i = (i * 2) + 1;
            seno += pow(dato, i) / factorial(i);
            i = (i * 2) + 1;
            seno -= pow(dato, i) / factorial(i);
    }

    return seno;
}
