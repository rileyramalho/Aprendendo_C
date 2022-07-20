#include <stdio.h>
#include <stdlib.h>

float ultimofinal(float produto, float porcentagem)
{

 float valor = porcentagem/100 - produto  ;

 return (valor);

}

int main()
{

    float preco;
    float desconto;
    float resultado;
    
    
    printf("digite o valor do produto: ");
    scanf(" %f", &preco);

    printf("\ndigite a porcentagem de desconto: ");
    scanf(" %f", &desconto);

    resultado = ultimofinal(desconto, preco);

    printf("\no valor final sera: %f ", resultado);
}




