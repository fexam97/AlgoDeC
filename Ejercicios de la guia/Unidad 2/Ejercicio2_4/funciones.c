#include "funciones.h"

char *copiaCadena(const char *origen) {

    int longitud = 0;

    while(*(origen + longitud) != '\0')
        longitud++;

    // voy a crear una nueva cadena

    char *nuevaCadena = malloc((longitud + 1) * sizeof(char));

    if(!nuevaCadena)
        return NULL;

    for(int i = 0 ; i <= longitud ; i++)
        *(nuevaCadena + i) = *(origen + i);

    return nuevaCadena;
}
