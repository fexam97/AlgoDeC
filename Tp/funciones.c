#include "funciones.h"
#include "tipos.h"

long validarDni(int desde, int hasta) {

    long dni;

    do{
        scanf("%li", &dni);
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

    dias.dia = d;
    dias.mes = m;
    dias.anio = a;

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

    return materias;
}

/***********************************************************************/
int ingresarYValidar(const char *nombArch) {

    t_alumno alumno[3];
    int cantAlumnos = 0;
    char nombre[50];
    FILE *pf;
    pf = fopen(nombArch, "wb");


    if(!pf)
        return ERROR;

    printf("\n cantidad de alumnos : %d", sizeof(alumno)/sizeof(alumno[0]));

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

    fwrite(&alumno, sizeof(alumno), 1, pf);

    fclose(pf);

    return 0;
}
/******************************************************************************/
int mostrarArchivo(const char *nombArch) {

    FILE *pm = fopen(nombArch, "rb");

    if(!pm)
        return ERROR;

    t_alumno estructura;

    fread(&estructura, sizeof(estructura), 1, pm);

        printf("\n DNI  \t\t NOMBRE Y APELLIDO \t FECHA DE NACIMIENTO  ");
    while(!feof(pm)) {

        printf("\n%li", estructura.dni);
        printf("\t%s", estructura.apeYNom);
        printf("\t\t\t %d/%d/%d", estructura.fechaNac.dia, estructura.fechaNac.mes, estructura.fechaNac.anio);
        fread(&estructura, sizeof(estructura), 1, pm);
    }

    fclose(pm);

    return 0;
}


/*
    printf("%d  \t  %s  \t %d/%d/%d \t %c \t %d%d%d  \t %d",
        alumno.dni, alumno.apeYNom, alumno.fechaNac.dia, alumno.fechaNac.mes, alumno.fechaNac.anio, alumno.sexo,
        alumno.fechaIngr.dia, alumno.fechaIngr.mes, alumno.fechaIngr.anio, alumno.cantMateriasAprobadas);
*/
