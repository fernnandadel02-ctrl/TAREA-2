/*Delgado Ramirez Mariana Fernanda
Ejercicio 14
Determinar cuantas veces se repite ese numero dentro del arreglo*/

#include <stdio.h>

int main(void)
{
    int arreglo[100];
    int n;
    int buscado;
    int i;
    int contador = 0;

    printf("Cuantos elementos tiene el arreglo: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Que numero quieres buscar: ");
    scanf("%d", &buscado);

    for (i = 0; i < n; i++)
    {
        if (arreglo[i] == buscado)
        {
            contador++;
        }
    }

    printf("El numero %d aparece %d veces.\n", buscado, contador);

    return 0;
}
