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
  int tentativas = 1;
  double pontos = 100;
  int ganhou = 0;

  int nivel;
    printf("qual nivel de dificuldade voce quer jogar? \n");
    printf("(1) nivel facil\n (2) nivel medio\n (3) nivel dificil\n\n\n");
    printf("\n\n\nescolha: ");
     scanf("%d", &nivel);

  int numerodetentativas;

   switch(nivel)
  {
      case 1:
           numerodetentativas = 15;
             break;

      case 2:
           numerodetentativas = 10;
             break;

      default:
           numerodetentativas = 5;
             break;          
  }
  
    printf("\n\n\t\t\t\t\t\tjogo de adivinhacao\n\n");


   for(int i = 1; i <= numerodetentativas; i++)
  {
    printf("\ntentativa %d\n", tentativas);
    
    printf("\nqual eh o seu chute? \n");
    scanf("%d", &chute);

    printf("\nseu chute foi: %d\n", chute);

    if (chute < 0)
    {
      printf("voce nao pode chutar numeros negativos!!!!!!\n");
      continue;
    }
     
      ganhou = (chute == numerosecreto);
      int menor = chute < numerosecreto;

    if (ganhou)
    {
      break;
    }

    else if (menor)
    {
      printf("\nvoce errou porque seu chute foi menor que o numero secreto!\n\n\n\n\n");
    }  
    else
    {
      printf("\nvoce errou porque seu numero foi maior que o numero secreto!\n\n\n\n");
    
    }

    tentativas++;

    double pontosperdidos = abs(chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos;
  }
   if(ganhou)
    {
      printf("voce ganhou!\n");
      printf("voce acertou em %d tentativas!\n\n\n\n\n\n", tentativas);
      printf("\ntotal de pontos: %.2f\n\n\n\n", pontos);    
      printf("jogue novamente e mostre seu talento com numeros!!!\n");
  
    }
    else
    {
      printf("\t\t\t\t\t voce errou tente novamente\n\n\n\n\n");
      printf("\n\n\n\n\n\n\n\n\n\n\nvoce desperdicou %d tentativas\n", tentativas);
    }
    
     printf("\t\t\t\t\t\tFIM DE JOGO!\n\n\n");

}