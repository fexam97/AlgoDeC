#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float ObtenerParteEntera(float dato);

int main()
{
    float numero = 11.678596456;

    printf("%f", numero);

    printf("\n parte entera : %f", ObtenerParteEntera(numero));

    return 0;
}

float ObtenerParteEntera(float dato) {

    float parteDecimal = dato - (int)dato; // 0.65 = 11.65 - 11
    float parteEntera = dato - parteDecimal; // 11.00 = 11.65 - 0.65

    return parteEntera;
}
