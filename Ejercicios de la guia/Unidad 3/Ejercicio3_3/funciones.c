#include "funciones.h"

int ingresoCantidadDeElementos(int desde, int hasta) {

    int dato;

    do{
        printf("\n ingrese la cantidad de elementos : ");
        scanf("%d", &dato);

    }while(dato < desde || dato > hasta);

        return dato;
}

void cargarVector(int *vec, int ce) {

    srand(time(NULL));

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = rand() % 114;

}


void mostrarVector(int *vec, int ce) {

    printf("\n vector de %d elementos : ", ce);

    for(int i = 0 ; i < ce ; i++)
        printf("\n%d", *(vec + i));

}

float funcionSumaYPromedio(int *vec, int ce, long *suma) {

    for(int i = 0 ; i < ce ; i++) {
        /*
        suma += *(vec + i);
        */
    }

    return 0;
}

t_sumaYProm obtenerSumaYPromedio(int *vec, int ce, t_sumaYProm alu) {


    for(int i = 0 ; i < ce ; i++){

        alu.suma += *(vec + i);
    }

    alu.promedio = (float)(alu.suma / ce);

    return alu;
}
