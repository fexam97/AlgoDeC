#ifndef ORDENAMIENTO_H_INCLUDED
#define ORDENAMIENTO_H_INCLUDED
#include "tipos.h"
// se usa el puntero a funcion porque

void bubbleSort(void *vec, size_t nMemb, size_t tam, int (*cmp)(void* , void*));
void show(void *vec, size_t nMemb, void(*sh)(void*, size_t*)); // sh = show
void interchange(void *a, void *b, size_t tam);


#endif // ORDENAMIENTO_H_INCLUDED
