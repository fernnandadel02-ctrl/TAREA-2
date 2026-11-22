/*Delgado Ramirez Marian Fernanda
Ejercicio 11
Calcular la suma de todos los numeros pares*/

#include <stdio.h>

int main(void)
{
    int numero;
    int suma = 0;

    for (numero = 10; numero <= 50; numero = numero + 2)
    {
        suma = suma + numero;
    }

    printf("La suma es: %d\n", suma);

    return 0;
}
