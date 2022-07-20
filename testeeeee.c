#include <stdio.h>

int main(){
    
    int matriz[9][3];
    for ( int i=0; i<9; i++ ){
        for ( int j=0; j<6; j++ ){
            if(i % 2 == 0)
                matriz[i][j] = -1;
            else
                matriz [i][j] = 0;
            printf(" %d", matriz [i][j]);
            
            if(matriz[i][j] == -1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}