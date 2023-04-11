#ifndef MATEMATICAS_H_INCLUDED
#define MATEMATICAS_H_INCLUDED

#define VALOR_ABSOLUTO(A) ( (A < 0) ? A * -1 : A )
#define TOL 0.001
#include <math.h>

double factorial(int dato);
double combinatoria(int numeroUno, int numeroDos);
float numeroEuler(int dato);
float raizCuadrada(int dato);
void esFibonacci(int dato);
float calcularSeno(int dato);


#endif // MATEMATICAS_H_INCLUDED
