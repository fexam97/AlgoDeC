#include "ordenamiento.h"

void interchange(void *a, void *b, size_t tam) {

    char *aux = malloc(tam);

    memcpy(aux, a, tam);  // aux = a
    memcpy(a, b, tam);    // a = b
    memcpy(b, aux, tam);  // b = aux

    free(aux);
}


void bubbleSort(void *vec, size_t nMemb, size_t tam, int (*cmp)(void* , void*)) {

    for(int i = 0; i < nMemb ; i++) {

        for(int j = 0 ; j < nMemb - 1 ; j++) {

            if(cmp(vec+j*tam, vec+(j+1)*tam) )// vec[j], vec[j+1] it cannot be possible
                interchange(vec+j*tam, vec+(j+1)*tam, tam);  // vec+j, vec+j+1 tampoco se puede usar
        }
    }
}

void show(void *vec, size_t nMemb, void(*sh)(void*, size_t*)) {

    printf("\n Lista de alumnos: ");
    sh(vec, nMemb);
}
