#include <stdio.h>
#include <stdlib.h>

int main(){
    
    /*ex1:
    char caracter[10];
    char *pcaracter = &caracter;

    printf("digite um caracter: ");
    scanf(" %s", pcaracter);

    printf("caracter %s, endereco %u\n", pcaracter, *pcaracter);*/
    
    float numero;
    float *pnumero = &numero;

    printf("digite um float: ");
    scanf("%f", pnumero);

    printf("float %f, endereco %u\n", *pnumero, pnumero);

    pnumero++;

    printf("float %f, endereco %u\n", *pnumero, pnumero);

    //int *ponteiro = NULL;
    //float *ponteiroreal = NULL;

    /*int teste = 10;
    int teste2 = 0;
    const int *const numero= &teste;

    printf("numero: %d", *numero);
    *numero+=2;

    
    //float pi = 3.14;
    
    /*int *ponteironumero = NULL;
    ponteironumero = &numero;
    
    int *ponteironumero2 = NULL;
    ponteironumero2 = &numero;

    system("cls");

     printf("valor da variavel %d, valor do ponteiro %d, memoria %u\n", numero, *ponteironumero, ponteironumero);
     printf("valor da variavel %d, valor do ponteiro %d, memoria %u\n\n", numero, *ponteironumero2,ponteironumero2);

    ponteironumero2+=1;

     printf("valor da variavel %d, valor do ponteiro %d, memoria %u\n", numero, *ponteironumero, ponteironumero);
     printf("valor da variavel %d, valor do ponteiro %d, memoria %u\n\n", numero, *ponteironumero2,ponteironumero2);
    
    ponteironumero2++;

     printf("valor da variavel %d, valor do ponteiro %d, memoria %u\n", numero, *ponteironumero, ponteironumero);
     printf("valor da variavel %d, valor do ponteiro %d, memoria %u\n", numero, *ponteironumero2,ponteironumero2);
    
    /*

    float *ponteiropi = NULL;
    ponteiropi = &pi;

    printf("valor %d, memoria da variavel apontada %x, memoria do ponteiro %x\n", *ponteironumero, ponteironumero, &ponteironumero);
    
    printf("valor %f, memoria da variavel apontada %x, memoria do ponteiro %x\n", *ponteiropi, ponteiropi, &ponteiropi);*/
 

}