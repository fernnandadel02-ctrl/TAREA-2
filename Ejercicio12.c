/*Delgado Ramirez Mariana FernanDA
Ejercicio 12
Calcular e imprimir el producto de los N primeros numeros naturales*/

#include <stdio.h>

int main(void)
{
    int N;
    int i;
    long producto = 1;

    printf("Ingresa el valor de N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        producto = producto * i;
    }

    printf("El producto es: %ld\n", producto);

    return 0;
}
