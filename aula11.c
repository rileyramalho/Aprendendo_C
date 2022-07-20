#include <stdio.h>
#include <stdlib.h>

typedef struct pesquisa
{

  int apartamento;
  int filhos;
  float salario;

} PC1;

typedef struct funcionario
{

  int id;
  char nome[30];

} tfuncionario;

void lerdados1(tfuncionario *pessoa);

void lerdados(PC1 *pP1);

int main()
{
 
 tfuncionario pessoa;
 lerdados1(&pessoa);
 PC1 P1;
 lerdados(&P1);

 //P1.apartamento;
 //P1.filhos;
 //P1.salario;
  
  printf("\nid: %i\nnome do funcionario: %s", pessoa.id, pessoa.nome);
  printf("\napartamento: %i\nfilhos: %i", P1.apartamento, P1.filhos);
 

  
return 0;

}

void lerdados1(tfuncionario *pessoa)
{
  
  printf("\ndigite o numero de identificacao do funcionario: ");
  scanf("%i", &id);

  printf("\ndigite o nome do funcionario: ");
  scanf(" %s", &pessoa -> nome);

}

void lerdados(PC1 *pP1)
{

  printf("digite o numero do seu apartamento: ");
  scanf("%i", &pP1 -> apartamento);
  
  printf("digite quantos filhos voce tem: ");
  scanf("%i", &pP1 -> filhos);



}