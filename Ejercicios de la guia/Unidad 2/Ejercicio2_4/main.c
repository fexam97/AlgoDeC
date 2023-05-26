#include "funciones.h"

int main()
{

    //system(" color F1");  // se puede cambiar el color de la consola :p

    char cadenaUno[] = "Hola como estas";
    char *cadenaDos = copiaCadena(cadenaUno);

    if(cadenaDos != '\0') {
        printf("%s", cadenaDos);
        free(cadenaDos);
    }
    else
        printf("\n error al reservar memoria");

    return 0;
}

