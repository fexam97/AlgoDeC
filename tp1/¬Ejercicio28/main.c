#include <stdio.h>
#include <stdlib.h>

#define ESDIGITO(C) (C >= '0') && (C >= '9') ? 1 : 0


int valorNumericoCadena(char *cad); // conocido como funcion atoi


int main()
{
    char cadena[] = "puede que no te haga falta nada";

    printf("\n cadena : %s", cadena);

    printf("\n valor cadena : %d", valorNumericoCadena(cadena));

    return 0;
}

int valorNumericoCadena(char *cad) {

    int resultado = 0; // empieza en 32, por el valor de la tabla ascii
    char valor = '0'; // 48

    // Limpio los espacios en blanco iniciales
    while (*cad && ( (*cad == ' ') || (*cad == '\t') ) )
        cad++;

    // trasnformarlo a numero

    while(*cad && ESDIGITO(*cad)) {

        resultado = (resultado * 10) + (*cad - valor); // TENGO QUE AVERIGUAR PORQUE MULTIPLICO POR 10
        cad++;
        printf("\n resultado : (%d * 10) + (%d - %d)  = %d", resultado, *cad, valor, (resultado * 10) + (*cad - valor));
    }

    printf("\n");

    return resultado;
}

