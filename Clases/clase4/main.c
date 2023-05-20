#include "ordenamiento.h"

int main()
{
    int vec[] = {9, 5, 1, 3, 8, 19};

    //printf("\n tamanio vector: %d", sizeof(vec) / sizeof(vec[0]));

    muestraVector(vec);

    //ordenarBurbujeo(vec);

    ordenarSeleccion(vec);

    muestraVector(vec);

    return 0;
}
