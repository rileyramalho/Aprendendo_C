#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{

  int id;
  char nome[30];

} tfuncionario;

void lerdados(tfuncionario *pessoa);

int main()
{

 tfuncionario pessoa[30];

 printf("digite o ID: ");
 scanf("%i", &pessoa[0].id);

 printf("digite o nome: ");
 scanf(" %s", pessoa[0].nome);


 lerdados(&pessoa[1]);
 printf("\nID: %i\nnome: %s\n", pessoa[0].id, pessoa[0].nome);

 printf("\nID: %i\nnome: %s\n", pessoa[1].id, pessoa[1].nome);


return 0;
}

void lerdados(tfuncionario *pessoa)
{

 printf("\ndigite o ID: ");
 scanf("%i", &pessoa -> id);

 printf("digite o nome: ");
 scanf(" %s", &pessoa -> nome);


}