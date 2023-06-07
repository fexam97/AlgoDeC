#include "funciones.h"

void restarFecha(tFecha fecha, int numero) {

    int vecDias[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int resta = numero;

    while(numero > vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1]) {

        numero = numero - vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1];
        fecha.mes--;

        if(fecha.mes < 1){
            fecha.mes = 12;
            fecha.anio--;
        }
    }

    fecha.dia = fecha.dia - numero;

    if(fecha.dia < 0){

        fecha.dia += vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1];
        fecha.mes--;

        if(fecha.mes < 1){
            fecha.mes = 12;
            fecha.anio--;
            printf("\n\nfecha si le resto %d dias : %d/%d/%d", resta, fecha.dia, fecha.mes, fecha.anio);
        }

        printf("\n\nfecha si le resto %d dias : %d/%d/%d", resta, fecha.dia, fecha.mes, fecha.anio);
    }
    else
    printf("\n\nfecha si le resto %d dias : %d/%d/%d", resta, fecha.dia, fecha.mes, fecha.anio);

}
