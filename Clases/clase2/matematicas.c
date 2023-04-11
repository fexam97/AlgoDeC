#include "matematicas.h"

double factorial(int dato) {

    double fact = 1;

    for(int i = 0 ; i <= dato ; i++)
        fact *= i;

    return fact;

}

double combinatoria(int numeroUno, int numeroDos) {

    double numero;

    numero = factorial(numeroUno) / factorial(numeroUno) * factorial(numeroUno - numeroDos);

    return numero;
}

float numeroEuler(int dato) {

    int i = 0;
    float e = 0; // e = x^0 / 0! + x^1 / 1! + x^2 / 2! + x^3 / 3! ...

    while( pow(dato, i) / factorial(i) > TOL){

        e += pow(dato, i) / factorial(i);
        i++;
    }

    return e;
}

float raizCuadrada(int dato) {

    float rUno = 1.0;

    while(VALOR_ABSOLUTO((rUno * rUno) - dato) >= TOL) {

        float cociente = dato / rUno;
        float promedio = 0.5 * (cociente + rUno);

        rUno = promedio;

     }

     return rUno;
}

void esFibonacci(int dato) {

    int suma = 0;
    int primerTermino = 0;
    int segundoTermino = 1;

    for(int i = 0 ; i < dato && dato > suma; i++) {

        primerTermino = segundoTermino;
        segundoTermino = suma;
        suma = primerTermino + segundoTermino;

        printf("\n%d", suma);
    }

    if( primerTermino + segundoTermino == dato || dato == 2 || dato == 3)
        printf("\n\n El numero %d pertenece a la serie de Fibonacci", dato);
    else
        printf("\n\n El numero %d NO pertenece a la serie de Fibonacci", dato);

}
float calcularSeno(int dato) {

    float seno = 0;
    int i = 1; // exponente

    while( pow(dato, i) / factorial(i) > TOL) {

        seno += pow(dato, i) / factorial(i);
        i = i + 2;
        seno -= pow(dato, i) / factorial(i);
        i = i + 2;
    }

    return seno;
}
