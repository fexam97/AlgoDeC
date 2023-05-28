#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DESDE 2
#define HASTA 24

void cargarVector(int *vec, int ce);
void mostrarVector(int *vec, int ce);
int ingresoCantidadDeElementos(int desde, int hasta);
void funcionSumaYPromedio(int *vec, int ce, long *suma, float *prom);

// otra version de la funcion anterior

typedef struct{
    long suma;
    float promedio;

}t_sumaYProm;

t_sumaYProm obtenerSumaYPromedio(int *vec, int ce, t_sumaYProm alu);

#endif // FUNCIONES_H_INCLUDED
