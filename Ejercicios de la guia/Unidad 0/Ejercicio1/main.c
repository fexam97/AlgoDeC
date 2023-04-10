#include <stdio.h>
#include <stdlib.h>

/*
    0! = 1
    1! = 1
    2! = 1 * 2
    3! = 1 * 2 * 3
    4! = 1 * 2 * 3 * 4

*/

unsigned long int factorial(int dato);

int main()
{
    long int numero;

    printf("\n Ingrese un numero : ");
    scanf("%d", &numero);

    printf("\n El factorial de %d es :  %d", numero, factorial(numero));

    return 0;
}

unsigned long int factorial(int dato) {

    int acum = 1;

    for(int i = 1 ; i <= dato ; i++)
        acum *= i;

    return acum;
}
