#include "cadenas.h"

size_t strlen(const char *s) ///Hola mundo\0
{
    size_t count = 0;

    while(*s != '\0'){
        count++;
        s++;
    }

    return count;
}

int es_palindromo(const char *cadena) //"abccba\0"
{
    char *ini, *fin;

    ini = (char *)cadena;
    fin = (char *)&cadena[strlen(cadena) - 1];

    while(ini < fin){
        if(*ini != *fin)
            return NO_ES_PALINDROMO;

        ini++;
        fin--;
    }

    return ES_PALINDROMO;
}

