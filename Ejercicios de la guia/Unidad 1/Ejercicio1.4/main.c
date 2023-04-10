#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int* vec, int ce);
void eliminarPrimerElemento(int* vec, int ce);


int main()
{
    int arreglo[] = {264, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrarVector(&arreglo, sizeof(arreglo)/sizeof(arreglo[0]));
    eliminarPrimerElemento(&arreglo, sizeof(arreglo)/sizeof(arreglo[0]));

    return 0;
}

void mostrarVector(int* vec, int ce) {

    printf("\n Vector : ");

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}

void eliminarPrimerElemento(int* vec, int ce) {

    *(vec + 0) = NULL;

    // ahora desplazo los elementos a la izquierda

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = *(vec + i + 1);

    puts("");
    mostrarVector(vec, ce - 1);

}
