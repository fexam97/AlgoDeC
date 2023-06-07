#include "funciones.h"

int cantDias(int month, int year, int days) {

    int vecDias[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                          {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    for(int i = 0 ; i <= ES_BISIESTO(year) ; i++) {

        for(int j = 0 ; j < month ; j++) {

                    if( j+1 == month && vecDias[i][j] >= days)
                        return 1;
                }
            }

    return 0;
}

int fechaCorrecta(tFecha fecha) {


    // veo si el año es correcto

    if(fecha.anio > 1600)
        printf("\n\n el anio es correcto");
    else
        printf("\n\n el anio NO es correcto");


    // verifico si el mes es correcto

    if(fecha.mes >= 1 && fecha.mes <= 12)
        printf("\n\n el mes es correcto ");
    else{
        printf("\n\n el mes NO es correcto");
        return 0;
    }

    // verifico el dia

    if(cantDias(fecha.mes, fecha.anio, fecha.dia))
        printf("\n el dia es correcto");
    else{
        printf("\n el dia es incorrecto");
        return 0;
    }



    return 1;
}
