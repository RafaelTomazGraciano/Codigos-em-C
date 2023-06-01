/*Programa para descobrir um numero primo*/

#include <stdio.h>

int main()
{
  int numero, contador, ePrimo = 1;
  printf("Digite um numero : ");
  scanf("%d", &numero);
  if(numero <= 1){
    ePrimo = 0;
  }
  else{
    for(contador = 2; contador<= numero/2; contador++){
      if(numero%contador == 0){
        ePrimo = 0;
      }
    }
  }
  if(ePrimo == 0){
    printf("O %d nao e um numero primo.", numero);
  }
  else{
    printf("O %d e um numero primo.", numero);
  }
  return 0;
}