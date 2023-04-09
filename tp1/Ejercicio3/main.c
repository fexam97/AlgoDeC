#include <stdio.h>
#include <math.h>

#define EULER  2.7182818284
#define TOL 0.00001

float funcionfactorial(float dato);
float numeroEuler(int dato);
float procedimiento(int dato, int potencia, float factorial);

int main()
{
    int potencia;

    printf("\n\n ingrese la potencia: ");
    scanf("%d", &potencia);

    printf("\n  e^%d = %.10f ", potencia, numeroEuler(potencia));
    printf("\n aproximadamente : %.10f ", pow(EULER, potencia));

    return 0;
}

float funcionfactorial(float dato) {

    float acum = 1;

    if(dato != 0){

        for(int i = 1 ; i <= dato ; i++)
            acum = acum * i;
    }
    return acum;
}

float procedimiento(int dato, int potencia, float factorial) {

    float resultado = pow(dato, potencia) / factorial;

    return resultado;

}

float numeroEuler(int dato) {

    int i = 0;
    float e = 0; // e = x^0 / 0! + x^1 / 1! + x^2 / 2! + x^3 / 3! ...

    procedimiento(dato, i, funcionfactorial(i));

     while( procedimiento(dato, i, funcionfactorial(i)) > TOL){

        e += procedimiento(dato, i, funcionfactorial(i));
        i++;
    }

    return e;
}
