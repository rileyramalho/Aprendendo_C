#include<stdio.h>
#include<string.h>

int main()
{
    char c[10];
    char invertida[10];

    scanf("%s", c);
    // strlen() retorna o tamanho da string
    // for soma o j e percorre c invertido
    int j = 0;
    for(int i=strlen(c)-1; i>=0;i--) {
        invertida[j] = c[i];
        j += 1;
    }
    // Finaliza String
    invertida[j] = '\0';

    printf("%s", invertida); 
    return 0;
}