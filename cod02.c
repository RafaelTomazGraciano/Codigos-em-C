/*Programa onde o usuário digita dois numeros e o programa faz a contagem, o usuário 
também pode escolher o valor do incremento entre os numeros*/

#include <stdio.h>

int main()
{
  float valorInicial, valorFinal, incremento, i;
  printf("Digite o valor do valor inicial: ");
  scanf("%f", &valorInicial);
  printf("Digite o valor do valor final: ");
  scanf("%f", &valorFinal);
  printf("Digite o valor do incremento: ");
  scanf("%f", &incremento);
  i = valorInicial;
  if(valorInicial < valorFinal){
    printf(" O valor inicial e menor que o valor final. Portanto a contagem sera crescente!\n");
   
  }  
  while(i <= valorFinal && incremento > 0){
    printf("%.2f \n", i);
    i += incremento;
    }
  if(valorFinal < valorInicial){
    printf(" O valor final e menor que o valor final. Portanto a contagem sera decrescente!\n");
  }
  while(i >= valorFinal && incremento > 0){
    printf("%.2f \n", i);
    i -= incremento;
  }
  return 0;
}