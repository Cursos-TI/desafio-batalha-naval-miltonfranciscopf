#include <stdio.h>


    // Desafio Batalha Naval - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
    // Siga os comentários para implementar cada parte do desafio.
#define POSICAOX 10
#define POSICAOY 10
//X e Y linha e coluna 

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    
 
    int tabuleiro[POSICAOX][POSICAOY]={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    
    for (int i = 0; i < POSICAOX; i++)
    {
       for (int j = 0; j < POSICAOY; j++)
       {
            if(i==2 && j<4){//posicao navio 1 horizontal
                tabuleiro[i][j]=3; 
            }

            if(i==4 && j>2 && j<7){//posicao navio 2 horizontal
                tabuleiro[i][j]=3; 
            }
            
            if(i==5 && j==8){//posicao navio 3 diagonal
                tabuleiro[i][j]=3;
                tabuleiro[i+1][j-1]=3;
                tabuleiro[i+2][j-2]=3;
                tabuleiro[i+3][j-3]=3;
                
            } 
            if(i==6 && j==0){//posicao navio 4 diagonal
                tabuleiro[i][j]=3;
                tabuleiro[i+1][j+1]=3;
                tabuleiro[i+2][j+2]=3;
                tabuleiro[i+3][j+3]=3;
                
            } 

       }
    }

    //imprimir
    for (int k = 0; k < POSICAOX; k++)
    {
       for (int m = 0;  m< POSICAOY; m++)
       {
            printf("  %d",tabuleiro[k][m]);
       }
        printf("\n");
    }
    
    return 0;
}
