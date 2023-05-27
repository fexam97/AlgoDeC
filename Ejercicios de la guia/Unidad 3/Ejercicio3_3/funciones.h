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
float sumaYPromedio(int *vec, int ce, long *suma);


#endif // FUNCIONES_H_INCLUDED
