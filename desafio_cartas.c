#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Para melhor compreenção, esse código inicial servira como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Acompanhe passo a passo os comentários para melhor implementação cada parte do desafio.
//Teste Enilson

int main() {
    // Sugestão: Defina as variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Variávies da primeira carta.
        char Estado1 [30];
        char Cidade1 [30];
        char codigo_da_cidade1 [30];
        float populacao1;
        float area1;
        float Densidade_populacional1;
        double PIB1;
        double PIB_per_capta1 ;
        int numero_de_pontos_turisticos1;
        

    //Variáveis da segunda carta.
        char Estado2 [30];
        char Cidade2 [30];
        char codigo_da_cidade2 [30];
        float populacao2;
        float area2;
        float Densidade_populacional2;
        double PIB2;
        double PIB_per_capta2 ;
        int numero_de_pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da primeira carta
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
        scanf("%lf", &PIB1 );   

        printf("Digite o número de pontos turisticos da cidade:");
        scanf("%d", &numero_de_pontos_turisticos1 );
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
        scanf("%lf", &PIB2 );   

        printf("Digite o número de pontos turisticos da cidade:");
        scanf("%d", &numero_de_pontos_turisticos2 );
        puts("");
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

    // Mostrar os Dados das Cartas:
    // Sugestão: Utilize a função printf para aparecer na tela, as informações das cartas cadastradas de forma clara e organizada.
    // Mostre os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição da primeira carta
        puts("");
        printf  ("**Primeira Carta**\n");
        printf("O estado é: %s\n", Estado1);
        printf("A cidade é: %s\n", Cidade1);
        printf("O código é: %s\n", codigo_da_cidade1);
        printf("A população é de: %.2f\n", populacao1);
        printf("A área da cidade é de (km2): %.2f\n", area1);
        printf("O PIB da cidade é de: %.2lf\n", PIB1);
        printf("O número de pontos turisticos da cidade é de: %d\n", numero_de_pontos_turisticos1);
        printf("A densidade populacional é de: %.2f\n", Densidade_populacional1);
        printf("O PIB per capta é de  de: %.2lf\n", PIB_per_capta1);

     // Exibição da segunda carta
        puts("");
        printf  ("**Segunda Carta**\n");
        printf("O estado é: %s\n", Estado2);
        printf("A cidade é: %s\n", Cidade2);
        printf("O código é: %s\n", codigo_da_cidade2);
        printf("A população é de: %.2f\n", populacao2);
        printf("A área da cidade é de (km2): %.2f\n", area2);
        printf("O PIB da cidade é de: %.2lf\n", PIB2);
        printf("O número de pontos turisticos da cidade é de: %d\n", numero_de_pontos_turisticos2);
        printf("A densidade populacional é de: %.2f\n", Densidade_populacional2);
        printf("O PIB per capta é de: %.2lf\n", PIB_per_capta2);

    // Somatória das propriedades das cartas
        float PontosTotais1;
        float PontosTotais2;

        PontosTotais1 = populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + PIB_per_capta1;
        PontosTotais2 = populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + PIB_per_capta2;

    //Comparação das propriedades e vizualização
        puts("");
        printf ("*Suas cartas possuem esses dados*\n");
        printf ("A Carta 1 possui %.2lf pontos totais e densidade populacional de %.2lf\n", PontosTotais1, Densidade_populacional1);
        printf ("A Carta 2 possui %.2lf pontos totais e densidade populacional de %.2lf\n", PontosTotais2, Densidade_populacional2);

    // Explicação para o usuário dos resultados
        puts("");
        printf ("Atenção!\n");
        printf ("Se o carta apresentar valor 1 a sentença é verdadeira, caso negativo irá aparecer o valor 0.\n");
        printf  ("Boa sorte!!!\n");

    // Resultados do jogo
        puts("");
        printf ("##____RESULTADO DO JOGO____###\n");
        printf ("A carta de número 1 é vencedora na somatória de pontos: %d\n", PontosTotais1 > PontosTotais2);
        printf ("A carta de número 1 tem o melhor resultado de densidade de demográfica: %d\n", Densidade_populacional1 < Densidade_populacional2);

    
return 0;
}


