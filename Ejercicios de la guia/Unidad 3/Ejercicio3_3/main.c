#include "funciones.h"

/*
Escriba una función que permita el ingreso de una cantidad variable de elementos en un array de
enteros int.

Escriba una función que calcule la suma de todos los elementos almacenados en un array de enteros,
y su promedio. El promedio (float) debe ser devuelto por la función, y la suma debe ser también
devuelta mediante un argumento extra (puntero a long) que recibe la función.

Escriba otra versión de la función anterior, pero devolviendo ambos valores calculados en una
variable que responda a una estructura compuesta de un miembro long y un miembro float.

    a- escriba un main que utilice la primera y segunda función, y
    b- otro main que utilice la primera y la tercera

En ambos casos, la suma y el promedio deben ser mostrados en la función main.

¿Tiene claro que la primera alternativa es mejor que la segunda porque no es necesario el uso de una
estructura? En ciertos casos puede ser mejor la segunda alternativa

*/


int main()
{
    int cantElementos = ingresoCantidadDeElementos(DESDE, HASTA);
    int arreglo[cantElementos];

    cargarVector(arreglo, cantElementos);
    mostrarVector(arreglo, cantElementos);

    long suma = 0;

    printf("\n la suma es : %d ", sumaYPromedio(arreglo, cantElementos, &suma));

    return 0;
}


