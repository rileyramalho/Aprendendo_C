#include <stdio.h>

typedef struct jogos
{
    
 char nome_do_jogo[50];
 char fornecedor[50];
 char genero;
 float preco;
 int CI;
 int QNE;
 int VouF;

}tipojogos;


 void cadastrarjogos(tipojogos *jogos);

 void alterarjogos(tipojogos *jogos);

 void excluirjogos(tipojogos *jogos);

 void imprimirjogos(tipojogos jogos);


int main()
{
  
  tipojogos jogos[100];

  int opcao;
  int contador;
  int i;

  do
  {
  
  printf("\n**********MENU***********");
  printf("\n1. Cadastrar um novo jogo");
  printf("\n2. Alterar algum jogo");
  printf("\n3. Excluir algum jogo");
  printf("\n4. Mostrar algum jogo");
  printf("\n0. Sair");
  printf("\n*************************");
  
  printf("\nescolha uma opcao: ");
  scanf("%i", &opcao);

   switch (opcao)
   {
   case 1:

       cadastrarjogos(&jogos[contador]);

       contador++;

       break;
   
   case 2:

       alterarjogos(&jogos[contador]);

       break;

   case 3:

       excluirjogos(&jogos[contador]);
       
       break;

   case 4:

       imprimirjogos(jogos[contador]);

       for(i = 0; i < 100; i++)
       {

         if(jogos[i].VouF == 1)
         {

           printf("%i - ", i);
           
           imprimirjogos(jogos[i]);

         }

       }

       break;

   default:

       break;
   
   }
   
     printf("\nDeseja realizar uma nova consulta? ");
     scanf("%i", &opcao);

   } 
   while (opcao == 0);  
  
  return 0;

}

void cadastrarjogos(tipojogos *jogos)
{

  printf("digite o nome do jogo: ");
  scanf(" %s", jogos->nome_do_jogo);
  
  printf("\ndigite o nome do fornecedor: ");
  scanf(" %s", jogos->fornecedor);

  printf("\ndigite o preco do jogo: ");
  scanf("%f", &jogos->preco);

  printf("\ndigite o genero do jogo (m or f): ");
  scanf("%s", &jogos->genero);

  printf("\ndigite a classificacao indicativa: ");
  scanf("%i", &jogos->CI);

  printf("\ndigite a quantidade de unidades deste jogo no estoque: ");
  scanf("%i", &jogos->QNE);
  
  jogos->VouF = 1;

}

void alterarjogos(tipojogos *jogos)
{
  
  printf("digite o nome do jogo: ");
  scanf(" %s", jogos->nome_do_jogo);
  
  printf("\ndigite o nome do fornecedor: ");
  scanf(" %s", jogos->fornecedor);

  printf("\ndigite o preco do jogo: ");
  scanf("%f", &jogos->preco);

  printf("\ndigite o genero do jogo (m or f): ");
  scanf("%s", &jogos->genero);

  printf("\ndigite a classificacao indicativa: ");
  scanf("%i", &jogos->CI);

  printf("\ndigite a quantidade de unidades deste jogo no estoque: ");
  scanf("%i", &jogos->QNE);

  jogos->VouF = 1;
    
}

void excluirjogos(tipojogos *jogos)
{
  
 char option;

  printf("digite o nome do jogo: ");
  scanf(" %s", jogos->nome_do_jogo);
  
  printf("\ndigite o nome do fornecedor: ");
  scanf(" %s", jogos->fornecedor);

  printf("\ndigite o preco do jogo: ");
  scanf("%f", &jogos->preco);

  printf("\ndigite o genero do jogo (m or f): ");
  scanf("%s", &jogos->genero);

  printf("\ndigite a classificacao indicativa: ");
  scanf("%i", &jogos->CI);

  printf("\nvoce quer excluir todas as unidades ou apenas apagar uma unidade (e or a)?  ");
  scanf("%c", &option);

 if(option == 'a')
 {

  printf("\ndigite a quantidade atualizada de unidades deste jogo no estoque: ");
  scanf("%i", &jogos->QNE);
 
 }
 
 else

 {
  
   printf("\no jogo %s foi excluido", jogos->nome_do_jogo);
   printf("0 - JOGO FOI INVALIDADO DO SISTEMA");

 }

}

void imprimirjogos(tipojogos jogos)
{

  printf("\nNome do jogo: %s\nFornecedor: %s\nPreco do jogo: %f\nGenero: %c\nClassificacao Indicativa: %i\nQuantidade de unidades no estoque: %i\n", jogos.nome_do_jogo, jogos.fornecedor, jogos.preco, jogos.genero, jogos.CI, jogos.QNE);

}
