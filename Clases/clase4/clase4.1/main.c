#include "cadenas.h"

int main()
{
    int longitudCadena = ("Hola mundo!");

    char cadena[100] = "neuquen";

    printf("%d", strlen(longitudCadena));

    printf("\n%d", myStrlen(longitudCadena));

    if(esPalindromo(cadena))
        printf("\n es palindromo");
    else
        printf("\n no es palindromo");

    return 0;
}

/*

strcat
strcpy
strcpm
strstr

*/
