/*Delgado Ramirez Mariana Fernanda
Ejercicio 4
Calcular cuanto dineri tiene al final del mes*/

#include <stdio.h>


int main(void)
{
    float capital, tasa, monto_final;

    printf("Cantidad a invertir: $");
    scanf("%f", &capital);

    printf("Tasa de interes mensual (%%): ");
    scanf("%f", &tasa);

    monto_final = capital + (capital * tasa / 100);

    printf("Monto al final del mes: $%.2f\n", monto_final);

    return 0;
}
