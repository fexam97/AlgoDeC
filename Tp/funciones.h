#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "tipos.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A_MAYUSCULA(A) ((A >= 'a' && A <= 'z') ? (A - 32) : A)
#define ERROR 1

int ingresarYValidar(const char *nombArch);
long validarDni(int desde, int hasta);
t_fecha validarFecha(void);
char validarSexo(void);
int mostrarArchivo(const char *nombArch);
#endif // FUNCIONES_H_INCLUDED
