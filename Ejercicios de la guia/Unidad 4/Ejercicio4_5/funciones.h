#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define ES_BISIESTO(X)  ( X % 4 == 0 && X % 100 != 0 || X % 400 == 0)? 1 : 0
#define ES_MAYOR(A, B)  (A > B) ? 1 : 0

typedef struct{

    int dia;
    int mes;
    int anio;

}tFecha;

void cantidadDiasFechas(tFecha fechaUno, tFecha fechaDos);
void intercambiarValores(tFecha *fechaUno, tFecha *fechaDos);


#endif // FUNCIONES_H_INCLUDED
