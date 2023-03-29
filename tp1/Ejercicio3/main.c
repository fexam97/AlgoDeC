#include <stdio.h>
#include <math.h>

#define EULER  2.7182818284
#define TOL 0.00001

float factorial(float dato);
float numeroEuler(void);

int main()
{

    int potencia;
    float numero;

    printf("\n\n ingrese la potencia: ");
    scanf("%d", &potencia);

    numero = pow(numeroEuler(), potencia); // me olvide la macro que hace las potencias, con eso elimino la libreria math.h

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

float numeroEuler(void) {

    int i = 0;
    float e = 0; // e = x^0 + e^1

     while( 1 / factorial(i) > TOL){

        e += 1 / factorial(i);
        i++;
    }

    return e;
}
