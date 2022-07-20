#include <stdio.h>

int main()
{

 int numero_a;
 int numero_b;
 int numero_c;
 int numero_d;

 int multi_um;
 int multi_dois;

 int total;

  printf("\n\ndigite um numero: ");
  scanf("%i", &numero_a);

  printf("\n\ndigite um numero: ");
  scanf("%i", &numero_b);

  printf("\n\ndigite um numero: ");
  scanf("%i", &numero_c);

  printf("\n\n\digite um numero: ");
  scanf("%i", &numero_d);


  multi_um = numero_a * numero_b;

  multi_dois = numero_c * numero_d;

  printf("\n\n\t\t\t\t\t%i e %i", multi_um, multi_dois);


  total = multi_um - multi_dois;

  
  printf("\n\n\t\t\t\t\tdiferenca: %i", total);



}