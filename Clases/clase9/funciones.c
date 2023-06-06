#include <stdio.h>
#include "biblioteca.h"
#include "funciones.h"

int muestra_alumnos(const char *path)
{
    t_alumno alumno;

    FILE *arch = fopen(path, "rb");

    if (!arch){
        printf("Error de lectura de Archivo\n");
        return ERROR;
    }

    printf("DNI   \tAPELLIDO y NOMBRE \tFECHA_NACIMIENTO\n");

    fread(&alumno, sizeof(t_alumno), 1, arch);
    while(!feof(arch)){
        printf("%ld, %-20s %2d/%2d/%4d\n", alumno.dni, alumno.apyn, alumno.fecha_nac.dia, alumno.fecha_nac.mes, alumno.fecha_nac.anio);
        fread(&alumno, sizeof(t_alumno), 1, arch);
    }
    fclose(arch);

    return OK;
}

/******************************************************************************/
int compara_alumnos_idx(void *a, void *b)
{
    t_indice *idx1 = (t_indice *)a;
    t_indice *idx2 = (t_indice *)b;

    return idx1->dni - idx2->dni;
}

/******************************************************************************/
int mostrar_ordenado(t_indice *indice, int cant_registros, const char *path)
{
   t_alumno alumno;
   int i;

    FILE *arch = fopen(path, "rb");

    if (!arch){
        printf("Error de lectura de Archivo\n");
        return ERROR;
    }

    printf("DNI   \tAPELLIDO y NOMBRE \tFECHA_NACIMIENTO\n");

    for(i = 0; i < cant_registros; i++){

        fseek(arch, indice[i].pos * sizeof(t_alumno) , SEEK_SET);
        fread(&alumno, sizeof(t_alumno), 1, arch);
        printf("%ld, %-20s %2d/%2d/%4d\n", alumno.dni, alumno.apyn, alumno.fecha_nac.dia, alumno.fecha_nac.mes, alumno.fecha_nac.anio);
    }

    return OK;
}

/******************************************************************************/
int buscar_dni(t_indice *indice, int cant_registros, const char *path, long int dni_a_buscar)
{
    t_alumno alumno;
    int i;

    FILE *arch = fopen(path, "rb");

    if (!arch){
        printf("Error de lectura de Archivo\n");
        return ERROR;
    }

    ///for(i = 0; i < cant_registros; i++){
    while(i < cant_registros){

        if(dni_a_buscar == indice[i].dni){
            fseek(arch, indice[i].pos * sizeof(t_alumno) , SEEK_SET);
            fread(&alumno, sizeof(t_alumno), 1, arch);
            printf("%ld, %-20s %2d/%2d/%4d\n", alumno.dni, alumno.apyn, alumno.fecha_nac.dia, alumno.fecha_nac.mes, alumno.fecha_nac.anio);
            return ENCONTRADO;
        }

        i++;
    }

    printf("Alumno NO Encontrado\n");
    return NO_ENCONTRADO;
}
