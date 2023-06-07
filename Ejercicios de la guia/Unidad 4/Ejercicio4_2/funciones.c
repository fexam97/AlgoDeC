#include "funciones.h"

void diaSiguiente(tFecha fecha){

    int vecDias[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                          {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    fecha.dia++;

    if(fecha.dia > vecDias[ES_BISIESTO(fecha.anio)][fecha.mes - 1])
    {
        fecha.dia = 1;
        fecha.mes++;

        if(fecha.mes > 12)
        {
            fecha.mes = 1;
            fecha.anio++;
            printf("\n\n el dia siguiente es : %d/%d/%d", fecha.dia, fecha.mes, fecha.anio);
        }
        else
            printf("\n\n el dia siguiente es : %d/%d/%d", fecha.dia, fecha.mes, fecha.anio);
    }
    else
        printf("\n\n el dia siguiente es : %d/%d/%d", fecha.dia, fecha.mes, fecha.anio);

}
