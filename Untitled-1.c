#include <stdio.h>

int main()
{
  
  int numero1;
  int numero2;
  int soma;
  int subtracao;
  int multiplicacao;
  int divisao;
  char operador;

  soma = numero1 + numero2;
  subtracao = numero1 - numero2;
  multiplicacao = numero1 * numero2;
  divisao = numero1 / numero2;

  printf("\ndigite um numero: ");
  scanf("%i", &numero1);

  printf("\ndigite um numero: ");
  scanf("%i", &numero2);

  printf("\ndigite um operador logico: ");
  scanf(" %c", &operador);

  if(operador == '+')
  {

    printf("o total foi: %i ", soma);

  }

  else if(operador == '*')
  {

    printf("o total foi: %i", multiplicacao);

  }

    else if(operador == '/')
  {

    printf("o total foi: %i", divisao);

  }

    else if(operador == '-')
  {

    printf("o total foi: %i", subtracao);

  }
  
  else
  {

    printf("ERROR");

  }

 
  return 0;

}