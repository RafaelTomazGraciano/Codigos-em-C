/*Crie um programa no qual o computador vai sortear um número entre 1 e 10 e o jogador vai ter 3
tentativas para tentar acertar.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int numeroSorteado, tentativas = 0, tentativaUser, resposta;
  srand(time(NULL));
  numeroSorteado = rand()%11;
  printf("Este e um jogo para tentar adivinhar o numero entre 0 e 10");
  printf("\n Voce tem 3 tentativas");
  while(tentativas < 3){
    printf("\n Digite um numero: ");
    scanf("%d", &tentativaUser);
    if(numeroSorteado == tentativaUser){
      printf("\n Parabens! Voce acertou!!!");
      printf("\n Tente novamente sempre que quiser");
      return 0;
    }
    if(numeroSorteado != tentativaUser && tentativas < 2){
      printf("\n Voce errou! Este nao era o numero correto.");
      printf("\n Tente novamente");
    }
     if(numeroSorteado != tentativaUser && tentativas == 1){
      printf("\n Esta e sua ultima chance!");
    }
    if(numeroSorteado != tentativaUser && tentativas == 2){
      printf("\n\n Que pena, voce nao conseguiu.");
      printf("\n Tente novamente sempre que quiser!");
    }
    tentativas++;
  }
  return 0;
}