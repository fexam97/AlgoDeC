#include "funciones.h"

int main()
{
    FILE *pBin;
    FILE *pTxt;

/*
    pBin = fopen(ARCHIVO_BIN, "rb"); // solo se va a leer

    if(pBin == NULL) // !pBin
    {
        printf("\n error de apertura");
        return ERROR_ARCHIVO;
    }

    pTxt = fopen(ARCHIVO_TXT, "wt"); // se va a escribir

    if(!pTxt)
    {
      printf("\n error de apertura");
      return ERROR_ARCHIVO;

    }

    if(binarioATexto(pBin, pTxt))
    {
        printf("\n asd");
    }
    else
        printf("\n");

    fclose(pBin);
    fclose(pTxt);

    return OK;
*/

    pBin = fopen(ARCHIVO_BIN, "wb");

    if(pBin == NULL) // !pBin
    {
        printf("\n error de apertura");
        return ERROR_ARCHIVO;
    }

    pTxt = fopen(ARCHIVO_TXT, "rt");

    if(!pTxt)
    {
      printf("\n error de apertura");
      return ERROR_ARCHIVO;

    }

    if(textoVariableABinario(pBin, pTxt))
    {
        printf("\n asd");
    }
    else
        printf("\n");

    fclose(pBin);
    fclose(pTxt);

    return OK;
}
