#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void cargarVector(int *vec, int ce);
void mostrarVector(int *vec, int ce);
void insertarElemento(int *vec, int ce);

int main()
{
    int arreglo[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //cargarVector(&arreglo, TAM); //  funciona con numeros random
    mostrarVector(&arreglo, TAM);
    insertarElemento(&arreglo, TAM);

    return 0;
}

void cargarVector(int *vec, int ce) {

    srand(time(NULL));

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = rand() % 99;
}

void mostrarVector(int *vec, int ce) {

    printf("vector : \n");
    for(int i = 0 ; i < ce ; i++)
        printf(" %d ", *(vec + i));
}

void insertarElemento(int *vec, int ce) {

    int posicionIngresada;
    int elemento;

    do{
        printf("\n Ingrese la posicion a insertar : ");
        scanf("%d", &posicionIngresada);
    }while(posicionIngresada > ce);

    printf("\n Ingrese un elemento : ");
    scanf("%d", &elemento);

    for(int i = ce  - 1; i >= posicionIngresada - 1; i--) {

        *(vec + i + 1) = *(vec + i);
    }

    *(vec + posicionIngresada - 1) = elemento   ;

    mostrarVector(vec, ce + 1);

}
