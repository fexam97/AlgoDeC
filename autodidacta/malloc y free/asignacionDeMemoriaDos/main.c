#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*

 Se tiene la siguiente declaracion de registro:

  struct producto{

    int codigo;
    char descripcion[41];
    float precio
  };

  Definir un puntero de tipo producto y luego mediante la funcion malloc crear un registro
  en la pila dinamica. cargar el registro, imprimirlo y finalmente liberar la funcion free.

*/
 struct producto{
    int codigo;
    char descripcion[41];
    float precio;
  };


int main()
{
    struct producto *prod;

    prod = malloc(sizeof(struct producto));

    prod ->codigo = 1;
    strcpy(prod ->descripcion, "papas");
    prod -> precio = 10.54;

    printf("\n Codigo del articulo: %d", prod->codigo);
    printf("\n Descripcion : %s", prod->descripcion);
    printf("\n precio : %0.2f", prod->precio);

    free(prod);

    return 0;
}
