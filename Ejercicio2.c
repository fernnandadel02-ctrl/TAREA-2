/*Delgaado Ramirez Mariana Fernanda
ejercicio 2
Área y circunferencia de un círculo*/

#include <stdio.h>

int main(void) 
{
    const double pi = 3.14159;
    double radio, area, circunferencia;

    printf("Ingresa el radio de tu circunferencia: ");
    scanf("%lf", &radio);

    área = pi * radio * radio;
    circunferencia = 2 * pi * radio;

    printf("\nArea = %.2f\n", area);
    printf("Circunferencia = %.2f\n", circunferencia);

    return 0;
}
