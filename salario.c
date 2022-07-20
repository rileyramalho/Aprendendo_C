#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    
    setlocale (LC_ALL, "Portuguese");
    printf("\n\n\n*************CALCULADORA DE SALÁRIO*************");

  int funcionario;
  int HT;
  float SPH;
  float SB;
  float STCD;
  float INSS, DINSS;
  float VT, DVT;
  float IR, DIR;
  float total;
  float VVT, VINSS, VIR;
  int decisao;
  int QHE;
  int VHE;
  int THE;


    printf("\n\n\ndigite o número de identificação do colaborador: ");
    scanf("%i", &funcionario);

    printf("\n\n\ndigite o número de horas trabalhadas pelo colaborador %i durante o mês: ", funcionario);
    scanf("%i", &HT);

    printf("\n\n\ndigite qual o salário por hora do colaborador %i: ", funcionario);
    scanf("%f", &SPH);

    SB = SPH * HT;

    printf("\n\n\no salário bruto do colaborador %i é de: R$%.2f", funcionario, SB);

    
    printf("\n\n\ndigite a porcentagem de desconto do Vale Transporte do salário bruto do colaborador %i: ", funcionario);
    scanf("%f", &VT);

    DVT = VT / 100;
    STCD = SB - (SB * DVT);

    printf("\n\n\no salário do colaborador %i ate o momento com desconto do Vale Transporte é de: R$%.2f", funcionario, STCD);


    printf("\n\n\ndigite a porcentagem de desconto do INSS do salário bruto do colaborador %i: ", funcionario);
    scanf("%f", &INSS);

    DINSS = INSS / 100;
    STCD = STCD - (STCD * DINSS);

    printf("\n\n\no salário do colaborador %i ate o momento com os descontos do VT e do INSS é de: R$%.2f", funcionario, STCD);

    
    printf("\n\n\ndigite a porcentagem de desconto do IR do salário bruto do colaborador %i: ", funcionario);
    scanf("%f", &IR);

    DIR = IR / 100;
    STCD = STCD - (STCD * DIR);

    printf("\n\n\no salário do colaborador %i ate o momento com os descontos do VT, do INSS e do IR é de: R$%.2f", funcionario, STCD);

    
    printf("\n\n\no colaborador %i possui horas extra para serem recebidas? (digite 1 para não e 2 para sim):  ", funcionario);
    scanf("%i", &decisao);

  
  switch(decisao)
  { 
    case 1:

    

    VVT = SB * DVT;
    
    
    
    
    printf("\n\n\npague ao colaborador %i, o salário líquido total de: R$%.2f", funcionario, STCD);
    
    VINSS = STCD * DINSS;
    VIR = STCD * DIR;

    printf("\n --------------------------------------");
    printf("\n|         Salário Bruto     | R$%.2f   |", SB);
    printf("\n --------------------------------------");
    printf("\n|Desconto do Vale Transporte| R$%.2f   |", VVT);
    printf("\n --------------------------------------");
    printf("\n|      Desconto do INSS     | R$%.2f   |", VINSS);
    printf("\n --------------------------------------");
    printf("\n|       Desconto do IR      | R$%.2f   |", VIR);
    printf("\n --------------------------------------");
    printf("\n|       Salário Líquido     | R$%.2f   |", STCD);
    printf("\n --------------------------------------");

    
    printf("\n\n\n\n*******FIM*******\n\n\n\n");
   
   break;

  
    case 2:

     printf("\n\n\ndigite a quantidade de horas extra trabalhadas pelo colaborador %i: ", funcionario);
     scanf("%i", &QHE);
   
     printf("\n\n\ndigite o valor da hora extra por hora: ");
     scanf("%i", &VHE);

     THE = QHE * VHE;
     STCD = THE + STCD;

     printf("\n\n\npague ao colaborador %i, o salário líquido total de: R$%.2f", funcionario, STCD);

    printf("\n --------------------------------------");
    printf("\n|         Salário Bruto     | R$%.2f   |", SB);
    printf("\n --------------------------------------");
    printf("\n|Desconto do Vale Transporte| R$%.2f   |", VVT);
    printf("\n --------------------------------------");
    printf("\n|      Desconto do INSS     | R$%.2f   |", VINSS);
   printf("\n --------------------------------------");
    printf("\n|       Desconto do IR      | R$%.2f   |", VIR);
   printf("\n --------------------------------------");
    printf("\n|      Valor da Hora Extra  | R$%.2d   |", THE);
    printf("\n --------------------------------------");
    printf("\n|       Salário Líquido     | R$%.2f   |", STCD);
    printf("\n --------------------------------------");

     printf("\n\n\n\n*******FIM*******\n\n\n\n");

  break;

  }

 


}
