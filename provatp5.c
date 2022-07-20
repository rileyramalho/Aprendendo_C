#include <stdio.h>
#include <string.h>

int main()
{

 char frase[100];

 printf("digite uma frase: ");
 gets (frase);

 printf("a frase tem %d caracteres\n", (int) strlen(frase));

 return 0;

}