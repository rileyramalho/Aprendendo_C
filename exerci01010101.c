#include <stdio.h>
#include <string.h>

int main()
{

 int *numero;
 float *num_flutuante;
 char *letra;


numero = (int *) malloc (sizeof(int));
printf("\ndigite um numero: ");
scanf("%i", numero);

printf("\nendereco %u", numero);
printf("\nINT: valor %d", *numero);

free(numero);


num_flutuante = (float *) malloc (sizeof(float));
printf("\n\ndigite um numero decimal: ");
scanf("%f", num_flutuante);

printf("\nendereco %u", num_flutuante);
printf("\nFLOAT: valor %.1f", *num_flutuante);

free(num_flutuante);


letra = (char *) malloc (sizeof(char));
printf("\n\ndigite uma letra: ");
scanf("%s", letra);

printf("\nendereco %u", letra);
printf("\nCHAR: valor %c", *letra);

free(letra);


return 0;

}
