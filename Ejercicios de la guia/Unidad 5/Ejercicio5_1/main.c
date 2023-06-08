#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

#define ABRIR_ARCHIVO(ERROR) \
    do{ \
    FILE *pf = fopen("alumnos.txt", "r"); \
    if(!pf){ \
        printf("\n error al abrir el archivo"); \
    }\
    fclose(pf); \
    printf("\n se pudo abrir el archivo");\
    }while(0)



int abrirArchivo(const void *arch);

int main()
{
    char archivo[] = "alumnos.txt";
/*
    if(abrirArchivo(archivo))
        printf("\n archivo abierto exitosamente");
    else
        printf("\n no se pudo abrir el archivo");
*/

    ABRIR_ARCHIVO(archivo);

    return 0;
}

int abrirArchivo(const void *arch) {

    FILE * pf;

    pf = fopen(arch, "rt");

    if(!pf)
        return FALSE;

    fclose(pf);

    return TRUE;

}
