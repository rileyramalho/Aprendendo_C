#include <stdio.h>
#include <stdlib.h>

int main()
{

char *letra;
char i;

*letra = calloc (10, sizeof(char));

if(letra != NULL)
{

for(i = 0; i < 10; i++)
{

printf("\nletra[%c] = %s", i, *(letra + i));

}

for(i=0; i<10; i++)
{

printf("\nDigite elemento %s do vetor:", i);
scanf("%s", (letra+i));

}

for(i = 0; i<10; i++)
{

printf("\nletra[%c] = %s", i, *(letra + i));

}

}
else

 printf("\nerro");

return 0;
}