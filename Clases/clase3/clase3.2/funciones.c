#include "funciones.h"

int cantidadDiasMes(int year, int month) {

    int dias[][11] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},   // 0
                       {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};  // 1

    printf("\nEs bisiesto? : %s", ES_BISIESTO(year)? "si" : "no");

    for(int i = 0 ; i <= ES_BISIESTO(year) ; i++) {

        for(int j = 0 ; j <= month ; j++)
        {
            if(j == month - 1)
                return dias[ES_BISIESTO(year)][j];
        }
    }

    return ERROR;

}

void cargaFecha(tFecha *fecha) // si quiero acceder al dia usando punteros
{                              // fecha.dia esta mal
                               // fecha->dia esta bien

   printf("\nDia : ");
   scanf("%d", &fecha->dia);
   printf("\nMes : ");
   scanf("%d", &fecha->mes);
   printf("\nAnio : ");
   scanf("%d", &fecha->anio);


}
// hacer una matriz de 2x2 para el anio bisiesto

int fechaCorrecta(tFecha *fecha)
{


    if(fecha->anio >= 1970)
    {

        printf("\n funcion fechaCorrecta :  %d / %d / %d ",   fecha->dia, fecha->mes, fecha->anio);

        // el problema es que no entra a este if, lo ignora y tira un falso

        if( (fecha->mes >= 1) && (fecha->mes <= 12))
        {

            if((fecha->dia >= 1) && (fecha->dia <= cantidadDiasMes(fecha->mes, fecha->anio)) )
                {
                    printf("\n funcion fechaCorrecta :  %d / %d / %d ", fecha->dia, fecha->mes, fecha->anio);
                    return OK;
                }
        }
    }

    return ERROR;
}
