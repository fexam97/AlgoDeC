#include <stdio.h>
#include <stdlib.h>

// puntero a funcion es la direccion de una funcion

float (*ptr)(float, float);
float suma(float x, float y);
float resta(float x, float y);
float division(float x, float y);
float produto(float x, float y);

int main()
{
    float a = 20.0;
    float b = 10.3;
    float x;

    printf(" a = %0.2f \t b = %0.2f", a, b);

    /*
    Una vez que se ha declarado el puntero a función, se puede asignar la dirección de una función
    utilizando el nombre de la función sin paréntesis.
    */

    ptr = suma;
    x = ptr(a, b);
    printf("\n\n suma : %0.2f", x);

    ptr = resta;
    x = ptr(a, b);
    printf("\n\n resta : %0.2f", x);

    ptr = division;
    x = ptr(a, b);
    printf("\n\n division : %0.2f", x);

    ptr = produto;
    x = ptr(a, b);
    printf("\n\n producto  : %0.2f", x);

    puts("");

    return 0;
}

float suma(float x, float y) {

    return x + y;

}
float resta(float x, float y) {

    return x - y;
}
float division(float x, float y) {

    return x / y;
}
float produto(float x, float y) {

    return x * y;
}


/*
En resumen, el puntero a función permite almacenar y llamar a funciones de manera dinámica en un programa.

Esto puede ser útil en situaciones donde se necesita seleccionar y ejecutar diferentes funciones
en tiempo de ejecución o cuando se quiera implementar polimorfismo en el código.

*/
