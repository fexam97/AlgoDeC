#include "funciones.h"

/*
Escriba una función que devuelva en qué dirección de memoria se encuentra un elemento dentro de
un array. Si el elemento no se encuentra, debe devolver NULL
*/



int main()
{
    /*
    int vec[] = {9, 5, 4, 7, 5};
    printf("direccion de memoria de vec[%d] : %d", 4, &vec[4] );
    */

    int cantElementos;
    int posicion;

    printf("\n Ingrese la cantidad de elementos : ");
    scanf("%d", &cantElementos);

    int arreglo[cantElementos];

    cargarVector(arreglo, cantElementos);
    mostrarVector(arreglo, cantElementos);

    if(direccionDeMemoria(arreglo, cantElementos))
        return TODO_OK;
    else
        printf("\n el elemento no se encuentra");


    return 0;
}

