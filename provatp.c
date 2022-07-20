#include <stdio.h>

int main()
{
 char caracteres[201];
 int contador = 0;
 int i;

 for(i = 0; i < 200; i++)
 {
     printf("digite algo: ");
     scanf(" %c", caracteres + i);

     if(caracteres[i] == '0')
     {
         break;
     } 
 }

caracteres[contador - 1] = '\0';

printf("%s", caracteres);

}