#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "tipos.h"
#define TAM_VEC 12

#define ENCONTRADO 1
#define NO_ENCONTRADO 0

///NUESTRAS
int muestra_alumnos(const char *path);
int compara_alumnos_idx(void *a, void *b);

int mostrar_ordenado(t_indice *indice,int cant_registros, const char *path);
int buscar_dni(t_indice *indice, int cant_registros, const char *path, long int dni_a_buscar);

#endif // FUNCIONES_H_INCLUDED

