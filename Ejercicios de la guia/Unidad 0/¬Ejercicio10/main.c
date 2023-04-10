#include <stdio.h>
#include <stdlib.h>

// si n = 5  =>  1 + 2 + 3 + 4 + 5 = 15

// sumatoria = n(n + 1) / 2

int sumatoria(int dato);

int main()
{
    int numero;

    do{
        printf("\nIngrese un numero mayor a cero : ");
        scanf("%d", &numero);
    }while(numero < 0);

    printf("\nLa suma de los primeros %d numeros naturales : %d ", numero, sumatoria(numero));

    return 0;
}

int sumatoria(int dato) {

/*
    int acum;

    for(int i = 1 ; i <= dato ; i++)
        acum += i;
*/
    return (dato*(dato + 1)) / 2 ; // se puede hacer una macro
}
