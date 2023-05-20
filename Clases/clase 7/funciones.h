#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

double factorial(int a);

///RECURSIVIDAD-> permite tener un codigo más legible y elegante (compacto).
//Debe tener una condición de corte, para que deje de instanciar y va devolviendo la memoria como el rdo de la funcion anterior.

double factorialRecursiva(int a);

typedef struct
{
    int d,m,a;
}t_fecha;

typedef struct
{
    char apeynom[50];
    t_fecha fec_nac;

}t_alumno;

typedef struct
{
    //t_alumno alumno;      ///pasaría A SER: void* alu; ///una estructura generica (podria mandar un t_alumno, t_docente, etc.
    void *a;
    unsigned tamInfo;   ///tamaño de la estructura generica

}t_info;  ///una estructura tiene adentro otra estructura de forma escalonada


void procesa(t_alumno *alu);
//Procesar otras estructuras de datos, manera genérica
void procesaGenerica( void* a);  ///me va a dejar enviarle cualquier tipo de estructura

void imprime_alumnos( void *a);

void procesaGen(void *a, void (*accion)(void*));

void copiar(void *a, void*b, unsigned tam);//copia una estructura en otra
#endif // FUNCIONES_H_INCLUDED
