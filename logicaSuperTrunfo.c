#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Função de cálculo da densidade populacional
float calc_Densidade_Populacional(int populacao,float area) {
    float d;
    d = populacao / area;
    return d;
}

// Função de cálculo do PIB per capita
float  calc_PIB(float PIB, int populacao) {
    float p;
    p = PIB / populacao;
    return p;
}

int main() {
    // Variáveis separadas para cada atributo da cidade e para somas
    char codigo_estado, codigo_estado_2;
    char codigo_cid[4];
    char codigo_cid_2[4];
    char cidade[58];
    char cidade_2[58];
    unsigned long int populacao, populacao_2;
    float area, area_2;
    float PIB, PIB_2;
    int pontos_turisticos, pontos_turisticos_2;
    float densidade_populacional, densidade_populacional_2;
    float PIB_per_capita, PIB_per_capita_2;
    float somatorio_1;
    float somatorio_2;
    
    // Cadastro das Cartas:
    // Função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf ("\nVocê precisa de criar apenas duas cartas para serem comparadas!!\n");
    printf ("\nCarta 1:\n");

    printf("\nInsira o código do estado (letras de A a H): \n");
    scanf("%c", &codigo_estado);
    printf("\nInsira o código do estado seguido do código da cidade (numeradas de 01 a 04): \n");
    scanf("%s", codigo_cid);
    getchar();
    printf("\nInsira o nome da cidade: \n");
    fgets(cidade, 58, stdin);
    printf("\nInsira a população da cidade: \n");
    scanf("%lu", &populacao);
    printf("\nInsira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("\nInsira o PIB da cidade em R$(reais): \n");
    scanf("%f", &PIB);
    printf("\nInsira o números de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos);
    getchar();


    // Exibição dos Dados das Cartas:
    // Função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nO código da carta é %s\n", codigo_cid);
    printf("Cidade: %s\n", cidade);
    printf("A população da cidade é de %lu habitante(s)\n", populacao);
    printf("A área da cidade é de %.2f quilômetro(s) quadrado(s)\n", area);
    printf("A cidade possui um PIB de %.2f real(is)\n", PIB);
    printf("A cidade possui %i ponto(s) turístico(s)\n", pontos_turisticos);
    densidade_populacional = calc_Densidade_Populacional(populacao, area);
    printf("A densidade população da cidade é %.2f habitante(s) por quilômetro(s) quadrado(s)\n", densidade_populacional);
    PIB_per_capita = calc_PIB(PIB, populacao);
    printf("O PIB per capita da cidade é %.2f real(is)\n", PIB_per_capita);


    //Repetição do código para a segunda carta
    printf ("\nCarta 2:\n");

    printf("\nInsira o código do estado (letras de A a H): \n");
    scanf("%c", &codigo_estado_2);
    printf("\nInsira o código do estado seguido do código da cidade (numeradas de 01 a 04): \n");
    scanf("%s", codigo_cid_2);
    getchar();
    printf("\nInsira o nome da cidade: \n");
    fgets(cidade_2, 58, stdin);
    printf("\nInsira a população da cidade: \n");
    scanf("%lu", &populacao_2);
    printf("\nInsira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_2);
    printf("\nInsira o PIB da cidade em R$(reais): \n");
    scanf("%f", &PIB_2);
    printf("\nInsira o números de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos_2);


    printf("\nO código da carta é %s\n", codigo_cid_2);
    printf("Cidade: %s\n", cidade_2);
    printf("A população da cidade é de %lu habitante(s)\n", populacao_2);
    printf("A área da cidade é de %.2f quilômetro(s) quadrado(s)\n", area_2);
    printf("A cidade possui um PIB de %.2f real(is)\n", PIB_2);
    printf("A cidade possui %i ponto(s) turístico(s)\n", pontos_turisticos_2);
    densidade_populacional_2 = calc_Densidade_Populacional(populacao_2, area_2);
    printf("A densidade população da cidade é %.2f habitante(s) por quilômetro(s) quadrado(s)\n", densidade_populacional_2);
    PIB_per_capita_2 = calc_PIB(PIB_2, populacao_2);
    printf("O PIB per capita da cidade é %.2f real(is)\n", PIB_per_capita_2);

    // Soma das variáveis de Super-Poder das duas cartas
    somatorio_1 = (float)populacao+area+PIB+(float)pontos_turisticos+PIB_per_capita-densidade_populacional;
    somatorio_2 = (float)populacao_2+area_2+PIB_2+(float)pontos_turisticos_2+PIB_per_capita_2-densidade_populacional_2;

    printf("\nTodas as cartas do jogo foram adicionadas!\n");

    // Exibe comparação de valores de propriedades das duas cartas
    printf("\nA população da primeira carta é %lu e da segunda carta é %lu, ", populacao, populacao_2);
    if (populacao == populacao_2){
        printf("portanto temos um empate!");
    } else{
        populacao > populacao_2? printf ("portanto a primeira carta vence com maior população!"): printf("portanto a segunda carta vence com maior população!");
    }
return 0;
}

