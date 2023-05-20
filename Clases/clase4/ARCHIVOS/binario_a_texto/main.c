#include <stdio.h>
#include <stdlib.h>
#include "archivos.h"

int main()
{
    FILE *pbin, *ptxt;

    crea_binario();
    muestra_binario();

    pbin = fopen(ARCH_BIN,"rb");
    ptxt = fopen(ARCH_TXT,"wt");

    if(!pbin || !ptxt)
    {
        printf("Error de archivos\n");
        return 1;
    }

    binario_a_texto(pbin,ptxt);

    fclose(pbin);
    fclose(ptxt);

    return 0;
}
