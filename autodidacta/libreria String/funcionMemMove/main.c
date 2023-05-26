#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
    void *memmove(void *sUno, const void *sDos, size_t n);

    Copia los primeros n caracteres del objeto apuntado por sDos al objeto apuntado por
    sUno.

    Sin embargo, se asegura de que no estén superpuestos. Por esta razón, copia los
    caracteres a un array/arreglo temporalmente.

     Después vuelve a copiar del array temporal al objeto en cuestión.

    la funcion retorna valor de sUno.

*/

/*
    la diferencia entre strcpy y memmove es que:

    strcpy detecta el caracter nulo '\0/ y finaliza el proceso

    memmove tenes que darle un tamaño de memoria para que copie
*/

int main()
{

    // ejemplo

    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int destino[10];

    memmove(destino, numeros, sizeof(int) * 10);

    for(int i = 0 ; i < sizeof(destino)/sizeof(destino[0]) ; i++)
        printf("\n %d", destino[i]);


 return 0;
}


