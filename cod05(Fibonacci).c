/*Programa da Sequência de Fibonacci*/

#include <stdio.h>

int main()
{
int limite, i, anterior = 0, atual = 1, proximo;
printf("Digite o limete da sequencia de Fibonacci:");
scanf("%d", &limite);
printf("%d \n", anterior);
while(atual <= limite){
  printf("%d \n", atual);
  proximo = anterior + atual;
  anterior = atual;
  atual = proximo;
}
printf("Sequencia de Fibonacci ate %d\n", limite);
return 0;
}