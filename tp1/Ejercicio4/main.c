#include <stdio.h>
#include <stdlib.h>
#define TOL 0.000001
#define VALOR_ABSOLUTO(A) ( (A < 0) ? A * -1 : A )

double raizCuadrada(int dato);

int main()
{
    float numero;

    do{

    printf("\n Ingrese un numero mayor a cero : ");
    scanf("%f", &numero);

    }while(numero < 0);

    printf("\n\n La raiz de %d es : %.8f", (int)numero, raizCuadrada((int)numero));

    return 0;
}

double raizCuadrada(int dato) {

    // R1 = 1
    // Ri = 0.5 / ( (Ri - R1) + ( x / (Ri - R1) )

    // Ri - R1 = me va a dar negativo, entonces uso el valor absoluto para que sea positivo

    double rUno = 1.0;

    while(VALOR_ABSOLUTO((rUno * rUno) - dato) >= TOL) {

        double cociente = dato / rUno;
        double promedio = 0.5 * (cociente + rUno); // Ri

        printf("\nRi = 0.5 / ( %f + ( %d / %1f )", VALOR_ABSOLUTO(promedio - rUno), dato, VALOR_ABSOLUTO(promedio - rUno));
        printf("\nCociente : %1f", cociente);
        printf("\nRi : %1f\n\n", promedio);

        rUno = promedio;
    }

    printf("\n\nValor absoluto : %1f", VALOR_ABSOLUTO((rUno * rUno) - dato));
    printf("\n\nTolerancia : %1f", TOL);

    return rUno;
}
