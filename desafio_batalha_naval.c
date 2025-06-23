#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[10][10] = {0};

        

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    //Abaixo a colocação dos navios no tabuleiro
    /*
    for (int j = 3; x <= 5; j++)
    {
        tabuleiro[3][x] = 3; 
    }

    for (int i = 5; i <= 7; i++)
    {
        tabuleiro [i][7] = 3;
    }
    
    
    for (int x = 0; x <= 2; x++)
    {
        tabuleiro [x][x]= 3;
    }
    
    for (int i = 6; i <= 8; i++)
    {
        tabuleiro [i][i-4]= 3;
    }
    */

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

    //Abaixo a colocação dos das habilidades no tabuleiro
    //Habilidade do tipo cone
    for (int i = 0; i < 3; i++) {  // O cone tem 3 linhas
        for (int j = 4 - i; j <= 4 + i; j++) {  // Define os limites para formar o cone
            tabuleiro[i][j] = 1;
        }
    }

    //Habilidade do tipo octaedro

    for (int i = 5; i < 6; i++) {  // linha do octaedro
        for (int j = 0; j < 3 ; j++) {  // Define o loop para as colunas
            tabuleiro[i][j] = 1;
        }
    }
    for (int j = 1; j < 2; j++) {  // coluna do octaedro
        for (int i = 4; i < 7 ; i++) {  // Define o loop para as linhas
            tabuleiro[i][j] = 1;
        }
    }

    //Habilidade do tipo cruz

    for (int i = 6; i < 7; i++) {  // linha do octaedro
        for (int j = 4; j < 9 ; j++) {  // Define o loop para as colunas
            tabuleiro[i][j] = 1;
        }
    }
    for (int j = 6; j < 7; j++) {  // coluna do octaedro
        for (int i = 4; i < 9 ; i++) {  // Define o loop para as linhas
            tabuleiro[i][j] = 1;
        }
    }


    printf ("\n");
    printf ("TABULEIRO BATALHA NAVAL \n");
    printf ("\n");

    printf("- ");
    for ( char nomecoluna = 'A'; nomecoluna <= 'J'; nomecoluna++)
    {
        printf ("%c ", nomecoluna);
    }
     printf ("\n");

     for (int y = 0; y < 10; y++)
    {
        printf ("%d ", y + 1);
        
        for (int x = 0; x < 10; x++)
        {
            printf ("%d ", tabuleiro [y][x]);
        }
        printf ("\n");
        
    }
    
    return 0;
}
