#include "cadenas.h"

size_t myStrlen(char *cad) {

    size_t contador = 0;

    while(*cad){

        contador++;
        cad++;
    }
    return contador;
}

int esPalindromo(const char *cad) {

    char *inicio;
    char *fin;

    inicio = (char *)cad;
    fin = (char *)cad + myStrlen(cad) - 1;

    while(inicio < fin){

            if(*inicio != *fin)
            return 0;

        inicio++;
        fin--;
    }

    return 1;

}
