#include "funciones.h"
#include "tipos.h"

long validarDni(int desde, int hasta) {

    long dni;

    do{
        scanf("%d", &dni);
    }while(dni <= desde && dni >= hasta);

    return dni;
}

t_fecha validarFecha(void) { // agrandar la funcion

    t_fecha dias;
    int d;
    int m;
    int a;

    do{
        fflush(stdin);
        printf("\n Ingrese el dia : ");
        scanf("%d", &d);
    }while(d <= 1 && d >= 31);

    do{
        fflush(stdin);
        printf("\n Ingrese el mes : ");
        scanf("%d", &m);
    }while(d <= 1 && d >= 12);

    do{
        fflush(stdin);
        printf("\n Ingrese el anio : ");
        scanf("%d", &a);
    }while(a <= 1900);

    d = dias.dia;
    m = dias.mes;
    a = dias.anio;

    return dias;
}

char validarSexo(void) {

    char genero;

    do{
        fflush(stdin);
        scanf("%c", &genero);
        genero = A_MAYUSCULA(genero);

    }while((genero != 'M') && (genero != 'F'));

    return genero;
}

int materiasAprobadas(int cantidad) {

    int materias;

    do{
        scanf("%d", &materias);
    }while(materias <= cantidad);
}


int ingresarYValidar(const char *nombArch) {

    t_alumno alumno[3];
    char nombre[50];
    int cantAlumnos = 0;

    printf("cantidad de alumnos : %d", sizeof(alumno)/sizeof(alumno[0]));

    while(cantAlumnos != sizeof(alumno)/sizeof(alumno[0])){

        printf("\n\n alumno nro :%d", cantAlumnos + 1);

        printf("\n Ingrese el Dni : ");
        alumno[cantAlumnos].dni = validarDni(10000000, 99999999);

        printf("\n Ingrese el nombre del estudiante :");
        scanf("%s", nombre);
        strcpy(alumno[cantAlumnos].apeYNom, nombre);

        printf("\n ingrese la fecha de nacimiento : ");
        alumno[cantAlumnos].fechaNac = validarFecha();

        printf("\n ingrese el sexo :");
        alumno[cantAlumnos].sexo = validarSexo();

        printf("\n ingrese la fecha de ingreso : ");
        alumno[cantAlumnos].fechaIngr = validarFecha();

        printf("\n Ingrese la cantidad de materias aprobadas : ");
        alumno[cantAlumnos].cantMateriasAprobadas = materiasAprobadas(0);


        cantAlumnos++;
    }

    printf("\n FIN DE INGRESO DE ALUMNOS ");

    FILE *pf;
    pf = fopen(nombArch, "wb");

    if(pf = NULL)
        return ERROR;

    fwrite(&alumno, sizeof(alumno), 1, pf);

    mostrarArchivo(nombArch, sizeof(t_alumno), alumno);

    fclose(pf);
}

int mostrarArchivo(const char *nombArch, size_t tam, t_alumno alu[]) {

    FILE *pf = fopen(nombArch, "rb");

    if(!pf)
        return ERROR;


    fread(alu, tam, 1, pf);

    while(!feof(pf)) {

        printf("%d", alu->dni);

        fread(alu, tam, 1, pf);
    }

    fclose(pf);
}


/*
    printf("%d  \t  %s  \t %d/%d/%d \t %c \t %d%d%d  \t %d",
        alumno.dni, alumno.apeYNom, alumno.fechaNac.dia, alumno.fechaNac.mes, alumno.fechaNac.anio, alumno.sexo,
        alumno.fechaIngr.dia, alumno.fechaIngr.mes, alumno.fechaIngr.anio, alumno.cantMateriasAprobadas);
*/
