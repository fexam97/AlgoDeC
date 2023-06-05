#include "funciones.h"

int compararAlumnos(void *a, void *b) {

    // a->dni : no se hace eso , anyes de castear

    // aluUno->dni > aluDos   ... 1 > 2
    // aluUno->dni = aluDos   ... 1 = 2
    // aluUno->dni < aluDos   ... 1 < 2

    tAlumno *aluUno = (tAlumno *)a; // se castea
    tAlumno *aluDos = (tAlumno *)b;

    if(aluUno->dni > aluDos->dni)
        return 1;

    return 0;
}

void mostrarAlumnos(void *a, size_t cant) { // mostrar todos los alumnos

   tAlumno *aluUno = (tAlumno *)a;   // es la primera posicion del vector
   int i = 0;

   while(i < cant) {

    printf("\n DNI : %ld \t", aluUno->dni);
    printf("NOMBRE Y APELLIDO : %s \t", aluUno->apeYnom);
    printf("FECHA DE NACIMIENTO : %d/%d/%d \t", aluUno->fechaNac.dia, aluUno->fechaNac.mes, aluUno->fechaNac.anio);


    printf("\n\n");
    aluUno++;
    i++;
   }

}
