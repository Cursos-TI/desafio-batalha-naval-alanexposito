#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    int tabuleiro [10] [10];
    //variavel para colocar as letras sobre o tabuleiro
    char menu[10] = {'A', 'B', 'C','D','E','F','G','H','I','J'};
    
    //Esse for é para zerar o tabuleiro. Deixando todas as casas com 0
    for (int i = 0; i < 10; i++)
    {
    for (int j = 0; j < 10; j++)
    {
       tabuleiro[i][j] = 0;
    }
    }
    //Abaixo o código da posição para o návio ficar na vertical
    tabuleiro[2][2] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;
    //Abaixo o código da posição para o návio ficar na horizontal
    tabuleiro[1][4] = 3;
    tabuleiro[1][5] = 3;
    tabuleiro[1][6] = 3;
    //Abaixo o código da posição para o návio ficar na digonal
    int linha_diag = 5;
    int coluna_diag = 5;
    for (int k = 0; k < 3; k++)
    {
        tabuleiro [linha_diag + k][coluna_diag + k] = 3;
    }
    //Abaixo o código da posição para o návio ficar na digonal invertida
    int linha_diag2 = 2;
    int coluna_diag2 = 8;
    for (int k = 0; k < 3; k++)
    {
        tabuleiro [linha_diag2 + k][coluna_diag2 - k] = 3;
    }
    

    

   //Esse for é para colocar as letras na parte de cima do tabuleiro. Incluindo um espaço para alinhar
    printf("  ■ ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", menu[j]);
    }
        printf("\n");

    //Esse for é para mostrar o tabuleiro na tela com os números a esquerda.
    printf(" ");
    for (int i = 0; i < 10; i++)
    {
        if (i < 9)
            {
               printf("-");
            }
        //tive que colocar i + 1 para que a numeração possa começar de 1 ao invés de 0.
        printf("%i ", i + 1);
        
        for (int j = 0; j < 10; j++)
        {
            printf("%i ", tabuleiro[i][j]);
        }                                
            
            printf("\n ");
    }

    return 0;
}


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