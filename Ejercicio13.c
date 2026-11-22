/*Delgado Ramirez Mariana Fernanda
Ejercicio 12
Leer un argumento unidimencional de eneteros*/

#include <stdio.h>

int main(void)
{
    int arreglo[100];
    int n;
    int i;
    int suma = 0;

    printf("Cuantos numeros vas a ingresar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma = suma + arreglo[i];
    }

    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
