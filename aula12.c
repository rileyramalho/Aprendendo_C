#include <stdio.h>

typedef struct pessoa
{
    
 char nome[30];
 int idade;
 float salario;
 int VouF;

} tipopessoa;


void lerPessoa(tipopessoa *pessoa);

void mostrarpessoa(tipopessoa pessoa);

int gravardados(char *caminho, tipopessoa *pessoa);

tipopessoa lerdados(char *caminho);


int main()
{

  tipopessoa pessoa;
  lerPessoa(&pessoa);
  mostrarpessoa(pessoa);

  char nomearquivo[100];
  printf("digite o caminho e o nome do arquivo: ");
  scanf(" %s", &nomearquivo);

  if(gravardados(nomearquivo, &pessoa) == 1)
  {

   printf("dados gravados com sucesso!");

  }

  else

  {

   printf("erros");

  }
   
   printf("\n\ndigite o caminho e o nome do arquivo: ");
   scanf(" %s", &nomearquivo);
   
   tipopessoa pessoadois = lerdados(nomearquivo);
    

    mostrarpessoa(pessoadois);

   
  return 0;

}

void lerPessoa(tipopessoa *pessoa)
{
 
 printf("digite o nome do funcionario: ");
 scanf(" %s", pessoa -> nome);

 printf("digite a idade do funcionario: ");
 scanf("%i", &pessoa -> idade);

 printf("digite o salario do funcionario: ");
 scanf("%f", &pessoa -> salario);

 pessoa -> VouF = 1;
}

void mostrarpessoa(tipopessoa pessoa)
{

  printf("\nnome: %s\nidade: %d\nsalario: %.2f\n", pessoa.nome, pessoa.idade, pessoa.salario);

}

int gravardados(char *caminho, tipopessoa *pessoa)
{

  FILE *pAula;
  pAula = fopen(caminho,"wb");

  if(pAula != NULL)
  {

    if(fwrite(pessoa, sizeof(tipopessoa), 1, pAula) == 1)
    {

      fclose(pAula);
      
      return 1;

    }

   else
   
   {
       fclose(pAula);
       
       return 0;
   }

  }

}

tipopessoa lerdados(char *caminho)
{

  FILE *pAula;
  pAula = fopen(caminho, "rb");
  tipopessoa *pessoa;

  if(pAula != NULL)
  {

    if(fread(pessoa, sizeof(tipopessoa), 1, pAula) == 1)
    {
 
      fclose(pAula);
      
      return *pessoa;

    }

  }
   

    fclose(pAula);
    
    return *pessoa;

}
