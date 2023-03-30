#include <stdio.h>
#include <stdlib.h>
#define ESMAYOR(A, B) ((A) > (B) ? (A) : (B))
#define ESMENOR(A, B) ((A) > (B) ? (B) : (A))

// producto por sumas sucesivas : 4 * 5 = 4 + 4 + 4 + 4 + 4 = 20

int sumasSucesivas(int primerDato, int segundoDato);

int main()
{
    int primerNumero;
    int segundoNumero;
    int producto;

    do{
        printf("\nIngrese primer numero positivo incluido el cero : ");
        scanf("%d", &primerNumero);
    }while(primerNumero < 0);

    do{
        printf("\nIngrese segundo numero positivo incluido el cero : ");
        scanf("%d", &segundoNumero);
    }while(segundoNumero < 0);

    producto = sumasSucesivas(primerNumero, segundoNumero);

    printf("\n\n%d x %d = %d" , primerNumero, segundoNumero, producto);

    return 0;
}

int sumasSucesivas(int primerDato, int segundoDato) {

    int suma = 0; // acumulador

    puts("");

    for(int i = 0 ; i < ESMAYOR(primerDato, segundoDato) ; i++){

        suma += ESMENOR(primerDato, segundoDato);
        printf("%d + ", suma); // esto esta de relleno
    }
    return suma;
}
