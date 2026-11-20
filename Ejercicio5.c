/*Delgado Ramirez Mariana Fernanda
Ejercicio 5
Descuento en tienda de electrodomestico*/

#include <stdio.h>

int main(void)
{
    float compra, total;
    const float DESCUENTO = 0.08;

    printf("Total de la compra: $");
    scanf("%f", &compra);

    if (compra > 2500)
    {
        total = compra - (compra * DESCUENTO);
        printf("Se aplico 8%% de descuento.\n");
    }
    else
    {
        total = compra;
    }

    printf("Total a pagar: $%.2f\n", total);

    return 0;
}
