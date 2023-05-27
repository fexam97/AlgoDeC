#include "funciones.h"

void cargarVector(int *vec, int ce) {

    srand(time(NULL));

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = rand() % 124;
}

void mostrarVector(int *vec, int ce) {

    printf("\n Vector de %d elementos: ", ce);
    for(int i = 0 ; i < ce ; i++)
        printf("\n%d", *(vec + i));

}

int direccionDeMemoria(int *vec, int ce) {

    int posicion;
    int direccion = 0;

    printf("\n Ingrese la posicion a buscar la direccion de memoria : ");
    scanf("%d", &posicion);

    for(int i = 0 ; i < ce ; i++) {

        if( i == posicion){
            direccion = &vec[i];
            printf("\n direccion del elemento %d : %d", *(vec + i), direccion);
            return direccion;
        }
    }
    return direccion;

}
