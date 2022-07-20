
#include <stdio.h>
#include <stdlib.h>


void main()
{
     char *nomes[3][15];

     for(int i = 0; i<3; i++)
{
    printf("digite um nome: ");
    scanf(" %s", nomes+ i);
}
    for(int i = 0; i<3; i++)
{

     int j = 0;
     
     char *nome = nomes + i;

     do{ 
         j++;
     }while(nome[j]!='\0');
     
     printf("nome: ");
     for(; j>=0; j--)
     {
         printf("%c", nome[j]);
     }
     
     printf("\n");
}

} 