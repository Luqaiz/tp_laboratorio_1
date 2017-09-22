#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#define TAM 20


int main()
{
    char seguir='s';
    int opcion=0;
    EPersona personas[TAM];

    iniciarEstructura(personas,TAM);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system ("cls");
                altaPersona(personas,TAM);
                system ("cls");
                break;
            case 2:
                system("cls");
                bajaPersona(personas,TAM);
                system ("cls");
                break;
            case 3:
                system("cls");
                ordenarPorNombre(personas,TAM);
                mostrarPersonas(personas,TAM);
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                grafico(personas,TAM);
                system("pause");

                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

