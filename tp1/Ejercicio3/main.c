#include <stdio.h>
#define EULER  2.7182818284
#define TOL 0.00001

float factorial(float dato);

int main()      // TODAVIA NO LO TERMINÉ, LO HICE CON POTENCIA X^1
{
    double e;
    int i = 0; // iterador

    e = 0; // e = x^0 + e^1

    while( 1 / factorial(i) > TOL){

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
