#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX(A, B) (A > B) ? A : B
#define MIN(A, B) (A < B) ? A : B

//Investigue y utilice las macros max y min de la biblioteca stdlib.h.

int main()
{

    srand(time(NULL));

    int numUno = rand () % 99;
    int numDos = rand () % 99;

    printf("\n Primer numero : %d", numUno);
    printf("\n Segundo numero : %d", numDos);

    printf("\n\n el numero mayor es : %d", MAX(numUno, numDos));
    printf("\n el numero menor es : %d", MIN(numUno, numDos));

    return 0;
}
