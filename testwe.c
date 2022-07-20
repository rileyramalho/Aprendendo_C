#include <stdio.h>
#include <stdlib.h>

int copia(char string1[], char string2[]);

int main()
{

int i;
char string1[15], string2[15];

scanf(" %s", string1);

scanf(" %s", string2);

copia(string1, string2);

printf(" confirmando o metodo:\n string duplicada: %s\n string original: %s\n", string1, string2);

}

int copia(char string1[], char string2[])
{

 for(int i = 0; i < 15; i++)

 {

  string1[i] = string2[i];

 }

}