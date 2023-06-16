/*Programa simples de cadastro em um site. O usuario criará o nome de usuario e senha, e em 
ambos deve ter 5 letras e 3 numeros.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  /*O usuario ira se cadastrar*/

  int contarLetras, contarNumeros;
  char user[9], senha[9], nomeUser[9], senhaUser[9];
  printf("\n Para se cadastrar voce deve criar seu nome de usuario e senha. E em ambos deve ter 5 letras e 3 numeros\n");
  do{
    contarLetras = 0;
    contarNumeros = 0;
    printf("\n Digite seu nome de usuario com 5 letras e 3 numeros: ");
    scanf("%8s", user);
    for(int i = 0; user[i] != '\0'; i++){
      if(isalpha(user[i])){
        contarLetras++;
      }
      else if(isdigit(user[i])){
        contarNumeros++;
      }
    }
    if(contarLetras != 5 || contarNumeros != 3){
      printf("\nNome de usuario invalido! Tente novamente!\n");
    }    
  }while(contarLetras != 5 || contarNumeros != 3);
  do{
    contarLetras = 0; 
    contarNumeros = 0; 
    printf("\nDigite a sua senha de usuario com 5 letras e 3 numeros: ");
    scanf("%8s", senha);
    for(int i = 0; senha[i] != '\0'; i++){
      if(isalpha(senha[i])){
        contarLetras++;
      }
      else if(isdigit(senha[i])){
        contarNumeros++;
    }
  }
      if(contarLetras != 5 || contarNumeros != 3){
        printf("\nSenha invalida! Tente novamente!\n");
      }
  }while(contarLetras != 5 || contarNumeros != 3);
  printf("\nCadastro realizado com sucesso!\n");
  
  /*O usuario fara o login*/

  do{
    printf("\n Digite o seu nome de usuario: ");
    scanf("%8s", nomeUser); 
    if(strcmp(nomeUser, user) != 0){
      printf("\nO nome de usuario esta incorreto!\n");
    }
  }while(strcmp(nomeUser, user) != 0);
  do{
    printf("\n Digite a sua senha: ");
    scanf("%8s", senhaUser);
    if(strcmp(senhaUser, senha) != 0){
      printf("\nA senha esta incorreta\n");
    }
  }while(strcmp(senhaUser, senha) != 0);
  printf("\nLogin realizado com sucesso!");
  return 0;
}

