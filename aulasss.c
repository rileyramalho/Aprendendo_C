#include <stdio.h>

#include <stdlib.h>





void main()

{

     char *nomes[10][10];



     for(int i = 0; i<10; i++)

{

    printf("digite um nome: ");

    scanf(" %s", nomes+i);

}

    for(int i = 0; i<10; i++)

{

    printf("\n %s\n", (nomes[i]));

}



} 