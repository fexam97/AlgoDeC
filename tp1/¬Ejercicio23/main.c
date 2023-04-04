#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int intercambiar(int* vec, int* vecDos);
int buscarMenor(int* v, int desde, int hasta);
void ordenarSeleccion(int* v, int cantElem);
void cargarVector(int *vec, int ce);
void mostrarVector(int *vec, int ce);
void insertarElementoYOrdenalo(int *vec, int ce);


int main()
{
    int arreglo[TAM] = {10, 20, 30, 40, 50, 60, 70, 26, 6, 2011};

    //cargarVector(&arreglo, TAM); //  funciona con numeros random
    mostrarVector(&arreglo, TAM);
    insertarElementoYOrdenalo(&arreglo, TAM);

    return 0;
}

int intercambiar(int* vec, int* vecDos)
{
    int aux = *vec;
        *vec = *vecDos;
        *vecDos = aux;

    return aux;
}

void ordenarSeleccion(int* vec, int ce)
{
    int menorElemento; // variable donde guardara el numero menor

    for(int i = 0; i < ce - 1; i++)
    {
        menorElemento = buscarMenor(vec, i, ce - 1);

        if(menorElemento != i)
            intercambiar(&vec[menorElemento], &vec[i]);
    }
}

int buscarMenor(int* vec, int desde, int hasta)
{
    int menorElemento = desde;

    for(int j = desde + 1; j <= hasta; j++)
    {
        if(*(vec + j) < *(vec + menorElemento))
            menorElemento = j;
    }

    return menorElemento;
}

void cargarVector(int *vec, int ce) {

    srand(time(NULL));

    for(int i = 0 ; i < ce ; i++)
        *(vec + i) = rand() % 99;
}

void mostrarVector(int *vec, int ce) {

    printf("vector : \n");
    for(int i = 0 ; i < ce ; i++)
        printf("  %d  ", *(vec + i));
}

void insertarElementoYOrdenalo(int *vec, int ce) {

    int posicionNueva = ce + 1;
    int elemento;

    printf("\n Ingrese un elemento : ");
    scanf("%d", &elemento);

    *(vec + posicionNueva - 1) = elemento;

    ordenarSeleccion(vec, ce + 1);

    mostrarVector(vec, ce + 1);

}



