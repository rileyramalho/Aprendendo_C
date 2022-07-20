#include <stdio.h>

int main()
{

float PI = 3.14159;
float A, raio, raio2;

printf("digite o valor do raio: ");
scanf("%f", &raio);

raio2 = raio * raio;

A = raio2 * PI;

printf("\nAREA: %.4f", A);

}