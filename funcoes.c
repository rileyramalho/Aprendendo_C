#include <stdio.h>
#include <stdlib.h>

int quadrado(int numero);
int cubo(int numero);
void mensagem();
float soma(int a, float b);
int x = 0;

int main()
{

    int x = 10;
    printf("%d", x);
    
    //int n1;
    //float n2;
    //float resultado;

    //printf("digite dois numeros para serem somados: ");
    //scanf("%d %f", &n1, &n2);

    //resultado = soma(n1, n2);

    //printf("o valor da soma eh: %f", resultado);

    return 0;

    //int teste2;

    //printf("digite um numero: ");
    //scanf("%i", &teste);

    //printf("digite um numero: ");
    //scanf("%i", &teste2);

    //teste = quadrado(teste);
    //printf("quadrado: %d\n", teste);

    //teste = cubo(teste2);
    //printf("cubo: %d\n", teste2);

    //printf("\no quadrado numero eh: %d\no cubo eh: %d", teste, teste2);
}

int quadrado(int numero)

{

    int resposta = numero * numero;

    return resposta;
}

int cubo(int numero)

{

    int resposta1 = numero * numero * numero;

    return resposta1;
}

void mensagem()
{
    printf("\n\t qualquer coisa");
}

float soma(int a, float b)
{

    float soma;
    soma = a + b;
    return soma;

}