#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo dele,é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursivoBispo () {

    printf ("Movimentando o Bisbo... \n");
    
    for (int VerticalBispo = 1; VerticalBispo <= 5; VerticalBispo++)
    {
        int HorizontalBispo = 1;
        while (HorizontalBispo <=1)
        {
            printf ("Direita, ");
            HorizontalBispo++;
        }
        printf ("Cima \n");
    }
    
}
void recursivoRainha (int Rainha) {
    if (Rainha > 0)
    {
        printf ("Esquerda\n");
        recursivoRainha (Rainha - 1);
    }
}

void recursivoTorre (int Torre) {
    if (Torre > 0)
    {
        printf ("Direita\n");
        recursivoTorre (Torre - 1);
    }
    
}
    
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int EscolhaJogador;
    int Bispo; // Loop externo direita 5x, Loop interno cima 5x + recursividade
    int Torre; // 5 para direita
    int Rainha; // 8 casas para esquerda
    int Mov1Cavalo = 1;
    int Mov2Cavalo; // um movimento, duas casas para cima e uma para direita

    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf ("Peças disponiveis:\n");
    printf ("1. Bispo\n");
    printf ("2. Torre\n");
    printf ("3. Rainha\n");
    printf ("4. Cavalo\n");
    printf ("Qual peça deseja jogar?\n");
    scanf ("%d", &EscolhaJogador);
    printf ("\n");

    switch (EscolhaJogador)
    {
    case 1:
    
 
    recursivoBispo ();

        break;
      
   
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    case 2:
    
    Torre = 5;
    printf ("Movimentando a Torre... \n");
    recursivoTorre (Torre);

        break;
       

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    case 3:

    Rainha = 8;

    printf ("Movimentando a Rainha... \n");
    recursivoRainha (Rainha);

        break;

        
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     case 4:

     for (Mov1Cavalo = 1, Mov2Cavalo = 1 ; Mov2Cavalo <= 1; Mov2Cavalo++)
     {
         while (Mov1Cavalo <= 4)
         {
            if (Mov1Cavalo == 3) break;;
            {
                printf ("Cima\n");
             Mov1Cavalo++;
            }
                         
         }
 
         printf ("Direita\n");

         break;
 
     }
    default:
    printf ("Opção inválida, Finalizando jogo\n");
        break;

    }      
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
