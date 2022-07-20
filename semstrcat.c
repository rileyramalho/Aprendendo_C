#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char palavra[20];
    char palavra2[20];
  
     printf("digite uma palavra: ");
     scanf("%s", palavra);

     printf("digite outra palavra: ");
     scanf("%s", palavra2);

    printf("%s ", palavra);
    printf("%s ", palavra2);

    return 0;
}