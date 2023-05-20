#include "ordenamiento.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arreglo[] = {9, 5, 1, 3, 8};

    int *pValor = &arreglo[0];

    mostrarVector(arreglo);

    return 0;
}
