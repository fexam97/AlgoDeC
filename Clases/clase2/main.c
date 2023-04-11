#include "funciones.h"


int main()
{
    int numero = 6;

    //saludo();

    int vec[] = {1, 3, 0, 3, 45, 7, -7, 0, 9, 100};

    int *pVec = &vec; // primera posicion

    printf("\n valor del contenido de pVec : %d", *pVec);

    *pVec = vec[2];

    printf("\n valor del contenido de pVec : %d", *pVec);

    printf("\n posicion 4 : %d", pVec[4]); //se puede ponerle subindices al puntero

    /////////////////////////////////////////////////////////////////////////////////////

    puntero(&numero);
    printf("\n valor : %d", numero);

    menuOpciones();

    return 0;
}


// *prt = 50 // accede al contenido
