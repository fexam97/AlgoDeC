#include "funciones.h"


int main()
{
    tFecha fechaUno = {31, 6, 1985};
    int numeroArestar;
    printf("La fecha es : %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);

    restarFecha(fechaUno, 3);

    return 0;
}
