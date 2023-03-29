#include <stdio.h>
#include <stdlib.h>
#define TAM 19

/*
    0! = 1
    1! = 1
    2! = 1 * 2
    3! = 1 * 2 * 3
    4! = 1 * 2 * 3 * 4

*/
void cargarVector(int vec[], int ce);
unsigned long int calcularFactorial(int vec[], int ce);


int main()
{
    int vec[TAM];
    unsigned long int factorial;

    //printf("%d", sizeof(vec));      // vec = 40
    //printf("\n%d", sizeof(vec[TAM])); // vec = 4

    //printf("\n%d", sizeof(vec)/sizeof(vec[TAM]));

    cargarVector(vec, TAM);


    printf("Factorial hasta %d \n", TAM - 1);

    for(int i = 0 ; i < TAM ; i++){

        factorial = calcularFactorial(vec, i);
        printf("\n%d! = %lu", i, factorial);
    }


    return 0;
}

void cargarVector(int vec[], int ce) {

    for(int i = 0 ; i < ce ; i++){
        vec[i] = i + 1;
    }
}

unsigned long int calcularFactorial(int vec[], int ce) { // I have to do it with a while loop

    unsigned long int acum = 1;
    int i = 1;

    if(ce != 0) {

        while( i <= ce){

            acum = acum * i;
            i++;
        }
    }
    else
        acum = 1;

    return acum;
}
