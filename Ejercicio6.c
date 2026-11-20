/*Delgado Ramirez Mariana Fernanda 
Ejercicio 6 */

#include <stdio.h>

int main(void)
{
    float sueldo;
    float aumento;
    float sueldo_final;

    printf("Ingresa el sueldo: $");
    scanf("%f", &sueldo);

    if (sueldo < 1000)
    {
        aumento = sueldo * 0.15;
    }
    else
    {
        aumento = sueldo * 0.12;
    }

    sueldo_final = sueldo + aumento;

    printf("Sueldo final: $%.2f\n", sueldo_final);

    return 0;
}
