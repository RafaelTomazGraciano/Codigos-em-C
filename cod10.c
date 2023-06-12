/*Desenvolva um programa que leia o salário e o sexo de vários funcionários.
No final, mostre o total de salários pagos aos homens e o total pago às
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
sempre que ler os dados de um funcionário.*/

#include <stdio.h>

int main()
{
  float salario, totalHomens, totalMulheres;
  char sexo, resposta = 'S';
  while(resposta == 'S' || resposta == 's'){
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    fflush(stdin); // Limpa o buffer do teclado
    printf("Digite qual o sexo do funcionario [H/M]\n");
    scanf("%c", &sexo);

    if(sexo == 'H' || sexo == 'h'){
      totalHomens += salario;
    }  
    else if(sexo == 'M' || sexo == 'm'){
      totalMulheres += salario;
    }

    printf("Deseja digitar mais um valor?[S/N] \n");
    fflush(stdin); // Limpa o buffer do teclado
    scanf("%c", &resposta);
  }
  printf("O total do salrio pago aos homens e: %.2f\n", totalHomens);
  printf("O total do salario das melheres e: %.2f\n", totalMulheres);
  return 0;
}