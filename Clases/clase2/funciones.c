#include "funciones.h"

void saludo(void) {

    printf("\n Hola mundo ");
}

int puntero(int* valor) {

    printf("\n numero : %d", *valor);

    *valor = 10;

    printf("\n numero : %d", *valor);

    return valor;
}

void menuOpciones(void) {

    int opcion;
    int fact;
    int numUno;
    int numDos;
    int exponente;
    int raiz;
    int numeroFibonacci;
    int numeroSeno;

    printf("\n\t MENU EJERCICIOS : ");

    do{
        printf("\n\n\n 1 - FACTORIAL ");
        printf("\n 2 - COMBINATORIA ");
        printf("\n 3 - POTENCIA ");
        printf("\n 4 - RAIZ CUADRADA ");
        printf("\n 5 - FIBONACCI");
        printf("\n 6 - SENO DE X");
        printf("\n 7 - SALIR");

        printf("\n\n Ingrese una opcion : ");
        scanf("%d", &opcion);

        switch(opcion) {

        case 1:
                printf("\n Ingrese un numero :");
                scanf("%d", &fact);

                printf("\n El factorial de %f es : %f ", fact, factorial(fact));
                break;

        case 2:

               printf("\n Ingrese el primer numero : ");
               scanf("%d", &numUno);

               printf("\n Ingreses el segundo numero : ");
               scanf("%d", &numDos);

               printf("\n La combinatoria es : &f", combinatoria(numUno, numDos));
               break;

        case 3:

                printf("\n Ingrese el exponente :");
                scanf("%d", &exponente);

                printf("\n e^%d = %f", exponente, numeroEuler(exponente));
                break;

        case 4:

                printf("\n Ingrese numero mayor a cero : ");
                scanf("%d", &raiz);

                printf("\n raiz cuadrada de %d = %f", raiz, raizCuadrada(raiz));
                break;

        case 5:

                printf("\n Ingrese un numero mayor a cero : ");
                scanf("%d", &numeroFibonacci);

                esFibonacci(numeroFibonacci); // me tira un mensaje
                break;

        case 6:

                printf("\n ingrese un numero : ");
                scanf("%d", &numeroSeno);

                printf("\nSeno de %d = %f", numeroSeno, calcularSeno(numeroSeno));
                break;

        case 7:
                printf("\n hasta luego  ");
                opcion = 7;
                break;

        }

    }while(opcion != 7);

}
