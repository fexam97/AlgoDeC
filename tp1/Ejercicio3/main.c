#include <stdio.h>
#define EULER  2.7182818284
#define TOL 0.00001
#include <math.h>

float factorial(float dato);

int main()
{
    double e;
    int potencia;
    int i = 0; // iterador
    float numero;

    e = 0; // e = x^0 + e^1

    while( 1 / factorial(i) > TOL){

        e += 1 / factorial(i);
        i++;
    }

    printf("\n\n ingrese la potencia: ");
    scanf("%d", &potencia);

    numero = pow(e, potencia);

    printf("\n  e^%d = %.10f ", potencia, numero);
    printf("\n aproximadamente : %.10f ", pow(EULER, potencia));


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

