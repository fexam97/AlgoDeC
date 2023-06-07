#include "funciones.h"

/*
Algoritmo de Zeller:
El algoritmo de Zeller es una fórmula que te permite calcular el día de la semana para una fecha en el calendario gregoriano.

La fórmula es la siguiente:
h = (q + ((13 * (m + 1)) / 5) + K + (K / 4) + (J / 4) - (2 * J)) % 7

Donde:

 h es el número del día de la semana (0 = sábado, 1 = domingo, 2 = lunes, ..., 6 = viernes).
 q es el día del mes.
 m es el mes (3 = marzo, 4 = abril, ..., 12 = diciembre). Para enero y febrero, se consideran los meses 13 y 14 del año anterior.
 K es el año del siglo (es decir, el año % 100).
 J es el siglo (es decir, el año / 100).
 El resultado "h" te dará el número correspondiente al día de la semana.
*/

int main()
{
    tFecha primeraFecha = {18, 5, 2006};

    diaDeLaSemana(primeraFecha);

    return 0;
}
