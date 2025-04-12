
#include <stdio.h>

int main() {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};  //variantes
    int tabuleiro[10][10];
    int barco = 3;
    int agua = 0;

    printf("    * BATALHA NAVAL *\n\n");
    printf("   %c %c %c %c %c %c %c %c %c %c \n", letras[0],letras[1],letras[2],letras[3],letras[4],letras[5],letras[6],letras[7],letras[8],letras[9]);

    // Inicializa o tabuleiro com água
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = agua;
        }
    }

    // Implementacao dos barcos
    for (int n = 0; n < 3; n++) {
        tabuleiro[6][2 + n] = barco; 
    }
    for (int n = 0; n < 3; n++) {
        tabuleiro[3 + n][9] = barco; 

    }
    for (int n = 0; n < 3; n++) {
        tabuleiro[2 - n][5 + n] = barco; 

    }
    for (int n = 0; n < 3; n++) {
        tabuleiro[0 + n][0 + n] = barco;

    }

    // Imprimindo o tabuleiro com os barcos
    for (int i = 0; i < 10; i++){
        if (i == 9) { //logica para a casa decimal ficar alinhada na impressao
            printf("%d ", i + 1);
    
        } else {
            printf("%d  ", i + 1);
        }
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);

        }
        printf("\n");
    }

    return 0;
}