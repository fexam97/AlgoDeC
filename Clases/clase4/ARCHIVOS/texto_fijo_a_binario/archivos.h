#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED

#define OK 0
#define ERROR 1

#define ARCH_BIN "archivos/archivo_binario.bin"
#define ARCH_TXT "archivos/archivo_texto_f.txt"

#define TAM_REGISTRO    40
#define TAM_DNI         8
#define TAM_APYN        21
#define TAM_FECHA       8
#define TAM_SEXO        1

typedef struct
{
    int dia, mes, anio;
}t_fecha;

/// 32691574Jonatan A Uran Acevedo18101986M
typedef struct
{
    long dni;
    char apyn[TAM_APYN];
    t_fecha fecha_nac;
    char sexo;
}t_dato;


void texto_fijo_a_binario(FILE *ptxt,FILE *pbin);
void carga_estructura(const char *s, t_dato *dato);
int muestra_binario();

#endif // ARCHIVOS_H_INCLUDED
