#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2
typedef struct{
    char nombre[50];
    int edad;
}tAlumno;

//void cargarVectorEsctructura(tAlumno *alu);
void mostrarVectorEsctrutura(tAlumno *alu, int ce);

int main()
{
    tAlumno alumnos[TAM];

    alumnos[0].edad = 20;
    strcpy(alumnos[0].nombre, "juan");
    alumnos[1].edad = 16;
    strcpy(alumnos[1].nombre, "fio");

    mostrarVectorEsctrutura(alumnos, TAM);

    return 0;
}

void mostrarVectorEsctrutura(tAlumno *alu, int ce) {

    for(int i = 0 ; i < ce ; i++){
        printf("alumno : %s", alu[i].nombre);
        printf("\nedad : %d \n", alu[i].edad);
    }

}
