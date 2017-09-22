#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

void altaPersona (EPersona lista[], int tam)
{
    EPersona nuevaPersona;
    int lugar;
    int existe;
    int dni;

    lugar = obtenerEspacioLibre(lista,tam);

    if (lugar==-1)
    {
        printf ("ERROR, NO HAY ESPACIO LIBRE");
        getch ();
    }
    else
    {
        printf ("Ingrese el dni: ");
        scanf("%d", &dni);

        existe =  buscarPorDni(lista,dni,tam);

        if (existe != -1)
        {
            printf ("ERROR, Ya existe ésta persona.");
            getch();
        }else
        {
            nuevaPersona.dni=dni;

            printf ("Ingrese un nombre: ");
            fflush(stdin);
            gets (nuevaPersona.nombre);

            printf ("Ingrese una edad: ");
            scanf("%d", &nuevaPersona.edad);
            nuevaPersona.estado = 1;
            lista[lugar]=nuevaPersona;
        }

    }
}

int buscarPorDni(EPersona lista[], int dni,int tam)
{
    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1 && lista[i].dni==dni)
        {
            flag=i;
            break;
        }
    }
    return flag;
}

void estructuraCero (EPersona lista[], int i)
{
    strcpy(lista[i].nombre,"NADA");
    lista[i].estado=0;
    lista[i].dni=0;
    lista[i].edad=0;
}

void iniciarEstructura (EPersona lista[],int tam)
{
    int i ;
    for (i=0; i<tam; i++)
    {
        estructuraCero(lista,i);
    }
}

void bajaPersona (EPersona lista[],int tam)
{
    char respuesta;
    int aux;
    int dni;

    printf("Ingrese dni para dar de baja\n");
    scanf ("%d", &dni);
    aux=buscarPorDni(lista,dni,tam);

    if(aux!=-1)
    {
        mostrarPersona(lista[aux]);
        printf("\nDesea eliminar esta persona: s/n\n");
        fflush(stdin);
        respuesta=getche();
        if(respuesta=='s')
        {
            estructuraCero(lista,aux);
            printf("\nSe ha eliminado esta persona\n");
            system("pause");

        }
        if(respuesta=='n')
        {
            printf("accion cancelada.\n");
            system("pause");
        }
    }
    else
    {
        printf("\nNo se ha encontrado el DNI.");
        system("pause");
    }
}

int obtenerEspacioLibre(EPersona lista[],int tam)
 {

    int i;
    int flag=-1;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==0)
        {
            flag=i;
            break;
        }
    }
    return flag;

}

void mostrarPersona(EPersona lista)
{
   printf("%d\t%s\t%d\n",lista.dni,lista.nombre,lista.edad);
}

void mostrarPersonas (EPersona lista[],int tam)
{

    int i;
    int flag=0;

     printf ("DNI\tNOMBRE\tEDAD\n");
     printf ("-----------------------\n");
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPersona(lista[i]);
            flag=1;
        }

    }
     printf ("-----------------------\n");
    if(flag==0)
    {
        printf("\nNo hay datos cargados en el sistema\n");
    }
}

void ordenarPorNombre (EPersona lista[], int tam)
{
    int i;
    int j;
    EPersona auxPersona;

    for (i=0; i<tam-1;i++)
    {
        for (j=i+1; j<tam;j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxPersona = lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersona;
            }
        }
    }
}

void grafico (EPersona lista[], int tam)
{
    int i;
    int menores18 = 0;
    int mayores18Hasta35= 0;
    int mayores35=0;
    int max;

    for(i=0;i<tam;i++)
    {
        if(lista[i].estado != 0 && lista[i].edad < 18)
        {
            menores18++;
        }
        if(lista[i].estado != 0 && lista[i].edad >= 18 && lista[i].edad <= 35)
        {
            mayores18Hasta35++;
        }
        if(lista[i].estado != 0 && lista[i].edad >35)
        {
            mayores35++;
        }
    }

    if(menores18 > mayores18Hasta35 && menores18 > mayores35)
    {
        max = menores18;
    }
    else if(mayores18Hasta35 > mayores35)
        max = mayores18Hasta35;
    else
        max = mayores35;

    for(i=max;i>0;i--)
    {
       if(i <= menores18)
       {
           printf("  *");
       }

       if(i <= mayores18Hasta35)
       {
           printf("\t  *");
       }
       else
       {
           printf("\t");
       }

       if(i <= mayores35)
       {
           printf("\t *");
       }

       printf("\n");
    }
    printf(" <18 \t18-35\t>35\n");

}


