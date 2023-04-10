#include <stdio.h>
#include <stdlib.h>

int sumaNumerosParesMen(int dato);

int main()
{
    int numero;

    do{
       printf("\nIngrese un numero positivo: ");
       scanf("%d", &numero);
    }while(numero < 0);

    printf("suma de los numeros pares menores que %d : %d", numero, sumaNumerosParesMen(numero));

    return 0;
}

int sumaNumerosParesMen(int dato) {

    int acum = 0;

    for(int i = 0 ; i < dato ; i++) {

        if(i % 2 == 0)
            acum += i;
    }

    return acum;
}
