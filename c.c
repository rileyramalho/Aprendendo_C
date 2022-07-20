#include<stdio.h>

int main(){
    int distancias[5][5]= {{0,15,30,5,12},{15,0,10,17,28},{30,10,0,3,11},{5,17,3,0,80},{12,28,11,80,0}};
    int tam, acumulador=0;


    printf("Digite quantas cidades foi o percurso:");
    scanf("%d", &tam);
    
    int percurso[tam];

    for(int i=0; i<tam;i++){
        printf("Digite o numero da cidade %d : ",i);
        scanf("%d",&percurso[i]);
    }


    for(int i=0; i<tam-1;i++){
        acumulador += distancias[percurso[i]-1][percurso[i+1]-1];
    }

    printf("A distancia percorrida foi de : %d", acumulador);

}