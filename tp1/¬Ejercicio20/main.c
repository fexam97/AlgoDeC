#include <stdio.h>
#include <stdlib.h>
#define ESMAYOR(A, B) ((A) > (B) ? (A) : (B))
#define ESMENOR(A, B) ((A) > (B) ? (B) : (A))
#define ESIMPAR(A) ( A % 2 != 0 ) ? 1 : 0

int pedirNumero(void);
int multiplicacionRusa(int primerDato, int segundoDato);

int main()
{
    int primerNumero = pedirNumero();
    int segundoNumero = pedirNumero();

    printf("\n\nEl producto es : %d", multiplicacionRusa(primerNumero, segundoNumero));

    return 0;
}

int pedirNumero(void) {

    int dato;

    do{
        printf("\nIngrese un numero mayor a cero : ");
        scanf("%d", &dato);
    }while(dato < 0);

    return dato;
}

int multiplicacionRusa(int primerDato, int segundoDato) {

    int doble = ESMAYOR(primerDato, segundoDato);
    int mitad = ESMENOR(primerDato, segundoDato);
    int resultado = 0;

    while(mitad >= 1) {

        printf("\nDoble : %d", doble);
        printf("\tmitad : %d", mitad);

        if(ESIMPAR(mitad))
            resultado = resultado + doble;

        doble = doble * 2;
        mitad = mitad / 2;
    }

    return resultado;
}
