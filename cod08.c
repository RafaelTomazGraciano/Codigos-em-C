/*Crie um algoritmo que leia a idade de 10 pessoas, mostrando no final:
a) Qual é a média de idade do grupo
b) Quantas pessoas tem mais de 18 anos
c) Quantas pessoas tem menos de 5 anos
d) Qual foi a maior idade lida */

#include <stdio.h>

int main()
{
  int idadePessoas = 0, idade, idadeMaior18 = 0, idadeMenor5 = 0, maiorIdade = 0;
  float  idadeMedia = 0, somaIdade = 0;
  while(idadePessoas < 10){
    printf("\n Digite a idade: ");
    scanf("%d", &idade);
    somaIdade += idade;
    if(idade >= 18){
      idadeMaior18++;
    }
    if(idade < 5){
      idadeMenor5++;
    }
    if(idade > maiorIdade){
      maiorIdade = idade;
    }
    idadePessoas++;
  }
  idadeMedia = somaIdade/10;
  printf("\n A media da idade do grupo e %.2f", idadeMedia);
  printf("\n Quantidade de pessoas com idade maior que 18: %d", idadeMaior18);
  printf("\n Quantidade pessoas idade menor que 5: %d", idadeMenor5);
  printf("\n A maior idade e %d", maiorIdade);
  return 0;
}