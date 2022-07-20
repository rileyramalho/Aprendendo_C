#include <stdio.h>
#include <stdlib.h>


int main()
{

float conta, valor_final, porcentagem;
printf("\n\n\n\n\ndigite o valor da conta: ");
scanf("%f", &conta);

porcentagem = 0.1 * conta;
valor_final = porcentagem + conta;

printf("%.2f", valor_final);



}