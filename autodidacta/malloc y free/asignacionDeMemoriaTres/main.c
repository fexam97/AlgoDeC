#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    Pedir ingresar por teclado cuantas letras tiene una palabra. Seguidamente crear un vector
    en forma dinamica que reserve el espacio minimo para ingresar dicha palabra.

    Cargar por teclado la palabra, mostrarla y finalmente liberar el espacio requerido.

*/

int main()
{
    char *palabra;
    int cantidadLetras;

    printf("\n Cuantas letras tiene la palabra ingresada : ");
    scanf("%d", &cantidadLetras);

    fflush(stdin);

    palabra = malloc((cantidadLetras + 1)* sizeof(char));

    printf("\n ingrese la palabra :");
    gets(palabra);

    printf("\n la palabra ingresada es : %s", palabra);

    free(palabra);

    return 0;
}
