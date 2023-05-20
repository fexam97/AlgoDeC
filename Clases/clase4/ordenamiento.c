#include "ordenamiento.h"

void intercambio(int *a, int *b){

    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

/********************************************************/

void muestraVector(int *vec) {

    for(int i = 0 ; i <= TAM; i++)
        printf("%d ", *(vec + i));
}

/********************************************************/

void ordenarBurbujeo(int *vec) {

    for(int i = 0 ; i < TAM ; i++) {

        for(int j = 0 ; j < TAM ; j++) {

            if(*(vec + j) > *(vec + j + 1))
                intercambio(&vec[j], &vec[j + 1]);
        }
    }
    puts("\n");
}


/**********************************************************/

void ordenarSeleccion(int *vec) {

    int posMenor;

    for(int i = 0 ; i < TAM ; i++) {

        posMenor = posicionMenor(vec, i);
        intercambio(&vec[i], &vec[posMenor]);

    }

    printf("\n\n");

}

/***********************************************************/

int posicionMenor(int *vec, int indice) {

    int posMenor = *(vec + indice);

    for(int i = indice ; i < TAM ; i++) {

        if(*(vec + i) < *(vec + posMenor))
            posMenor = i;
    }

    return posMenor;
}
