#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int a= 4;
    printf("El factorial es: %f\n", factorial(a));

    printf("El factorial de 4 es:  %f\n", factorialRecursiva(a));

    t_alumno alu ={ "Juan Pepinillo", {10,10,1980}};
    //t_docente doc = ;
    //procesa(&doc, calcular_sueldos);

    procesaGen(&alu, imprime_alumnos); //me va a permitir hacer esto porque es un puntero a void.

    t_info a2,b;

   // (t_alumno*) a2 = a2.a;


    copiar(&a2, &b, sizeof(t_alumno)); //justo voy a pasar estructuras de t_alumno;



    return 0;
}
