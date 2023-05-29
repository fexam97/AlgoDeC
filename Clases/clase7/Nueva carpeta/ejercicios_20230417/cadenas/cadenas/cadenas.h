#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#include <stdio.h>
#define TAM 100

#define ES_PALINDROMO 1
#define NO_ES_PALINDROMO 0


size_t strlen(const char *s);
/*
    strcat
    strcpy
    strncpy
    strncat
    strchr
    strrchr
    strcmp
    strstr
*/

int es_palindromo(const char *cadena);

#endif // CADENAS_H_INCLUDED
