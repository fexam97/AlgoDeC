#include <stdio.h>
#include <stdlib.h>

// no me salio

void *memmoveCustom(void *destino, const void *origen, size_t len);

int main()
{

    int cadenaUno[] = {1, 2, 3, 4, 5, 6};

    int tam = sizeof(cadenaUno)/sizeof(cadenaUno[0]);
    int cadenaNueva[tam];

    printf("\n tamanio : %d", tam);

    printf("\nVector cadenaUno:");

    for(int i = 0 ; i < tam ; i++)
        printf("\n%d", cadenaUno[i]);

   memmoveCustom(cadenaUno, cadenaNueva, sizeof(int)*tam);


    printf("\n\nvector cadenaNueva:");

    for(int i = 0 ; i < tam ; i++)
        printf("\n%d", (int*)cadenaNueva[i]);

    return 0;

}

void *memmoveCustom(void *destino, const void *origen, size_t longitud)
{
    for(int i = 0 ; i < longitud ; i++) {

        *(int*)destino = *(int*)origen;
        destino++;
        origen++;
    }

    return destino;
}

