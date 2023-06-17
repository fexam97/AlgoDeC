#include <stdio.h>
#include <stdlib.h>

#define ERROR 1

// voy a crear un vector de estructura de 5 persona y lo voy a meter en un archivo binario

typedef struct{

    char nombre[50];
    int cod;

}t_persona;

int main()
{
    const char nombArch[] = "jurasicPark.dat";

    t_persona personas[] = {{"Sam Neill",362},
                            {"Jesús Brock", 246},
                            {"Ian Malcom", 231},
                            {"Jeff Goldblum", 137},
                            {"Antonio Farré", 271},
                            {"Ellie Satler", 453},
                            {"Laura Dern"}, 464,
                            {"Angelines Santana", 486},
                            {"John Hammond", 128},
                            {"Richard Attenborough", 555},
                            {"Isidro Olace", 486},
                            {"Tim Murphy", 786},
                            {"Joseph Mazzelo", 748},
                            {"Laura Bustamante", 547},
                            {"Lex Murphy", 464},
                            {"Ariana Richards", 784},
                            {"Wendy Elizabeth Torres", 129},
                            {"Donald Genaro", 973},
                            {"Martin Ferrero", 467},
                            {"Roberto Alexander", 463},
                            {"Ray Arnold", 963},
                            {"Samuel L. Jackson", 852},
                            {"José Archimides", 741},
                            {"Dennis Nedry", 159},
                            {"Wayne Knight", 753},
                            {"Leonardo Araujo", 456},
                            {"Mr. A.D.N.", 789},
                            {"Greg Burson", 894},
                            {"Víctor Mares", 739},
                            {"Robert Muldoon", 269},
                            {"Bob Peck", 485},
                            {"Héctor de Alba", 853},
                            {"Juanito Rostagno", 815},
                            {"Miguel Sandoval", 154}};


 /******************  APERTURA  ********************************/

    FILE *pf = fopen(nombArch, "wb");

    if(!pf)
        return ERROR;

    fwrite(&personas, sizeof(personas), 1, pf);

    fclose(pf);

/********************  LECTURA  ********************************/
    pf = fopen(nombArch, "rb");

    fread(&personas, sizeof(personas), 1, pf);

    printf("\nNOMBRE \t\tCODIGO\n");

    while(!(feof(pf)) ){

        printf("\n%s ", personas->nombre);
        printf("\t%d ", personas->cod);
        fread(&personas, sizeof(personas), 1, pf);
    }
    fclose(pf);

    return 0;
}

