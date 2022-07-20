#include <stdio.h>
#include <stdlib.h>

void soma(int vet[], int tam, int *ret);

void main(){
  
   int tamanho, total;
   printf("digite o tamanho do vetor: ");
   scanf("%d", &tamanho);  
   int vetor[tamanho];
   for (int i = 0; i < tamanho; i++)
   {
     printf("digite o valor da posicao %d: ", i);
     scanf("%d", &vetor[i]);
   }
     soma(vetor, tamanho, total);
     printf("o somatorio eh %d: ", total)
 }
void soma(int vet[], int tam, int *ret)
{
  *ret = 0;
  for (int i = 0; i < tam; i++)
  {
      *ret += vet[i];
  }
}

/*void lerDados(int *num, int tamanho)
{
   for (int i = 0; i < tamanho; i++)
   { 
       printf("\ndigite o valor da posicao: %d", i);
       scanf("%d", &num);
       num++;
       }
    

}
void main(){
  
  int TAM = 7;
  int num[TAM];
  lerDados(num);
  for (int i = 0; i < 7; i++)
  {
      printf("posicao %d, valor: %d\n", i, num[i]);
  }

}*/