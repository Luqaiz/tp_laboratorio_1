#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir = 's';
    int opcion = 0;
    float num1 = 0;
    float num2 = 0;
    float operacionSuma = 0;
    float operacionResta = 0;
    float operacionDivision = 0;
    float operacionMultiplicacion= 0;
    float sum;
    float res;
    float div;
    float mul;
    int flagNum1=0;
    int flagNum2=0;


    while(seguir=='s')
    {
        if(flagNum1 == 0){
            printf("\n1- Ingresar 1er operando (A=x)\n");
        }
        else{
            printf("\n1- Ingresar 1er operando (A=%.2f)\n", num1);
        }

        if(flagNum2 == 0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else{
            printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1 = pedirNumero("Ingrese el primer numero: ");
                system ("cls");
                flagNum1 = 1;
                break;
            case 2:
                num2 = pedirNumero("Ingrese el segundo numero: ");
                system ("cls");
                flagNum2 = 1;
                break;
            case 3:
                if(flagNum1 == 0 || flagNum2 == 0)
                {
                   printf("\nNo se ingresaron numeros para realizar la operacion.\n");
                }else
                {
                    operacionSuma = suma(num1,num2);
                    printf ("El resultado de la suma es: %2.f\n\n", operacionSuma);
                }
                system ("pause");
                system ("cls");

                break;
            case 4:
                 if(flagNum1 == 0 || flagNum2 == 0)
                {
                   printf("\nNo se ingresaron numeros para realizar la operacion.\n");
                }else
                {
                    operacionResta = resta(num1,num2);
                    printf ("El resultado de la resta es: %2.f\n\n", operacionResta);
                }

                system ("pause");
                system ("cls");
                break;
            case 5:
                 if(flagNum1 == 0 || flagNum2 == 0)
                {
                   printf("\nNo se ingresaron numeros para realizar la operacion.\n");
                }else
                {
                   operacionDivision = division(num1,num2);
                    printf ("El resultado de la division es: %2.f\n\n", operacionDivision);
                }

                system ("pause");
                system ("cls");
                break;
            case 6:
                 if(flagNum1 == 0 || flagNum2 == 0)
                {
                   printf("\nNo se ingresaron numeros para realizar la operacion.\n");
                }else
                {
                    operacionMultiplicacion = multiplicacion(num1,num2);
                    printf ("El resultado de la multiplicacion es: %2.f\n\n", operacionMultiplicacion);
                }

                system ("pause");
                system ("cls");
                break;
            case 7:
                 if(flagNum1 == 0)
                {
                   printf("\nNo se ingreso un numero para realizar la operacion.\n");
                }else
                {
                    factorial(num1);
                }

                system ("pause");
                system ("cls");
                break;
            case 8:
                 if(flagNum1 == 0 || flagNum2 == 0)
                {
                   printf("\nNo se ingresaron numeros para realizar la operacion.\n");
                }else
                {
                    sum = suma(num1,num2);
                    res = resta(num1,num2);
                    div = division(num1,num2);
                    mul = multiplicacion(num1,num2);
                    factorial(num1);
                    printf(" La suma es: %2.f \n La resta es: %2.f \n La division es: %2.f \n La multiplicacion es: %2.f\n",sum,res,div,mul);
                }
                system ("pause");
                system ("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

