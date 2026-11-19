/*Delgado Ramirez Mariana Fernanda
Ejercicio3
conversión de dolares a pesos*/


#include <stdio.h>

int main(void)
{
  float dolares, pesos;
  const float TASA = 20.11;

  printf("Cantidad en dolar: ");
  scanf("%f", & dolares);

  pesos= dolares * TASA;

  printf("Equivalente en pesos: $%.2f\n", pesos);

return 0;
}
