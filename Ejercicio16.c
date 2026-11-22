/*Delgado Ramirez Mariana Fernanda 
Ejercicio 16
Almacenar los 100 primeros numeros pares*/ 


#include <stdio.h>

int main(void)
{
    int arreglo[100];
    int i;
    int numero_par = 2;

    for (i = 0; i < 100; i++)
    {
        arreglo[i] = numero_par;
        numero_par = numero_par + 2;
    }

    printf("Los 100 primeros numeros pares son:\n");

    for (i = 0; i < 100; i++)
    {
        printf("%d  ", arreglo[i]);
    }

    printf("\n");

    return 0;
}
