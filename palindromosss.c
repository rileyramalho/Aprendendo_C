#include <stdio.h>
#include <string.h>


int palindromo(char palavra[])
{

  char palavra_dois[30];
  char PI[30];
    
  int PP = 0;
  int i;
  int tamanho; 

  tamanho = strlen(palavra);


  for(i = 0; i < strlen(palavra); i++)
  {

    PI[i] = palavra[tamanho - 1];

    tamanho--;
   
  }


   tamanho = strlen(palavra);


  for(i = 0; i < tamanho; i++)
  {
    
    if(palavra[i] == PI[i])
    {
            
       PP++;
    
    }
    
    }

    if(tamanho == PP)
    {
     
        return 1;
    
    }

    else
    {
     
        return 0;
      
    }

}

int main()
{


    char vokabel[20];

     printf("\ndigite uma palavra: ");
     scanf("%s", vokabel);
    
     printf("\n%s", vokabel);

     printf("\n\n%i", palindromo(vokabel));

    
      return 0;

}