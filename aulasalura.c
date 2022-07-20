#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  
  int tempo = time(0);
  srand(tempo);
  int numerogg = rand();
  int numerosecreto = numerogg %100;
  int chute;
  int numerodetentativas = 5; 
  int ganhou = 0;
  int tentativas = 1;
  double pontos = 100;
  pontos * 2;

    printf("\n\n\t\t\t\t\t\tjogo de adivinhacao\n\n");


  while (1)
  {
    printf("\ntentativa %d\n", tentativas);
    
    printf("\nqual eh o seu chute? ");
    scanf("%d", &chute);

    printf("seu chute foi: %d\n", chute);

    if (chute < 0)
    {
      printf("voce nao pode chutar numeros negativos!!!!!!\n");
      continue;
    }

    else if (chute == numerosecreto)
    {
      printf("voce acertou!\n");
      printf("jogue novamente e mostre seu talento com numeros!!!\n");

      break;
    }

    else if (chute < numerosecreto)
    {
      printf("\nvoce errou porque seu chute foi menor que o numero secreto!\n\n\n\n\n");
      printf("\t\t\t\t\ttente novamente\n");
    }
    else
    {
      printf("\nvoce errou porque seu numero foi maior que o numero secreto!\n\n\n\n");
      printf("\t\t\t\t\ttente novamente\n");
    
    }

    tentativas++;

    double pontosperdidos = abs(chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos;
  }

  printf("voce acertou em %d tentativas!\n\n\n\n\n\n", tentativas);
  printf("\ntotal de pontos: %.2f\n\n\n\n", pontos);
  printf("\t\t\t\t\t\tFIM DE JOGO!\n\n\n");

}