/*Delgaado Ramirez Mariana Fernanda
ejercicio 2
Área y circunferencia de un círculo*/

#include <stdio.h>

int main(void) {
    float pi = 3.14159;
    float radio;
    float area;
    float circunferencia;

    printf("Inserta el radio de tu circunferencia: ");
    scanf("%f", &radio);

    area = pi * radio * radio;
    circunferencia = 2 * pi * radio;

    printf("\nArea = %.2f\n", area);
    printf("Circunferencia = %.2f\n", circunferencia);

    return 0;
}
