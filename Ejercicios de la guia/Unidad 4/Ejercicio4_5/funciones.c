#include "funciones.h"


void intercambiarValores(tFecha *fechaUno, tFecha *fechaDos) {

    tFecha aux = *fechaUno;
    *fechaUno = *fechaDos;
    *fechaDos = aux;
}

void cantidadDiasFechas(tFecha fechaUno, tFecha fechaDos) {

    int vecDias[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    int contadorDias = 0;

    if(ES_MAYOR(fechaUno.anio, fechaDos.anio))
        intercambiarValores(&fechaUno, &fechaDos);

        while((fechaUno.anio != fechaDos.anio)){

        fechaUno.dia++;
        contadorDias++;

        if(fechaUno.dia > vecDias[ES_BISIESTO(fechaUno.anio)][fechaUno.mes-1] ) {

           fechaUno.dia = 1;
           fechaUno.mes++;

           if(fechaUno.mes > 12){
                fechaUno.mes = 1;
                fechaUno.anio++;
                printf("\n\n\n %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);
           }
        }
        printf("\n %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);
    }

    while((fechaUno.mes != fechaDos.mes)){

        fechaUno.dia++;
        contadorDias++;

        if(fechaUno.dia > vecDias[ES_BISIESTO(fechaUno.anio)][fechaUno.mes-1] ) {

            fechaUno.dia = 1;
            fechaUno.mes++;

            if(fechaUno.mes > 12){
                fechaUno.mes = 1;
                printf("\n %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);
            }
            printf("\n %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);
        }

        printf("\n %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);
    }

    while(fechaUno.dia != fechaDos.dia){

        fechaUno.dia++;
        contadorDias++;

        printf("\n %d/%d/%d", fechaUno.dia, fechaUno.mes, fechaUno.anio);
    }

    printf("\n\n cantidad de dias %d", contadorDias);
}
