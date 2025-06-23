#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
        // Variávies da primeira carta.
        char Estado1 [30];
        char Cidade1 [30];
        char codigo_da_cidade1 [30];
        float populacao1;
        float area1;
        float Densidade_populacional1;
        float PIB1;
        float PIB_per_capta1 ;
        float numero_de_pontos_turisticos1;
        


        //Variáveis da segunda carta.
        char Estado2 [30];
        char Cidade2 [30];
        char codigo_da_cidade2 [30];
        float populacao2;
        float area2;
        float Densidade_populacional2;
        float PIB2;
        float PIB_per_capta2 ;
        float numero_de_pontos_turisticos2;

        //Outras variaves
        int EscolhaJogadores;
        int Escolha1;
        int Escolha2;
        float Atributo1Cidade1;
        float Atributo1Cidade2;
        float Atributo2Cidade1; 
        float Atributo2Cidade2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

        // Cadastro da primeira carta
        printf ("****Bem vindo ao jogo super trunfo****");
        puts ("");
        printf("***Cadastro da primeira carta***\n");
        printf("Digite o estado: ");
        scanf("%s", Estado1 );

        printf("Digite o nome da cidade: ");
        scanf("%s", Cidade1);
        
        printf("Digite o codigo da cidade: ");
        scanf("%s", codigo_da_cidade1 );

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao1 );
        
        printf("Digite a área da cidade (km2): ");
        scanf("%f", &area1 );
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &PIB1 );   

        printf("Digite o número de pontos turisticos da cidade: ");
        scanf("%f", &numero_de_pontos_turisticos1 );
        puts("");

        // Cadastro da segunda carta

        printf("***Cadastro da segunda carta***\n");
        printf("Digite o estado: ");
        scanf("%s", Estado2 );

        printf("Digite o nome da cidade: ");
        scanf("%s", Cidade2);
        
        printf("Digite o codigo da cidade: ");
        scanf("%s", codigo_da_cidade2 );

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao2 );
        
        printf("Digite a área da cidade (km2): ");
        scanf("%f", &area2 );
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &PIB2 );   

        printf("Digite o número de pontos turisticos da cidade: ");
        scanf("%f", &numero_de_pontos_turisticos2 );

                /*
         Cálculo de Densidade Populacional: População dividida pela área da cidade.
        e
        PIB per Capita: PIB total dividido pela população.
         */ 
        // Cálculos para primeira carta
        Densidade_populacional1 = populacao1 / area1;
        PIB_per_capta1 = PIB1 / populacao1;

        // Cálculos para segunda carta
        Densidade_populacional2 = populacao2 / area2;
        PIB_per_capta2 = PIB2 / populacao2;

    //Mostrando as informações calculadas com a informaçoes de entrada
        puts("");
        printf ("Processando...\n");
        puts("");
        printf ("Foi apurado que:\n");
        printf ("A densidade populacional de %s é: %.2f \n", Cidade1, Densidade_populacional1);
        printf ("O PIB per capta de %s é: %.2f \n", Cidade1, PIB_per_capta1);
        printf ("A densidade populacional de %s é: %.2f \n", Cidade2, Densidade_populacional2);
        printf ("O PIB per capta de %s é: %.2f \n", Cidade2, PIB_per_capta2);
        puts("");

    // Agora vamos jogar
        printf ("Vamos Jogar?\n");
        printf ("Jogadores, escolham sabiamente, qual propriedade vocês querem comparar?\n");
        puts ("");
       
        printf ("1. População\n");
        printf ("2. Área\n");
        printf ("3. Densidade populacional\n");
        printf ("4. PIB\n");
        printf ("5. PIB percapta\n");
        printf ("6. Número de pontos turisticos\n");
        puts ("");

        
        printf ("Digite duas opções para comparar\n");
        printf ("Primeira opção: ");
        scanf ("%d", &Escolha1);
        printf ("Segunda opção: ");
        scanf ("%d", &Escolha2);
        puts ("");
        printf ("Resultado parcial\n");

    // Comparação da opção 1
    switch (Escolha1) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Jogador 1, sua carta ganha no quesito população.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito população.\n");
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Jogador 1, sua carta ganha no quesito área.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito área.\n");
            }
            break;

        case 3:
            if (Densidade_populacional1 > Densidade_populacional2) {
                printf("Jogador 1, sua carta ganha no quesito densidade populacional.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito densidade populacional.\n");
            }
            break;

        case 4:
            if (PIB1 > PIB2) {
                printf("Jogador 1, sua carta ganha no quesito PIB.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito PIB.\n");
            }
            break;

        case 5:
            if (PIB_per_capta1 > PIB_per_capta2) {
                printf("Jogador 1, sua carta ganha no quesito PIB per capta.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito PIB per capta.\n");
            }
            break;

        case 6:
            if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
                printf("Jogador 1, sua carta ganha no quesito numero de ponto turisticos.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito numero de ponto turisticos.\n");
            }
            break;

        default:
            printf("Opção inválida para a primeira escolha.\n");
            break;
    }

    // Comparação da opção 2
    switch (Escolha2) {
        case 1:
            if (populacao1 > populacao2) {
                printf("Jogador 1, sua carta ganha no quesito população.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito população.\n");
            }
            break;

        case 2:
            if (area1 > area2) {
                printf("Jogador 1, sua carta ganha no quesito área.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito área.\n");
            }
            break;

        case 3:
            if (Densidade_populacional1 > Densidade_populacional2) {
                printf("Jogador 1, sua carta ganha no quesito densidade populacional.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito densidade populacional.\n");
            }
            break;

        case 4:
            if (PIB1 > PIB2) {
                printf("Jogador 1, sua carta ganha no quesito PIB.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito PIB.\n");
            }
            break;

        case 5:
            if (PIB_per_capta1 > PIB_per_capta2) {
                printf("Jogador 1, sua carta ganha no quesito PIB per capta.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito PIB per capta.\n");
            }
            break;

        case 6:
            if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
                printf("Jogador 1, sua carta ganha no quesito numero de ponto turisticos.\n");
            } else {
                printf("Jogador 2, sua carta ganha no quesito numero de ponto turisticos.\n");
            }
            break;

        default:
            printf("Opção inválida para a segunda escolha.\n");
            break;
    }


          Atributo1Cidade1 = (Escolha1 == 1) ? populacao1 :
                              (Escolha1 == 2) ? area1 :
                              (Escolha1 == 3) ? Densidade_populacional1 :
                              (Escolha1 == 4) ? PIB1 :
                              (Escolha1 == 5) ? PIB_per_capta1 : numero_de_pontos_turisticos1;

           Atributo1Cidade2 = (Escolha1 == 1) ? populacao2 :
                              (Escolha1 == 2) ? area2 :
                              (Escolha1 == 3) ? Densidade_populacional2 :
                              (Escolha1 == 4) ? PIB2 :
                              (Escolha1 == 5) ? PIB_per_capta2 : numero_de_pontos_turisticos2;

           Atributo2Cidade1 = (Escolha2 == 1) ? populacao1 :
                              (Escolha2 == 2) ? area1 :
                              (Escolha2 == 3) ? Densidade_populacional1 :
                              (Escolha2 == 4) ? PIB1 :
                              (Escolha2 == 5) ? PIB_per_capta1 : numero_de_pontos_turisticos1;

           Atributo2Cidade2 = (Escolha2 == 1) ? populacao2 :
                              (Escolha2 == 2) ? area2 :
                              (Escolha2 == 3) ? Densidade_populacional2 :
                              (Escolha2 == 4) ? PIB2 :
                              (Escolha2 == 5) ? PIB_per_capta2 : numero_de_pontos_turisticos2;

    puts ("");
    printf ("***RESULTADO FINAL\n***");
Atributo1Cidade1 > Atributo1Cidade2 && Atributo2Cidade1 > Atributo2Cidade2 ? printf ("Jogador 1, sua cidade venceu!") : 
Atributo1Cidade1 < Atributo1Cidade2 && Atributo2Cidade1 < Atributo2Cidade2 ? printf ("Jogador 2, sua cidade venceu!") :
Atributo1Cidade1 > Atributo1Cidade2 || Atributo2Cidade1 > Atributo2Cidade2 ? printf ("Cada cidade ganhou em um atributo, o resultado é Empate") : printf ("Os atributos são iguais, O resultado é Empate");
    

/*
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        
    //Tornando o jogo mais amigável
        printf ("Processando...\n");
        puts("");
        printf ("Foi apurado que:\n");

    // Exemplo:
            if (populacao1 > populacao2) {
            printf("%s tem maior população que %s\n", Cidade1, Cidade2);
            } else {
                printf("%s tem maior população que %s\n", Cidade2, Cidade1);
            }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
        puts("");
        printf ("***  RESULTADO DO JOGO  ***\n");
            if (populacao1 > populacao2)
            {
                printf("A cidade vencedora é: %s\n", Cidade1);
            }
                else 
                printf ("A cidade vencedora é: %s\n", Cidade2);
            
    //justificativa da vitória
        if (populacao1 > populacao2)
            {
                printf("Pois %s tem maior população, são %.2f habitantes.\n", Cidade1, populacao1);
            }
                else 
                printf ("Pois %s tem maior população, são %.2f habitantes.\n", Cidade2, populacao2);
*/

   return 0;
}
