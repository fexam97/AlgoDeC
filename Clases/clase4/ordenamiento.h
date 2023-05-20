#ifndef ORDENAMIENTO_H_INCLUDED
#define ORDENAMIENTO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void intercambio(int *a, int *b);
void muestraVector(int *vec);
void ordenarBurbujeo(int *vec);
void ordenarSeleccion(int *vec);
int posicionMenor(int *vec, int indice);

#endif // ORDENAMIENTO_H_INCLUDED

