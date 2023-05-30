#include <stdio.h>
#include <stdlib.h>
#define INTERCAMBIAR(A, B) \
    do { \
      A ^= B; \
      B ^= A; \
      A ^= B; \
   } while(0)



void intercambiarValores(int *a, int *b);

int main()
{
    int numUno = 35;
    int numDos = 136;

    printf("\n numUno : %d \t numDos : %d ", numUno, numDos);

    printf("\n\n despues del intercambio");

    //intercambiarValores(&numUno, &numDos);

    INTERCAMBIAR(numUno, numDos);

    printf("\n numUno : %d \t numDos : %d ", numUno, numDos);


    return 0;
}


void intercambiarValores(int *a, int *b) {

    int aux = *a;
    *a = *b;
    *b = aux;
}
