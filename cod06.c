/*Programa para calcular as caloria de uma alimento*/

#include <stdio.h>

int main()
{
  float carboidratos, lipidios, proteinas, gramas, porcao;
  printf("Digite o valor de carboidratos: ");
  scanf("%f", &carboidratos);
  printf("Digite o valor dos lipidios: ");
  scanf("%f", &lipidios);
  printf("Digite o valor das proteina: ");
  scanf("%f", &proteinas);
  printf("O valor digitado acima corresponde a uma porcao de quantos gramas? \n");
  scanf("%f", &porcao);
  printf("Digite o valor de gramas total do alimento: ");
  scanf("%f", &gramas);
  printf("O valor em calorias do alimento e %.2f", (((carboidratos*4)+(proteinas*4)+(lipidios*9))*gramas)/porcao);
  return 0;
}