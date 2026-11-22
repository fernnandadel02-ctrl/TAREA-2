/*Delgado Ramirez Mariana Fernanda 
Ejercicio 15
Determinar cuantos son negativos, positivos o nulos*/

#include <stdio.h>

int main(void)
{
    int arreglo[100];
    int n;
    int i;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    printf("Cuantos numeros vas a ingresar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        if (arreglo[i] > 0)
        {
            positivos++;
        }
        else if (arreglo[i] < 0)
        {
            negativos++;
        }
        else
        {
            ceros++;
        }
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);

    return 0;
}
