/*Delgado Ramirez Mariana Fernanda 
Ejercicio 9
Tabla de multiplicar de un numero entero N*/

#include <stdio.h>
int main(void)

{
   int N, i;
   printf("Ingresa un numero entero:");
   scanf("%d", &N);

   printf("\nTabla del %d:\n", N);

for (i = 1; i <= 10; i++)

{
   printf("%d x %d = %d\n", N, i, N * i);
}

return 0;
}
  
