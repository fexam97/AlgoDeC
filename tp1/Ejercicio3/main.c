#include <stdio.h>

float factorial(int dato);

int main()
{
    double e = 0;
    double tol;
    int i; // iterador

    printf("Ingrese un numero entre 0 y 1 : ");
    scanf("%f", &tol);

    e += 1; // e = x^0 + e^1

    while(1/factorial(i) > tol){

        e += 1/factorial(i);
        i++;
    }

    printf("e^x = %.10f", e);

    return 0;
}

float factorial(int dato) {

    float acum = 1;

    if(dato != 0){

        for(int i = 1 ; i <= dato ; i++)
            acum = acum * i;
    }

    return acum;

}
