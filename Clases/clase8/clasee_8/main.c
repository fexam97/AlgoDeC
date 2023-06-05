#include "tipos.h"
#include "ordenamiento.h"
#include "funciones.h"


int main()
{

    tAlumno alumnos[] = {
                        {38596745, "Uran Jonatan", {17, 5, 1995}},
                        {42846571, "Blue gonzalez", {12, 3, 2002}},
                        {34515432, "Red Rodrgiuez", {31, 5, 1990}},
                        {47057657, "Yellow Romero", {24, 7, 2005}}
                        };

    size_t cantidadElementos = sizeof(alumnos) / sizeof(tAlumno); // se puede hacer con la macro


    bubbleSort(alumnos, cantidadElementos, sizeof(tAlumno), compararAlumnos);
    show(alumnos, cantidadElementos, mostrarAlumnos); // no se pone mostrarAlumnos(), eso se hace en el desarrollo de la funcion

    return 0;
}
