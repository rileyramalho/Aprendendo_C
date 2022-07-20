#include <stdio.h>

int main()
{

  int *ponteiro;
  int i;

  ponteiro = (int *) calloc (10, sizeof(int));
  
  if(ponteiro != NULL)
  {

    for(i = 0; i < 10; i++)
  {

      printf("\ndigite o elemento %d do vetor: ", i);
      scanf("%d", (ponteiro + i));

  }

      printf("\n-------------------------------");
      printf("\nendereco do ponteiro antes da realocacao");
      printf("\nendereco ponteiro = %u", ponteiro);
      printf("\n-------------------------------");

  ponteiro = (int *) realloc (ponteiro, 15 * sizeof(int));

      printf("\n-------------------------------");
      printf("\nendereco do ponteiro apos da realocacao");
      printf("\nendereco ponteiro = %u", ponteiro);
      printf("\n-------------------------------");


    for(i = 10; i < 15; i++)
    {
  
       printf("\ndigite o valor da posicao %d do vetor: ", i);
       scanf("%i", (ponteiro + i));

    }

    for(i = 10; i < 15; i++)
    {

      printf("\nponteiro[%d] = %d", i, *(ponteiro + i));

    }
        free(ponteiro);
        ponteiro = NULL;
  }

  else
     
       printf("\nErro: not possible");

  //printf("\nendereco %u", ponteiro);
 // printf("\nValor %d", *ponteiro);

  //free (ponteiro);
  
  return 0;


}