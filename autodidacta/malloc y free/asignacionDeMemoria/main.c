#include <stdio.h>
#include <stdlib.h>

/*

 hasta ahora hemos visto que se reserva espacio para variables en el momento que las definiamos

 int x       // reservamos espacio para almacenar un entero
 float z     // reservamos espacio para almacenar un valor real
 char c      // reservamos espacio para almacenar un caracter
 int vec[10] // reservamos espacio para almacenar un 10 enteros
 int *pe     // reservamos espacio para almacenar un un puntero


 El lenguaje c nos permite en tiempo de ejecucion solicitar espacio mediante la funcion malloc.

 Memory Allocate = asignar memoria

 y luego de usarla en forma obligada debemos devolverla llamando a la funcion free

 estas funciones se encuentran en la biblioteca #include <stdlib.h>

*/

/*

    Problema:

    Ingresar por teclado un entero que represente la cantidad de elementos que debe crearse a un vector.
    Crear el vector en forma dinamica, cargar e imprimir sus datos. Hacer todo en main

*/

int main()
{
    int *punteroAEntero;
    int tam;

    printf("\n Cuantos elementos tendra el vector : ");
    scanf("%d", &tam);

    punteroAEntero = malloc(tam * sizeof(int));

    for(int i = 0 ; i < tam ; i++)
    {
        printf("\n Ingrese elemento : ");
        scanf("%d", &punteroAEntero[i]);
    }

    printf("\n contenido del vector: \n");

    for(int i = 0 ; i < tam ; i++)
        printf("%d ", punteroAEntero[i]);

    free(punteroAEntero);

    return 0;
}
