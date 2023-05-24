#include <stdio.h>
#include <stdlib.h>
#define TAM 10
/*
Desarrolle un programa que reserve memoria para almacenar 10 enteros. Luego asigne valores a
dichos elementos. Asegúrese de devolver la memoria reservada.


*/

void mostrarVector(int *vec);

int main()
{
    int *vecEnteros;

    vecEnteros = malloc(TAM * sizeof(int));

    vecEnteros[0] = 42;
    vecEnteros[1] = 12;
    vecEnteros[2] = 35;
    vecEnteros[3] = 42;
    vecEnteros[4] = 12;
    vecEnteros[5] = 35;
    vecEnteros[6] = 35;
    vecEnteros[7] = 42;
    vecEnteros[8] = 12;
    vecEnteros[9] = 35;

    mostrarVector(vecEnteros);

    free(vecEnteros);

    return 0;
}

void mostrarVector(int *vec){


    printf("\n contenido del vector :\n");

    for(int i = 0 ; i < TAM ; i++)
        printf("%d ", *(vec + i));
}
