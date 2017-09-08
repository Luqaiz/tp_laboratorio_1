#include <stdio.h>
#include <stdlib.h>

float pedirNumero(char mensaje[])
{
    float numero;

    printf("%s",mensaje);
    scanf("%f",&numero);
    return numero;
}

float suma (float a, float b)
{
    float resultadoSuma;
	resultadoSuma=(a+b);
	return resultadoSuma;
}

float resta (float a, float b)
{
    float resultadoResta;
	resultadoResta=(a-b);
	return resultadoResta;
}

float division (float a, float b)
{
    float resultadoDivision;

    if(b>0)
    {
     resultadoDivision=(a/b);
    }else
    {
        printf("ERROR!! No se puede dividir por 0");
    }
	return resultadoDivision;
}

float multiplicacion (float a, float b)
{
    float resultadoMultiplicacion;
	resultadoMultiplicacion=(a*b);
	return resultadoMultiplicacion;
}

long long int factorial (float a)
{
    long long int resultadoFactorial = 1;
    int i;
        if(a==0)
        {
            printf("\nEl factorial vale 1.\n");
            return 1;
        }
            else if(a<0)
            {
                printf("\nNo se puede calcular el factorial de un numero negativo.\n");
                return 1;
            }
         for (i=a; i>=1; i--)
        {
            resultadoFactorial = resultadoFactorial * i;
        }

        printf (" El resultado del factorial es: %lld\n", resultadoFactorial);

    return resultadoFactorial;

}



