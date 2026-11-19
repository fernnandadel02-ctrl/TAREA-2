/*Delgado Ramirez Mariana Fernanda
Ejercicio 1
suma, resta y multiplicación*/

#include <stdio.h>

int main(void) 
{
    float num1, num2, suma, resta, multi;

    printf("Inserta el primer numero: ");
    scanf("%f", &num1);

    printf("Inserta el segundo numero: ");
    scanf("%f", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;

    printf("\nSuma = %.2f\n", suma);
    printf("Resta = %.2f\n", resta);
    printf("Multiplicacion = %.2f\n", multi);

    return 0;
}
