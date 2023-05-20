#include <stdio.h>
#include <string.h>
#include "archivos.h"

/// 32691574|Jonatan Uran|18/10/1986|M
/******************************************************************************
//  Nombre:			texto_variable_a_binario.
//  Descripción:	Arma un archivo binario a partir de un archivo de texto
                    con longitud de campos variable.
//  Parametros: 	ptxt: puntero a archivo de texto.
//                  pbin: puntero a archivo binario.
//  Retorno         No posee.
******************************************************************************/
void texto_variable_a_binario(FILE *ptxt,FILE *pbin)
{
    t_dato dato;
    char texto[100];

    while(fgets(texto,100,ptxt))
    {
        carga_estructura(texto, &dato);
        ///carga_estructura_con_desplazamientos(texto, &dato);

        fwrite(&dato,sizeof(t_dato),1,pbin);
    }
}

/******************************************************************************
//  Nombre:			carga_estructura_con_desplazamientos.
//  Descripción:	Llena una estructura de datos a partir de una cadena.
//  Parametros: 	s: cadena de texto.
//                  dato: puntero a la estructura de datos a llenar.
//  Retorno         No posee.
******************************************************************************/
void carga_estructura_con_desplazamientos(const char *s, t_dato *dato)
{
    char *ptr;

    ptr = strchr(s,'\n');
    *ptr = '\0';
    /*************************************************************/
    /*                       Sexo                                */
    /*************************************************************/
    dato->sexo = *(ptr - 1);
    *(ptr - 2) = '\0';

    /*************************************************************/
    /*                Fecha de Nacimiento                        */
    /*************************************************************/
    ptr = strrchr(s,'|');
    sscanf(ptr+1,"%d/%d/%d",&dato->fecha_nac.dia, &dato->fecha_nac.mes, &dato->fecha_nac.anio);
    *(ptr) = '\0';

    /*************************************************************/
    /*                 Nombre y Apellido                         */
    /*************************************************************/
    ptr = strrchr(s,'|');
    strcpy(dato->apyn,ptr + 1);
    *(ptr) = '\0';

    /*************************************************************/
    /*                      DNI                                  */
    /*************************************************************/
    sscanf(s,"%ld",&dato->dni);
}

/******************************************************************************
//  Nombre:			carga_estructura.
//  Descripción:	Llena una estructura de datos a partir de una cadena.
//  Parametros: 	s: cadena de texto.
//                  dato: puntero a la estructura de datos a llenar.
//  Retorno         No posee.
******************************************************************************/
void carga_estructura(const char *s, t_dato *dato)
{
    sscanf(s,"%ld|%[^|]|%d/%d/%d|%c",&dato->dni,dato->apyn,&dato->fecha_nac.dia,&dato->fecha_nac.mes,&dato->fecha_nac.anio,&dato->sexo);
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

    while(fread(&dato,sizeof(t_dato),1,pbin))
        printf("%ld %s %d/%d/%d %c\n",dato.dni,dato.apyn,dato.fecha_nac.dia,dato.fecha_nac.mes,dato.fecha_nac.anio,dato.sexo);

    fclose(pbin);

    return OK;
}
