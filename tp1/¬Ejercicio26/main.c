#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int* vec, int ce);
void eliminarTodosLosElementos(int* vec, int ce);

int main()
{
    int arreglo[] = {264, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrarVector(&arreglo, sizeof(arreglo)/sizeof(arreglo[0]));
    eliminarTodosLosElementos(&arreglo, sizeof(arreglo)/sizeof(arreglo[0]));

    return 0;
}

void mostrarVector(int* vec, int ce) {

    printf("\n Vector : ");

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}

void eliminarTodosLosElementos(int* vec, int ce) {

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = NULL;

    puts("");
    mostrarVector(vec, ce);

}
