#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia, mes, anio;
}t_fecha;

typedef struct{

    long dni;
    char nombre[50];
    t_fecha fechaNac;
}t_alumno;

int main()
{
    t_alumno alu[] = {  {98765431, "yellow perez",  {23, 4, 1999}},
                        {74185962, "green gomez",   {1,  3, 2002}},
                        {14725863, "gray lopez",    {10, 8, 1998}}
                     };

    FILE *pf = fopen("alumnos.dat", "wb");

    if(!pf)
        printf("\n error al abrir el archivo");

    fwrite(&alu, sizeof(alu), 1, pf);

    fclose(pf);

/********************** MOSTRAR EN PANTALLA ***************************************/

    FILE *pm =  fopen("alumnos.dat", "rb");

    t_alumno estructura;

    fread(&estructura, sizeof(estructura), 1, pm);

    printf("\nDNI   \t\t\t NOMBRE Y APELLIDO  \t FECHA DE NACIMIENTO ");

    while(!feof(pm)) {
        printf("\n%li", estructura.dni);
        printf("\t\t %s", estructura.nombre);
        printf("\t\t %d/%d/%d", estructura.fechaNac.dia, estructura.fechaNac.mes, estructura.fechaNac.anio);
        fread(&estructura, sizeof(estructura), 1, pm);
    }

    fclose(pm);

    return 0;
}
