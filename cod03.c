/*Programa para calcular fatorial*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numero, contador, resultado = 1;
  printf("Digite o numero que voce deseja fazer o fatorial:  ");
  scanf("%d", &numero);
  contador == numero;
  for(contador = 1; contador <= numero; contador++){
    resultado *= contador;
  }
  printf("O resultado e %d\n", resultado);
  return 0;
}