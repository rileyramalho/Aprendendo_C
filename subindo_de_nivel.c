#include <stdio.h>

int main(){ 

    printf("*****************meu primeiro programa em C*********************\n");

    float num1, num2;
    float adicao, subtracao, multiplicacao, divisao;

    printf("digite um numero: ");
    scanf("%f", &num1);

    printf("\ndigite outro numero: ");
    scanf("%f", &num2);

    adicao = num1 + num2;

    subtracao = num1 - num2;

    multiplicacao = num1 * num2;

    divisao = num1 / num2;

    printf("o resultado da adicao eh: %.1f\nda subtracao eh: %.1f\nda multiplicacao eh: %.1f\ne da divisao eh: %.3f\n", adicao, subtracao, multiplicacao, divisao);





return 0;

}