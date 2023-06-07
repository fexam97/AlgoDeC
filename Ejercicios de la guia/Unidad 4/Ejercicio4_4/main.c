#include "funciones.h"


int main()
{
    tFecha fechaUno = {5, 5, 2001};
    int numeroArestar;
    printf("La fecha es : %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);

    restarFecha(fechaUno, 365);

    return 0;
}
