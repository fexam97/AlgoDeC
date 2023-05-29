#include <stdio.h>
#include <stdlib.h>
#include "cadenas.h"

int main()
{
    char cadena[TAM] = "abCcba";
    ///printf("longitud de cadena: %ld", strlen("Hello world!"));

    if(es_palindromo(cadena)){
        printf("%s es PALINDROMO", cadena);
    } else {
        printf("%s NO es PALINDROMO", cadena);
    }
    return 0;
}
