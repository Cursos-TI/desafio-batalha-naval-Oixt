#include <stdio.h>



int main() {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};  //variantes
    int tabuleiro[10][10];
    int barco = 3;
    int agua = 0;


    printf("    * BATALHA NAVAL *\n\n");
    printf("   %c %c %c %c %c %c %c %c %c %c \n", letras[0],letras[1],letras[2],letras[3],letras[4],letras[5],letras[6],letras[7],letras[8],letras[9]);
//impressao do tabuleiro
    for (int i = 0; i < 10; i++){

        //organizacao na casa decimal
        if (i==9)
        {
            printf("%d ",i+1);
        }else{
            printf("%d  ",i+1);
        }
        
        
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = agua;

            //implementacao dos barcos
            if (i,j == 6,2){
                tabuleiro[6][2] = barco;
                tabuleiro[6][3] = barco;
                tabuleiro[6][4] = barco;

            }
            if (i,j == 3,9){
                tabuleiro[3][9] = barco;
                tabuleiro[4][9] = barco;
                tabuleiro[5][9] = barco;
            }
            
            //impressao do tabuleiro
        
            printf("%d ",tabuleiro[i][j]);
        }
        
       printf("\n");
    }
    

    return 0;
}
