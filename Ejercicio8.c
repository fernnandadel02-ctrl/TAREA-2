/*Delgado Ramirez Mariana Fernanda
Ejercicio 8
Determinar si un numero es divisor de otro*/

#include <stdio.h>

int main(void)
{
    int num1, num2, residuo;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &num2);

    if (num2 == 0)
    {
        printf("No se puede dividir entre cero.\n");
    }
    else
    {
        residuo = num1 % num2;

        if (residuo == 0)
        {
            printf("%d es divisor de %d\n", num2, num1);
        }
        else
        {
            printf("%d NO es divisor de %d\n", num2, num1);
        }
    }

    return 0;
}
