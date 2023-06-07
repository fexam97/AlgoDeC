#include "funciones.h"

void sumarFecha(tFecha fecha, int numero){

    int vecDias[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    int contadorMeses = 0;
    int numeroAsumar = numero;

    while(numero > vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1]){

        numero = numero - vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1];
        contadorMeses++;
        fecha.mes++;

        if(fecha.mes > 12){
            fecha.mes = 1;
            fecha.anio++;
        }
    }

    printf("\n numero a sumar : %d", numero);
    printf("\n meses a sumar : %d", contadorMeses);

    fecha.dia += numero;

    if(fecha.dia > vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1])
    {
        fecha.dia = fecha.dia - vecDias[ES_BISIESTO(fecha.anio)][fecha.mes-1];
        printf("\n\nla fecha sumando %d dias es : %d/%d/%d", numeroAsumar, fecha.dia, fecha.mes, fecha.anio);
    }
    else
        printf("\n\nla fecha sumando %d dias es : %d/%d/%d", numeroAsumar, fecha.dia, fecha.mes, fecha.anio);
}


