#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

/*
    Desarrolle un programa que reserve memoria para almacenar 5 elementos de un tipo de dato creado
    por Usted.

    Dicho tipo de dato debe contener al menos un array de char, un entero, un flotante y un char.

    Luego asigne valores a dichos elementos. Asegúrese de devolver la memoria reservada.

*/

struct ManUnited{

    char nombre[50];
    int edad;
    char posicion;
    float altura;

};

void cargarVector(struct ManUnited *emple);
void mostrarVector(struct ManUnited *emple);

int main()
{
    struct ManUnited *jugador;

    jugador = malloc(TAM * sizeof(struct ManUnited));

    cargarVector(jugador);

    mostrarVector(jugador);

    free(jugador);

    return 0;
}

void cargarVector(struct ManUnited *emple) {

    char palabra[50];
    char pos;

    for(int i = 0 ; i < TAM ; i++) {

        printf("Jugador nro : %d\n", i + 1);

        printf("\n Ingrese el nombre : ");
        scanf("%s", palabra);
        strcpy(emple[i].nombre, palabra);

        printf("\n Ingrese la edad : ");
        scanf("%d", &emple[i].edad);

        printf("\n Ingrese la altura : ");
        scanf("%f", &emple[i].altura);

        fflush(stdin);

        do{

        printf("\n Ingrese posicion:");
        printf("\n a : arquero \n d : defensor \n m : mediocampista \n s : delantero ");
        scanf("%c", &pos);

        }while(pos != 'a'); // no me sale con pos != 'a' || pos != 'd' || pos != 'm' || pos != 's'

        emple[i].posicion = pos;

    }

}

void mostrarVector(struct ManUnited *emple) {

    printf("\n MANCHESTER UNITED TEMPORADA 2022/23\n");

    for(int i = 0 ; i < TAM ; i++) {

        printf("\nNombre : %s", emple[i].nombre);
        printf("\nEdad : %d", emple[i].edad);
        printf("\nAltura : %0.2f", emple[i].altura);
        printf("\nposicion : %c \n\n", emple[i].posicion);

    }
}
