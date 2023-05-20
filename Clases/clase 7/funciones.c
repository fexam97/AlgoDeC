#include "funciones.h"

double factorial(int a)
{
    int i;
    double res=1;  ///DOUBLE ES %F

    for(i=0; i <=a; i++ )
    {
        res*= a;
        a--;
    }
    return res;
}


double factorialRecursiva(int a)
{
    if(a==1)  ///CONDICION DE CORTE-> vuelve hacia atrás y lee los rdos.
        return 1; ///si es uno devolveme el valor de 1

   return a* factorial(a-1); //a por lo que me devolvió lo anterior
}


///una cadena, avanzamos hasta que la cadena termina

void imprime_alumnos( void *a)
{
    t_alumno *alu = (t_alumno*)a;
    printf("%s %d/%d/%d\n", alu->apeynom, alu->fec_nac.d, alu->fec_nac.m, alu->fec_nac.a);
}

void procesaGen(void *a, void(*accion)(void *))
{
    accion(a);
}

void copiar(void *a, void*b, unsigned tam)
{
    memcpy(a,b,tam);
}
