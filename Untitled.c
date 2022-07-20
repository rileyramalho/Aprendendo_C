#include<stdio.h>

int main()
{
   int matriz[5][5]= {{0, 15, 30, 5, 12}, {15, 0, 10, 17, 28}, {30, 10, 0, 3, 11}, {5, 17, 3, 0, 80}, {12, 28, 11, 80, 0}};
   int contador = 0;
   int quantidade_cid;
   int i;
   

        printf("\n\ndigite a quantidade de cidades que voce passou durante o caminho: ");
        scanf("%i", &quantidade_cid);


   int caminho[quantidade_cid];

  for(i = 0; i < quantidade_cid; i++)
  {
        printf("\ndigite a cidade %d: ", i);
        scanf("%i", &caminho[i]);
  }

  for(i = 0; i < quantidade_cid - 1; i++)
  {
        contador += matriz[caminho[i] - 1] [caminho[i + 1] - 1];
  }
     
        printf("\n\n\n\n\n\n\na distancia percorrida no total foi: %d\n\n\n\n\n", contador);

}