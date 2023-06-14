#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED
#include "funciones.h"

typedef struct{

    int dia;
    int mes;
    int anio;
}t_fecha;


typedef struct{

    long dni;
    char apeYNom[50];
    t_fecha fechaNac;
    char sexo;
    t_fecha fechaIngr;
    char carrera[4];
    int cantMateriasAprobadas;
    char estado;

}t_alumno;
#endif // TIPOS_H_INCLUDED
