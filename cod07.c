/*Desenvolva um programa que faça o sorteio de 10 números entre 0 e 100 e
mostre na tela:
a) Quais foram os números sorteados
b) Quantos números estão acima de 50
c) Quantos números são divisíveis por 3*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  int i = 0, numeroSorteado, acimaDe50 = 0, divisiveisPor3 = 0;
  srand(time(NULL));
  while(i < 10){
    numeroSorteado = rand()%101;
    printf("%d\n", numeroSorteado);
    if(numeroSorteado > 50){
      acimaDe50++; 
    }
    if(numeroSorteado % 3 == 0){
      divisiveisPor3++;
    }
    i++;
  }
  printf("Estes foram os numeros sorteados! \n");
  printf("Quantidade de numeros acima de 50: %d\n", acimaDe50);
  printf("Quantidade de numeros divisiveis por 3: %d", divisiveisPor3);
  return 0;
}
