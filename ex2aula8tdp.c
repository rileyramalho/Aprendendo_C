#include <stdio.h>
#include <stdlib.h>

void sort(int *vetor, int tamanho);

int main()
{
 
  int tamanho;
   printf("digie a quantidade de elementos: ");
   scanf("%d", &tamanho);

   int numero[tamanho];

   for(int i = 0; i < tamanho; i++)
   {
       printf("digite o numero da posicao %d: ", i);
       scanf("%d", &numero[i]);
   }

 sort(numero, tamanho);
 for(int i = 0; i < tamanho; i++)
 {
     printf("%d", numero[i]);
 }
} 


void sort(int *vetor, int tamanho){
   for(int i = 0; i < tamanho/2; i++)
   {
     int auxiliar = *(vetor + i);
     *(vetor+i) = *(vetor+tamanho-i-1);
     *(vetor+tamanho-i-1) = auxiliar;
   }
}

