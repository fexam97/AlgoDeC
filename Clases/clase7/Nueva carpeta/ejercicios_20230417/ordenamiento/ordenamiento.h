#ifndef ORDENAMIENTO_H_INCLUDED
#define ORDENAMIENTO_H_INCLUDED

#define TAM 5

void muestra_vector(int *vec);

void ordena_burbujeo(int *vec);
void ordena_seleccion(int *vec);

void intercambia(int *a, int *b);
int posicion_menor(int *vec, int indice);

#endif // ORDENAMIENTO_H_INCLUDED
