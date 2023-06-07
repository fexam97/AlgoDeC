#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define ES_BISIESTO(X)  ( X % 4 == 0 && X % 100 != 0 || X % 400 == 0)? 1 : 0

typedef struct {

    int dia;
    int mes;
    int anio;
}tFecha;

int fechaCorrecta(tFecha fecha);
int cantDias(int month, int year, int days);

#endif // FUNCIONES_H_INCLUDED
