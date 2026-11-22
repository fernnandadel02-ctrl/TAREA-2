/*Delgado Ramirez Marian Fernanda
Ejercicio 9
100 numeros naturales*/

#include <stdio.h>

int main(void)
{
    int contador;
    int numero;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;

    for (contador = 1; contador <= 100; contador++)
    {
        printf("Numero %d: ", contador);
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivos++;
        }
        else if (numero < 0)
        {
            negativos++;
        }
        else
        {
            ceros++;
        }5
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Ceros: %d\n", ceros);

    return 0;
}
