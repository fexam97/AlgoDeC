#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARCHIVO_BIN "personas.bin"
#define ARCHIVO_TXT "personas.txt"
#define ERROR_ARCHIVO 1
#define OK 2
#define TAM 100
#define TAM_REGISTRO 61
#define TAM_FECHA 8

typedef struct{
    int dia, mes, anio;
}tFecha;

typedef struct{
    int id;
    char nya[50];
    tFecha fNac;

}tDato;

void grabaArchvo(FILE *pBin);
int binarioATexto(FILE *pBin, FILE *pTxt); //pBin copia de una direccion
int textoVariableABinario(FILE *pBin, FILE *pTxt); // longitud variable
int textoFijoABinario(FILE *pBin, FILE *pTxt); // longitud fija

#endif // FUNCIONES_H_INCLUDED


/*

Los archivos binarios son cadenas largas char[100]

archivos de texto :
2.1 longitud fija: cada registro utiliza 2 bytes para el id, despues 20 para el nombre y para la edad 3 caracteres


2.2 longitud variable: el id puede seguir aumentando.

998 / jonatan / 36

12 / cristian / 27

1200 / juan perez / 100

los registros tienen diferentes tamaño pero estan separados





*/

// https://github.com/TooomyC/Library_String_C
