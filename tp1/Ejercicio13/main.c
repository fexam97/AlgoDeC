#include <stdio.h>
#include <stdlib.h>

void esPrimo(int num);

int main()
{
    int numero;

    printf("Ingrese un numero, para finalizar ingrese cero: ");
    scanf("%d", &numero);


    while(numero != 0){

      esPrimo(numero);

      printf("\nIngrese un numero, para finalizar ingrese cero: ");
      scanf("%d", &numero);
    }


    return 0;
}

void esPrimo(int num){

    printf("\n\n numero : %d", num);
    printf("\n num / 2 : %d", num % 2);
    printf("\n num / 3 : %d", num % 3);

    if(num % 2 != 0 && num % 3 != 0)
        printf("\n\n es primo");
    else
        printf("\n\n No es primo");

}
