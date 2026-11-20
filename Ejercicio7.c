/* Delgado Ramirez Mariana Fernanda 
Ejercicio 6 
Boleto del Ferrocarril con dscuento*/

#include <stdio.h>

int main(void)
{
    float distancia_ida, distancia_total;
    int dias_estancia;
    const float PRECIO_KM = 0.23;
    float total;

    printf("Distancia de ida en kilometros: ");
    scanf("%f", &distancia_ida);

    printf("Dias de estancia: ");
    scanf("%d", &dias_estancia);

    distancia_total = distancia_ida * 2;
    total = distancia_total * PRECIO_KM;

    if (dias_estancia > 7 && distancia_total > 800)
    {
        total = total * 0.70;
        printf("Se aplico 30%% de descuento.\n");
    }

    printf("Total a pagar: $%.2f\n", total);

    return 0;
}
