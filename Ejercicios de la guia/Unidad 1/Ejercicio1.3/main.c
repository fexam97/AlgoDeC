#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int* vec, int ce);
void eliminarElemento(int* vec, int ce);


int main()
{
    int arreglo[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    mostrarVector(&arreglo, sizeof(arreglo)/sizeof(arreglo[0]));
    eliminarElemento(&arreglo, sizeof(arreglo)/sizeof(arreglo[0]));

    return 0;
}

void mostrarVector(int* vec, int ce) {

    for(int i = 0 ; i < ce ; i++)
        printf("%d ", *(vec + i));
}

void eliminarElemento(int* vec, int ce) {

    int posicionEliminar;

    do{
        printf("\n Ingrese una posicion a eliminar : ");
        scanf("%d", &posicionEliminar);
    }while(posicionEliminar > ce);


    for(int i = posicionEliminar ; i < ce ; i++)
       *(vec + i) = *(vec + i + 1);

    puts("");
    mostrarVector(vec, ce - 1);

}
