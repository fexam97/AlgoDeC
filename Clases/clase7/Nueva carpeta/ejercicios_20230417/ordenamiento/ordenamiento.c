#include <stdio.h>
#include "ordenamiento.h"

/******************************************************************************/
void muestra_vector(int *vec)
{
    int i;

    for(i = 0; i < TAM; i++){
        printf("%d ", *(vec + i) );
        ///printf("%d", vec[i] );
        ///printf("%d", *vec ); vec++;
    }

    printf("\n\n");
}

/******************************************************************************/
void ordena_burbujeo(int *vec) /// {9,5,1,3,8}
{
    int i, j;

    for(i = 0; i < TAM; i++)
        for(j = 0; j < TAM-1; j++)
            if( vec[j] >  vec[j+1])
                intercambia(&vec[j] ,  &vec[j+1]);
}

/******************************************************************************/
void ordena_seleccion(int *vec)
{
    int i, pos_men;

    for(i = 0; i < TAM; i++){ //TAM-1
        pos_men = posicion_menor(vec,i);
        intercambia(&vec[i] ,  &vec[pos_men]);
    }
}

/******************************************************************************/
void intercambia(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

/******************************************************************************/
int posicion_menor(int *vec, int indice)
{
    int i, pos_men;

    pos_men = vec[indice]; /// pos_men = indice;

    for(i = indice + 1; i < TAM; i++)
        if(vec[i] < vec[pos_men])
            pos_men = i;

    return pos_men;
}
