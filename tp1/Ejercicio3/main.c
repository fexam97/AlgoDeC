#include <stdio.h>
#define EULER  2.7182818284

float factorial(float dato);

int main()
{
    double e;
    double tol;
    int i = 0; // iterador

    printf("Ingrese un numero entre 0 y 1 : ");
    scanf("%f", &tol);

    e = 0; // e = x^0 + e^1

    while( 1 / factorial(i) > tol){

        e += 1 / factorial(i);
        i++;
    }

    printf("\n e^x = %.10f", e);
    printf("\n numero euler aproximadamente : %.10f", EULER);

    return 0;
}

float factorial(float dato) {

    float acum = 1;

    if(dato != 0){

        for(int i = 1 ; i <= dato ; i++)
            acum = acum * i;
    }

    return acum;

}
