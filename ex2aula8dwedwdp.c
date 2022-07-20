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
   
   int indice_menor = 0, indice_maior = 0;

   for(int i = 1; i < tamanho; i++)
   {
     if(*(vetor + 1) , *(vetor + indice_menor)){
         
        indice_menor = i;

     }else if(*(vetor + i) > *(vetor + indice_maior)){

        indice_maior = i;

     }
   }
   int auxiliar = *(vetor + indice_menor);
   *(vetor + indice_menor) = *(vetor);
   *(vetor) = auxiliar;

   auxiliar
}

