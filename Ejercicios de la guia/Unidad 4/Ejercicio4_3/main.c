#include "funciones.h"

int main()
{
    tFecha fechaUno = {5, 5, 2001};
    int numeroAsumar;
    printf("La fecha es : %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);


    //printf("\n ingrese un numero a sumar :");
    //scanf("%d", &numeroAsumar);

    sumarFecha(fechaUno, 4867);


    return 0;
}
