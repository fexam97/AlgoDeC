#include <stdio.h>
#include <stdlib.h>
#include "archivos.h"

int main()
{
    FILE *ptxt,*pbin;

    pbin = fopen(ARCH_BIN,"wb");
    ptxt = fopen(ARCH_TXT,"rt");

    if(!ptxt || !pbin)
    {
        printf("Error de archivos\n");
        return 1;
    }

    texto_fijo_a_binario(ptxt,pbin);

    fclose(ptxt);
    fclose(pbin);

    muestra_binario();

    return 0;
}
