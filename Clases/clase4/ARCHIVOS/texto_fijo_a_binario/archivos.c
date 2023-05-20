#include <stdio.h>
#include <string.h>
#include "archivos.h"

/// 32691574Jonatan Uran Acevedo18/10/1986M
/******************************************************************************
//  Nombre:			texto_fijo_a_binario.
//  Descripción:	Arma un archivo binario a partir de un archivo de texto.
//  Parametros: 	ptxt: puntero a archivo de texto.
//                  pbin: puntero a archivo binario.
//  Retorno         No posee.
******************************************************************************/
void texto_fijo_a_binario(FILE *ptxt,FILE *pbin)
{
    t_dato dato;
    char texto[TAM_REGISTRO];

    while(fgets(texto,TAM_REGISTRO,ptxt))
    {
        carga_estructura(texto, &dato);
        fwrite(&dato,sizeof(t_dato),1,pbin);
    }
}

/******************************************************************************
//  Nombre:			carga_estructura.
//  Descripcion:	Llena una estructura de datos a partir de una cadena.
//  Parametros: 	s: cadena de texto.
//                  dato: puntero a la estructura de datos a llenar.
//  Retorno         No posee.
******************************************************************************/
void carga_estructura(const char *s, t_dato *dato)
{
    char ptr[TAM_REGISTRO];

    strcpy(ptr,s);
    *(ptr + strlen(ptr)-1) = '\0';
    /*************************************************************/
    /*                       Sexo                                */
    /*************************************************************/
    dato->sexo = *(ptr + strlen(ptr) - 1);
    *(ptr + strlen(ptr) - 1) = '\0';

    /*************************************************************/
    /*                Fecha de Nacimiento                        */
    /*************************************************************/
    sscanf(ptr +strlen(ptr) - TAM_FECHA,"%2d%2d%4d",&dato->fecha_nac.dia, &dato->fecha_nac.mes, &dato->fecha_nac.anio);
    *(ptr + strlen(ptr) - TAM_FECHA) = '\0';

    /*************************************************************/
    /*                 Nombre y Apellido                         */
    /*************************************************************/
    sscanf(ptr +strlen(ptr) - TAM_APYN,"%21[0-9a-zA-Z ,]",dato->apyn);
    //strcpy(dato->apyn, ptr +strlen(ptr) - TAM_APYN);
    *(ptr + strlen(ptr) - TAM_APYN) = '\0';

    /*************************************************************/
    /*                      DNI                                  */
    /*************************************************************/
    sscanf(ptr, "%ld",&dato->dni);
}

/******************************************************************************
//  Nombre:			muestra_binario.
//  Descripcion:	Muestra un archivo binario.
//  Parametros: 	No posee.
//  Retorno         OK: si pudo mostrar el archivo correctamente.
//                  ERROR: si NO pudo mostrar el archivo correctamente.
******************************************************************************/
int muestra_binario()
{
    FILE *pbin;
    t_dato dato;

    pbin = fopen(ARCH_BIN,"rb");

    if(!pbin)
    {
        printf("Error de lectura de archivo\n");
        return ERROR;
    }

    printf("**********\nARCHIVO BINARIO\n**********\n\nDNI-NOMBRE-FECHA_NACIMIENTO-SEXO\n");
    while(fread(&dato,sizeof(t_dato),1,pbin))
        printf("%-8ld%-21s%-2d%-2d%-4d%c\n",dato.dni,dato.apyn,dato.fecha_nac.dia,dato.fecha_nac.mes,dato.fecha_nac.anio,dato.sexo);

    fclose(pbin);

    return OK;
}
