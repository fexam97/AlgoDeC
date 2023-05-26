#include "funciones.h"


void menuOpciones(float vec[], int ce) {

    int opcion;
    float promedio = 5;

    do{

        printf("\n MENU :");
        printf("\n\n 1 - Buscar el minimo elemento");
        printf("\n 2 - Calcular el promedio de los valores de las posiciones pares");
        printf("\n 3 - Mostrarlo en orden inverso");
        printf("\n 4 - Salir");

        printf("\n\n\n Ingrese una opcion :");
        scanf("%d", &opcion);

        switch(opcion) {
        case 1:
            printf("\n el minimo elemento es : %0.2f", minimoElemento(vec, ce));
            break;
        case 2:
            printf("\n promedio : 0.2f", promedio);
            break;
        case 3:
            printf("\n vector inverso : ");
            mostrarVectorInverso(vec, ce);
            break;
        case 4:
            printf("\n nos vimos mi rey");
            break;
        default:
            printf("\n error");
            break;
        }

    }while(opcion != 4);

}

void IngresarDatosVector(float vec[], int ce){

    for(int i = 0 ; i < ce ; i++){
        printf("vec[%d] : ", i+1);
        scanf("%f", &vec[i]);
    }

    mostrarVector(vec, ce);

}

void mostrarVector(float vec[], int ce) {

    for(int i = 0 ; i < ce ; i++)
        printf("\n%0.2f", vec[i]);
}


float minimoElemento(float vec[], int ce) {

    float min = 0;

    for(int i = 0 ; i < ce ; i++) {

        printf("\n min = %d", min);

        min = (vec[i] < min) ? vec[i] : min;

    }

    return min;
}

void mostrarVectorInverso(float vec[], int ce) {

    for(int i = ce ; i > 0 ; i--)
        printf("\n%0.2f", vec[i]);

}
