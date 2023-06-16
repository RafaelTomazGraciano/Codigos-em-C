/*Crie um programa usando a estrutura "do-while" que leia vários números.
A cada laço, pergunte se o usuário quer continuar ou não. No final, mostre na
tela:
a) O somatório entre todos os valores
b) Qual foi o menor valor digitado
c) Qual foi o maior valor digitado
d) A média entre todos os valores
e) Quantos valores são pares */

#include <stdio.h>
#include <limits.h>

int main()
{
  float media;
  int numero, soma = 0, menor = INT_MAX, maior = 0, par = 0, i = 0;
  char resposta; 
  do{
    printf("Digite o numero: ");
    scanf("%d", &numero);
    printf("Deseja continuar? [S/N]\n");
    scanf(" %c", &resposta); // espaço antes do %c
    getchar (); // consumir o caractere de nova linha
    soma += numero;
    i++;
    media = soma/i;
    if(numero > maior){
      maior = numero;
    }
    if(numero < menor){
      menor = numero;
    }
    if(numero % 2 == 0){
      par++;
    }
  }while(resposta == 'S' || resposta == 's');
  printf("\n A soma dos valores e: %d", soma);
  printf("\n O menor valor digitado e: %d", menor);
  printf("\n O maior valor digitado e : %d", maior);
  printf("\n A media entre os valores e: %.2f", media);
  printf("\n A quantidade de valores pares sao: %d", par);
  return 0;
}