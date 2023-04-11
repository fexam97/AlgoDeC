#include "funciones.h"


int main()
{   //struct alumno alu1; // crear una estructura dentro del main
/*
    tAlumno aluDos; // asi se declara

    aluDos.nombre;  // asi accedo
    aluDos.dni;
    aluDos.edad++;
*/
    tFecha fechaUno;

    cargaFecha(&fechaUno); // le mando la direccion para que se modifique en eventos futuros

    printf("\n la fecha es %d / %d / %d", fechaUno.dia, fechaUno.mes, fechaUno.anio);

    if(fechaCorrecta(&fechaCorrecta))
        printf("\n la fecha es correcta : ");
    else
        printf("\n la fecha es incorrecta : ");


   return 0;
}
