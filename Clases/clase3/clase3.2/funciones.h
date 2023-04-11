#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define ES_BISIESTO(A) (A % 4 == 0 && A % 100 != 0 || A % 400 == 0) ? 1 : 0

/*
// el typedef reemplaza datos (creo)
// typedef int entero;  // entero e1, e2;

typedef struct {

 char nombre[50];
 char dni[9]; // puede ser -> long dni;
 int edad;
 float altura;

}tAlumno;
*/

typedef struct {
    int dia;    // int dia, mes, anio;
    int mes;
    int anio;

}tFecha;

int cantidadDiasMes(int year, int month);
void cargaFecha(tFecha *fecha);
int fechaCorrecta(tFecha *fecha);
#endif // FUNCIONES_H_INCLUDED
