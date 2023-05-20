#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *duplicarVector(int *vec, size_t cantElementos);

int main()
{
    int arreglo[] = {1, 2, 3, 4, 5, 6};

    size_t cantidadDeElementos = sizeof(arreglo)/sizeof(int);
    int *nuevoArreglo;
    int i;

    nuevoArreglo = duplicarVector(arreglo, cantidadDeElementos);

    for(i = 0 ; i < cantidadDeElementos ; i++) {

        printf(" %d ", nuevoArreglo[i]);
    }

    free(nuevoArreglo);

    return 0;

}

int *duplicarVector(int *vec, size_t cantElementos) {

    int *nuevoArreglo = (int*)malloc(cantElementos *sizeof(int));

    if(!nuevoArreglo)
        return nuevoArreglo;

    memmove(nuevoArreglo, vec, cantElementos *sizeof(int));
    return nuevoArreglo;
}
