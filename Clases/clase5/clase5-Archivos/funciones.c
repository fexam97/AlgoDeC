#include "funciones.h"

void grabaArchvo(FILE *pBin)
{
    tDato vPer[] = {{998, "jonatan",{22, 7, 2020}},
                    {12, "cris",{12, 5, 2018}},
                    {998, "jonatan",{22, 7, 2020}},
                    {998, "jonatan",{22, 7, 2020}}};

    fwrite(&vPer, sizeof(vPer), 1, pBin);

}

int binarioATexto(FILE *pBin, FILE *pTxt)
{
    tDato per;

    while(fread(&per, sizeof(tDato), 1, pBin))
    {
        fprintf(pTxt, "%d - %s - %d/%d/%d \n",
                per.id, per.nya, per.fNac.dia, per.fNac.mes, per.fNac.anio);
    }

    return OK;
}

int textoVariableABinario(FILE *pBin, FILE *pTxt)
{
    char cadena[TAM];
    tDato per;

    while(fgets(cadena, TAM, pTxt)) // alt + 94 = ^
    {                                           // %s : (hay problema con espacios)
                                                // %[^|] : (no hay problema con espacios)
        sscanf(cadena, "%d|%[^|]|%d/%d/%d \n",
               per.id, per.nya, per.fNac.dia, per.fNac.mes, per.fNac.anio);

    fwrite(&per, sizeof(tDato), 1, pBin);
    }

    return OK;
}


int textoFijoABinario(FILE *pBin, FILE *pTxt)
{
    // 998jonatan......2032020 adelante para atras

    // 12_cris.........2032020

    char cadena[TAM];
    char *Pcad = cadena; // me posiciono en el primer caracter
    tDato per;

    while(fgets(cadena, TAM, pTxt))
    {
        *(Pcad + strlen(Pcad)- 1) = '\0'; // me voy al final le pongo barra cero

        sscanf(Pcad + strlen(Pcad) - TAM_FECHA,
                "%2d%2d%2d", per.fNac.dia, per.fNac.mes, per.fNac.anio));

        // scanf para el nombre

        // scanf para el id

        fwrite(&per, sizeof(tDato), 1, pBin);
    }

    return OK;
}
