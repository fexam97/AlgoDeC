#include <stdio.h>
#include <stdlib.h>

/*
Modifique el programa del punto 2.1 para que la cantidad de elementos sea ingresada por teclado.
*/

void cargarVector(int *vec, int ce);
void mostrarVector(int *vec, int ce);

int main()
{
    int *vecEnteros;
    int cantidadDeElementos;

    printf("\n ingrese la cantidad de elementos ");
    scanf("%d", &cantidadDeElementos);

    vecEnteros = malloc(cantidadDeElementos * sizeof(int));

    cargarVector(vecEnteros, cantidadDeElementos);
    mostrarVector(vecEnteros, cantidadDeElementos);

    free(vecEnteros);

    return 0;
}

void cargarVector(int *vec, int ce){
    for(int i = 0 ; i < ce ; i++)
    {
        printf("vec[%d] : ", i);
        scanf("%d", &vec[i]);
    }
}

void mostrarVector(int *vec, int ce){


    printf("\n contenido del vector :\n");

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}
