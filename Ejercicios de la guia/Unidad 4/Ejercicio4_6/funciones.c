#include "funciones.h"

void diaDeLaSemana(tFecha fecha)
{
    int dato;
    int k = fecha.anio % 100;
    int j = fecha.anio / 100;

    dato = (fecha.dia +((13 * (fecha.mes + 1)) / 5) + k + (k/4) + (j/4) - (2*j)) % 7;

    switch(dato) {
    case 0:
        printf("\n el dia %d/%d/%d fue un SABADO ", fecha.dia, fecha.mes, fecha.anio);
        break;
    case 1:
        printf("\n el dia %d/%d/%d fue un DOMINGO ", fecha.dia, fecha.mes, fecha.anio);
        break;
    case 2:
        printf("\n el dia %d/%d/%d fue un LUNES ", fecha.dia, fecha.mes, fecha.anio);
        break;
    case 3:
        printf("\n el dia %d/%d/%d fue un MARTES ", fecha.dia, fecha.mes, fecha.anio);
        break;
    case 4:
        printf("\n el dia %d/%d/%d fue un MIERCOLES ", fecha.dia, fecha.mes, fecha.anio);
        break;
    case 5:
        printf("\n el dia %d/%d/%d fue un JUEVES ", fecha.dia, fecha.mes, fecha.anio);
        break;
    case 6:
        printf("\n el dia %d/%d/%d fue un VIERNES ", fecha.dia, fecha.mes, fecha.anio);
        break;
    default:
        printf("\n error ");
        break;

    }
}
