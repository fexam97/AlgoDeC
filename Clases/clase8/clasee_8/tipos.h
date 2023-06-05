#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenamiento.h"

typedef struct {

    int dia, mes, anio;
}tFecha;

typedef struct {

    long dni;
    char apeYnom[30];
    tFecha fechaNac;
}tAlumno;

#endif // TIPOS_H_INCLUDED
