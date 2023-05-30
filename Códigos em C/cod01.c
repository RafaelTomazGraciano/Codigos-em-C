/*Programa para a conversão de valores de Celsius, Fahrenheit e Kelvin*/

#include <stdio.h>

int main()
{
  int codigo;
  float celsius, fahrenheit, kelvin;
  printf("  Codigo                         Coversao         \n");
  printf("     1                    Celsius para Fahrenheit \n");
  printf("     2                    Celsius para Kelvin     \n");
  printf("     3                    Fahrenheit para Celsius \n");
  printf("     4                    Fahrenheit para Kelvin  \n");
  printf("     5                    Kelvin para Celsius     \n");
  printf("     6                    Kelvin para Fahrenheit  \n");
  printf("Digite o codigo referente a opreracao que voce deseja realizar: ");
  scanf("%d", &codigo);
  switch (codigo)
  {
  case 1:
    printf("\n Digite o valor em graus Celsius: ");
    scanf("%f", &celsius);
    printf("A conversao de Celsius para Fahrenheit resultara em %.2f Fahrenheit", 1.8*celsius+32);
    break;
  case 2:
    printf("\n Digite o valor em graus Celsius: ");
    scanf("%f", &celsius);
    printf("A conversao de Celsius para Kelvin resultara em %.2f Kelvin", celsius+273);
    break;
  case 3:
    printf("\n Digite o valor em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("A conversao de Fahrenheit para Celsius resultara em %.2f Celsius", (fahrenheit-32)/1.8);
    break;
    case 4:
    printf("\n Digite o valor em graus Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("A conversao de Fahrenheit para Kelvin resultara em %.2f Kelvin", (fahrenheit-32)*5/9+273.15);
    break;
    case 5:
    printf("\n Digite o valor em graus Kelvin: ");
    scanf("%f", &kelvin);
    printf("A conversao de Kelvin para Celsis resultara em %.2f Celsius", kelvin-273.15);
    break;
    case 6:
    printf("\n Digite o valor em graus Kelvin: ");
    scanf("%f", &kelvin);
    printf("A coversao de Kelvin para Fahrenheit resultara em %.2f Fahrenheit", (kelvin-273.15)*1.8+32);
    break;
  default:
  printf("\n Codigo desconhecido");
    break;
  }
  return 0;
}