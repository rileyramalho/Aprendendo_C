#include <stdio.h>

typedef struct pessoa
{

  char nome[25];
  int idade;
  int VouF;
  float salario;
  
} tpessoa;

void lerpessoa(tpessoa *p);

void mostrapessoa(tpessoa p);

int main()
{
  tpessoa p;

  lerpessoa(&p);

  mostrapessoa(p);

}

void lerpessoa(tpessoa *p)
{
 
 printf("digite o nome do funcionario: ");
 scanf(" %s", p -> nome);

 printf("\ndigite a idade do funcionario: ");
 scanf("%i", &p -> idade);

 printf("\ndigite o salario do funcionario: ");
 scanf("%f", &p -> salario);

 printf("as informacoes sao validas? (digite 0 para nao e 1 para sim)\n");
 scanf("%i", &p -> VouF);

}

void mostrapessoa(tpessoa p)
{

 printf("\nnome: %s\nidade: %i\nsalario: R$%.2f\ninformacao valida? %i", p.nome,  p.idade, p.salario, p.VouF);

}