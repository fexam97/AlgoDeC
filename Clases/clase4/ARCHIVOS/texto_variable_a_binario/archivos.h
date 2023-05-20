#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED

#define OK 0
#define ERROR 1

#define ARCH_BIN "archivos/archivo_binario.bin"
#define ARCH_TXT "archivos/archivo_texto_v.txt"

typedef struct
{
    int dia, mes, anio;
}t_fecha;

/// 32691574|Jonatan Uran|18/10/1986|M
typedef struct
{
    long dni;
    char apyn[40];
    t_fecha fecha_nac;
    char sexo;
}t_dato;


void texto_variable_a_binario(FILE *ptxt,FILE *pbin);
void carga_estructura(const char *s, t_dato *dato);
void carga_estructura_con_desplazamientos(const char *s, t_dato *dato);
int muestra_binario();

#endif // ARCHIVOS_H_INCLUDED
