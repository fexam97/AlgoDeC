#include <stdio.h>
#include <stdlib.h>
#define TOL 0.01
#define VALOR_ABSOLUTO(A) ((A < 0) ? A * -1 : A)

#include <math.h>

// sin(x) = x - ( x^3 / 3! ) + ( x^5 / 5! ) - ( x^7 / 7!) ...

float calcularSeno(float dato);
float funcionFactorial(float dato);
float formulaSeno(float dato, int potencia, float factorial);

int main()
{
    float numero;

    printf("\n ingrese un numero : ");
    scanf("%f", &numero);

    printf("\nSen(%d) = %2f", (int)numero, calcularSeno(numero));

    return 0;
}


float funcionFactorial(float dato) {

    float resultado = 1;

    while (dato) { // hasta que el dato quede vacio
        resultado *= dato;
        dato --;
    }

    return resultado;
}

float formulaSeno(float dato, int potencia, float factorial) {

    float resultado = pow(dato, potencia) / factorial;

    return resultado;
}

float calcularSeno(float dato) {

    float seno = 0;
    int i = 1; // exponente

    while( formulaSeno(dato, i, funcionFactorial(i)) > TOL) {

        seno += formulaSeno(dato, i, funcionFactorial(i));
        i = i + 2;
        seno -= formulaSeno(dato, i, funcionFactorial(i));
        i = i + 2;
    }

    return seno;
}
