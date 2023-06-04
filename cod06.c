/*Programa para calcular as caloria de uma alimento*/

#include <stdio.h>

int main()
{
  float carboidratos, lipidios, proteinas, gramas;
  printf("Digite o valor de carboidratos do alimento por 100 gramas: ");
  scanf("%f", &carboidratos);
  printf("Digite o valor dos lipidios do alimento por 100 gramas: ");
  scanf("%f", &lipidios);
  printf("Digite o valor das proteinas do alimento por 100 gramas: ");
  scanf("%f", &proteinas);
  printf("Digite o valor de gramas do alimeto: ");
  scanf("%f", &gramas);
  printf("O valor em calorias do alimento e %.2f", (((carboidratos*4)+(proteinas*4)+(lipidios*9))*gramas)/100);
  return 0;
}