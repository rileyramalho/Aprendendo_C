#include <stdio.h>

void main(){ 

    printf("*****************meu primeiro programa em C*********************\n");

    float num1, num2, num3, num4, num5, num6, num7;
    float adicao, subtracao, multiplicacao, divisao;

    printf("digite um numero: ");
    scanf("%f", &num1);
    printf("\ndigite outro numero: ");
    scanf("%f", &num2);
    printf("\ndigite outro numero: ");
    scanf("%f", &num3);
    printf("\ndigite outro numero: ");
    scanf("%f", &num4);
    printf("\ndigite outro numero: ");
    scanf("%f", &num5);
    printf("\ndigite outro numero: ");
    scanf("%f", &num6);
    printf("\ndigite outro numero: ");
    scanf("%f", &num7);

    adicao = num1 + num2 + num3 + num4 + num5 + num6 + num7;

    //subtracao = num1 - num2;

    //multiplicacao = num1 * num2;

    divisao = adicao / 7;

    /*printf("o resultado da adicao eh: %.1f\nda subtracao eh: %.1f\nda multiplicacao eh: %.1f\ne da divisao eh: %.3f\n", adicao, subtracao, multiplicacao, divisao);*/

 printf("\na adicao eh: %.1f e o valor total eh: %.2f", adicao, divisao);



return 0;

}