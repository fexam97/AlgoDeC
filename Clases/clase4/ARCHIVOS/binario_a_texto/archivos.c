#include <stdio.h>
#include <string.h>
#include "archivos.h"

/******************************************************************************
//  Nombre:			binario_a_texto.
//  Descripción:	Arma un archivo de texto a partir de un archivo binario.
//  Parametros: 	ptxt: puntero a archivo de texto.
//                  pbin: puntero a archivo binario.
//  Retorno         No posee.
******************************************************************************/
void binario_a_texto(FILE *pbin,FILE *ptxt)
{
    t_dato dato;

    while(fread(&dato,sizeof(t_dato),1,pbin))
        ///a texto de longitud variable
        fprintf(ptxt,"%ld|%s|%d/%d/%d|%c\n",dato.dni,dato.apyn,dato.fecha_nac.dia,dato.fecha_nac.mes,dato.fecha_nac.anio,dato.sexo);

        ///a texo de longitud fija
        ///fprintf(ptxt, "%-8ld%-21s%2d%2d%4d%c\n",dato.dni,dato.apyn,dato.fecha_nac.dia,dato.fecha_nac.mes,dato.fecha_nac.anio,dato.sexo);
}

/******************************************************************************
//  Nombre:			crea_binario.
//  Descripción:	Arma un archivo binario a partir de vector de estructuras.
//  Parametros: 	No posee.
//  Retorno         OK: si pudo crear el archivo correctamente.
//                  ERROR: si NO pudo crear el archivo correctamente.
******************************************************************************/
int crea_binario()
{
    FILE *pbin;
    t_dato vdatos[] = {
                        {32691574,"Jonatan Uran Acevedo",{18,10,1986},'M'},
                        {354,"Federico Pezzola",{1,2,90},'M'},
                        {12,"Cris Cuesta",{10,2,78},'M'}
                      };

    pbin = fopen(ARCH_BIN,"wb");

    if(!pbin)
    {
        printf("Error de creacion de archivo binario\n");
        return ERROR;
    }

    fwrite(&vdatos,sizeof(vdatos),1,pbin);

    fclose(pbin);

    return OK;
}

/******************************************************************************
//  Nombre:			muestra_binario.
//  Descripción:	Muestra un archivo binario.
//  Parametros: 	No posee.
//  Retorno         OK: si pudo mostrar el archivo correctamente.
//                  ERROR: si NO pudo mostrar el archivo correctamente.
******************************************************************************/
int muestra_binario()
{
    t_dato dato;
    FILE *pbin = fopen(ARCH_BIN,"rb");

    if(!pbin)
    {
        printf("Error de apertura\n");
        return ERROR;
    }

    while(fread(&dato,sizeof(t_dato),1,pbin))
        printf("%ld|%s|%d/%d/%d|%c\n",dato.dni,dato.apyn,dato.fecha_nac.dia,dato.fecha_nac.mes,dato.fecha_nac.anio,dato.sexo);

    fclose(pbin);

    return OK;
}
