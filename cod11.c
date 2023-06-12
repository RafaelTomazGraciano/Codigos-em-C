/*Desenvolva um algoritmo que leia o nome, a idade e o sexo de várias pessoas.
O programa vai perguntar se o usuário quer ou não continuar. No final, mostre:
a) O nome da pessoa mais velha
b) O nome da pessoa mais jovem
c) A média de idade do grupo
d) Quantos homens tem mais de 30 anos
e) Quantas mulheres tem menos de 18 anos*/

#include <stdio.h>
#include <string.h>

int main()
{
  float media = 0;
  int idade, maisVelho = 0, maisJovem = 100, soma = 0, i = 1, homensMais30 = 0, mulheresMenor18 = 0;
  char nome[20], nomeVelho[20], nomeJovem[20], sexo, resposta = 'S';
  while(resposta == 'S' || resposta == 's'){
    printf("Digite o nome da pessoa: ");
    scanf("%19s", &nome);
    printf("Digite a idade da pessoa: ");
    fflush(stdin); // Limpa o buffer do teclado
    scanf("%d", &idade);
    printf("Digite o sexo da pessoa [M/F]\n");
    fflush(stdin); // Limpa o buffer do teclado
    scanf("%c", &sexo);
    printf("Deseja digitar registrar mais uma pessoa? [S/N]\n");
    fflush(stdin); // Limpa o buffer do teclado
    scanf("%c", &resposta);
    if(idade > maisVelho){
      maisVelho = idade;
      strcpy(nomeVelho, nome);
    }
    if(idade < maisJovem){
      maisJovem = idade;
      strcpy(nomeJovem, nome);
    }
    soma += idade;
    media = soma/i;
    i++;
    if((sexo == 'M' || sexo == 'm') && idade >=30){
      homensMais30++;
    }
    if((sexo == 'F' || sexo == 'f') && idade < 18){
      mulheresMenor18++;
    }
  }
  printf("%s e a pessoa mais velha com %d anos\n", nomeVelho, maisVelho);
  printf("%s e a pessoa mais jovem com %d anos\n", nomeJovem, maisJovem);
  printf("A media da idade deste grupo de pessoas e %.2f\n", media);
  printf("Existem %d homens com mais de 30 anos neste grupo\n", homensMais30);
  printf("Existem %d mulheres com menos de 18 anos neste grupo\n", mulheresMenor18);
  return 0;
}