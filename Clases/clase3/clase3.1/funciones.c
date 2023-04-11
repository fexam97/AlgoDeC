#include "funciones.h"

void recorrerMatriz(int mat[][TAM]) {

    for(int i = 0 ; i <= TAM - 1; i++) // filas
    {
        printf("\n");

        for(int j = 0 ; j <= TAM - 1; j++) // columnas
            printf("%d ", mat[i][j]);
    }

}

void diagonalInferior(int mat[][TAM]) {

    for(int i = 0 ; i <= TAM - 1; i++) // filas
    {
        printf("\n");

        for(int j = 0 ; j <= TAM - 1; j++) // columnas
        {
            if(i > j)
            printf("%d ", mat[i][j]);
        }
    }

}
