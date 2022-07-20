#include <stdio.h>

int ganhador(char jogador1, char jogador2)
{

    switch(jogador1){
        case 'f':
          
          if(jogador2 == 't')
          {
              return 2;
          }
           else if(jogador2 == 'p')
          {
              return 1;
          }
           else
          {
              return 0;

               break;
          }

        case 't':

          if(jogador2 == 'f')
         {
             return 1;
         }
          else if (jogador2 == 'p')
         {
             return 2;
         }
          else
         {
             return 0;
             
              break;

}
        case 'p':

         if(jogador2 == 't')
        {
            return 1;
        }
         else if(jogador2 == 'f')
        {
            return 2;
        }
         else
        {
            return 0;

             break;
        }

    }
}

int main()
{

    char jogador1, jogador2;
    int pontos_jog1 = 0, pontos_jog2 = 0;

    do{

        printf("\ndigite a jogada do jogador1: ");
        scanf(" %c", &jogador1);

        printf("\ndigite a jogada do jogador2: ");
        scanf(" %c", &jogador2);

     if(ganhador (jogador1, jogador2) == 1)
        {
            printf("\n\tjogador1 ganhou a rodada\n");

            pontos_jog1++;
        }

     else if(ganhador (jogador1, jogador2) == 2)
        {
            printf("\n\tjogador2 ganhou a rodada\n");

            pontos_jog2++;
        }

     else
        
        {
            printf("\n\n\nempate");
        }

    }while(pontos_jog1 < 2 && pontos_jog2 < 2);

     if(pontos_jog1 > pontos_jog2)
    {
        printf("\no jogador1 ganhou a partida");
    }

     else
    
    {
       printf("\n\n\no jogador2 ganhou a partida");
    }

    }

