#include <stdio.h>



int main() {
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10]={
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 3 , 0 },
        { 0 , 3 , 3 , 3 , 0 , 0 , 0 , 0 , 3 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 },
        { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
    };
    printf("*BATALHA NAVAL*\n\n");
    printf("  %c %c %c %c %c %c %c %c %c %c \n", letras[0],letras[1],letras[2],letras[3],letras[4],letras[5],letras[6],letras[7],letras[8],letras[9]);

    for (int i = 0; i < 10; i++)
    {
        printf("%d",i+1);
        printf(" %d %d %d %d %d %d %d %d %d %d  \n",tabuleiro[i][0], tabuleiro[i][1],tabuleiro[i][2],tabuleiro[i][3],tabuleiro[i][4],tabuleiro[i][5],tabuleiro[i][6],tabuleiro[i][7],tabuleiro[i][8],tabuleiro[i][9]);
    }
    

    return 0;
}
