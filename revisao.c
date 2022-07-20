#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct dicionario
{
    
   char letras[26];
   int quantidade[26];

}tdicionario;


void contador(char *palavra);

int main()
{

  char palavra[100];

    printf("\ndigite a palvra: ");
    scanf(" %s", palavra);

       contador(palavra);

}

void contador(char *palavra)
{

  int tamanho = strlen(palavra);

       tdicionario dicionario;

     for(int i = 0; i < 26; i++)
     {   
        dicionario.quantidade[i] = 0;

     }
     
            strcpy(dicionario.letras, "abcdefghijklmnopqrstuvwxyz");
   

   for(int i = 0; i < 26; i++)
   {

      for(int j = 0; j < 26; j++)
      {

        if(dicionario.letras[j] == palavra[i])
        {
 
           dicionario.quantidade[j] += 1;

        }

      }

   }
    
    for(int i = 0; i < 26; i++)
    {

      if(dicionario.quantidade[i] > 0)
      {

         printf("a letra %c apareceu vezes: %i\n", dicionario.letras[i], dicionario.quantidade[i]);

      }

    }

}