#include <stdio.h>
#include <stdlib.h>
#define DESDE 1
#define HASTA 1000

int leerControlRango(int desde, int hasta);

int main()
{
    int ce = 5;
    int vec[ce];
    int i = 0;
    int dato;

    printf("ingrese elemento: cero para finalizar");
    dato = leerControlRango(DESDE, HASTA);

    while(dato != 0){

        vec[i] = dato;
        i++;

        printf("ingrese elemento: cero para finalizar");
        dato = leerControlRango(DESDE, HASTA);
    }

    for(int j = 0 ; j < ce ; j++)
        printf("\n%d", vec[j]);



    return 0;
}

int leerControlRango(int desde, int hasta) {

    int numero;
    do{
        scanf("%d",&numero);
    }while(numero < desde || numero > hasta);

    return numero;
}
