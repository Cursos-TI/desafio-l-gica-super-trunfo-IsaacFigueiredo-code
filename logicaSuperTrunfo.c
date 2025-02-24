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
    // Variáveis separadas para cada atributo da país e para somas
    char pais[58];
    char pais_2[58];
    unsigned long int populacao, populacao_2;
    float area, area_2;
    float PIB, PIB_2;
    int pontos_turisticos, pontos_turisticos_2;
    float densidade_populacional, densidade_populacional_2;
    float PIB_per_capita, PIB_per_capita_2;
    int escolha;
    int primeiro_atributo;
    float atributoescolhidof_1_carta1;
    float atributoescolhidof_1_carta2;
    float atributoescolhidof_2_carta1;
    float atributoescolhidof_2_carta2;
    float atributoescolhidod_carta1 = 0;
    float atributoescolhidod_carta2 = 0;
    float somatorio_carta1;
    float somatorio_carta2;
    
    // Cadastro das Cartas:
    // Função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada país, como o código, nome, população, área, etc.

    printf ("\nVocê precisa de criar apenas duas cartas para serem comparadas!!\n");
    printf ("\nCarta 1:\n");

    printf("\nInsira o nome do país: \n");
    fgets(pais, 58, stdin);
    printf("\nInsira a população do país: \n");
    scanf("%lu", &populacao);
    printf("\nInsira a área do país em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("\nInsira o PIB do país em R$(reais): \n");
    scanf("%f", &PIB);
    printf("\nInsira o números de pontos turísticos do país: \n");
    scanf("%i", &pontos_turisticos);
    getchar();


    // Exibição dos Dados das Cartas:
    // Função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da país, um por linha.
    printf("País: %s\n", pais);
    printf("A população da pais é de %lu habitante(s)\n", populacao);
    printf("A área do país é de %.2f quilômetro(s) quadrado(s)\n", area);
    printf("O país possui um PIB de %.2f real(is)\n", PIB);
    printf("O país possui %i ponto(s) turístico(s)\n", pontos_turisticos);
    densidade_populacional = calc_Densidade_Populacional(populacao, area);
    printf("A densidade populacional do país é %.2f habitante(s) por quilômetro(s) quadrado(s)\n", densidade_populacional);
    PIB_per_capita = calc_PIB(PIB, populacao);
    printf("O PIB per capita do país é %.2f real(is)\n", PIB_per_capita);


    //Repetição do código para a segunda carta
    printf ("\nCarta 2:\n");

    printf("\nInsira o nome do país: \n");
    fgets(pais_2, 58, stdin);
    printf("\nInsira a população do país: \n");
    scanf("%lu", &populacao_2);
    printf("\nInsira a área do país em quilômetros quadrados: \n");
    scanf("%f", &area_2);
    printf("\nInsira o PIB do país em R$(reais): \n");
    scanf("%f", &PIB_2);
    printf("\nInsira o números de pontos turísticos do país: \n");
    scanf("%i", &pontos_turisticos_2);
    getchar();


    printf("País: %s\n", pais_2);
    printf("A população do país é de %lu habitante(s)\n", populacao_2);
    printf("A área do país é de %.2f quilômetro(s) quadrado(s)\n", area_2);
    printf("O país possui um PIB de %.2f real(is)\n", PIB_2);
    printf("O país possui %i ponto(s) turístico(s)\n", pontos_turisticos_2);
    densidade_populacional_2 = calc_Densidade_Populacional(populacao_2, area_2);
    printf("A densidade populacional do país é %.2f habitante(s) por quilômetro(s) quadrado(s)\n", densidade_populacional_2);
    PIB_per_capita_2 = calc_PIB(PIB_2, populacao_2);
    printf("O PIB per capita do país é %.2f real(is)\n", PIB_per_capita_2);


    printf("\nTodas as cartas do jogo foram adicionadas!\n");
    printf("\nA primeira carta representa o país: %se a segunda carta representa o país: %s", pais, pais_2);

    // Loop buscando os únicos valores possíveis na rodada
    while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5){
        printf("\nEscolha um dos seguintes NÚMEROS para escolher o atributo de comparação de cartas: \n");
        printf("1.População\n2.Área\n3.PIB\n4.Número de pontos turísticos\n5.Densidade demográfica\n");

        // Exibe a leitura, as escolhas possíveis com o switch e o resultado da comparação de valores de propriedades das duas cartas
        scanf ("%i", &escolha);
        switch (escolha) {
            case 1:
                printf("\nA população da primeira carta é %lu e da segunda carta é %lu, ", populacao, populacao_2);
                if (populacao == populacao_2){
                    printf("portanto temos um empate!\n");
                } else{
                    populacao > populacao_2? printf ("portanto a primeira carta vence com maior população!\n"): printf("portanto a segunda carta vence com maior população!\n");
                }
                atributoescolhidof_1_carta1 = (float)populacao;
                atributoescolhidof_1_carta2 = (float)populacao_2;
                primeiro_atributo = escolha;
                break;
            case 2:
                printf("\n A área da primeira carta é cerca de %.2f e da segunda carta é %.2f, ", area, area_2);
                if (area == area_2){
                    printf("portanto temos um empate!\n");
                } else{
                    area > area_2? printf ("portanto a primeira carta vence com maior área!\n"): printf("portanto a segunda carta vence com maior área!\n");
                }
                atributoescolhidof_1_carta1 = area;
                atributoescolhidof_1_carta2 = area_2;
                primeiro_atributo = escolha;
                break;
            case 3:
                printf("\n O PIB da primeira carta é cerca de %.2f e da segunda carta é %.2f, ", PIB, PIB_2);
                if (PIB == PIB_2){
                    printf(" portanto temos um empate!\n");
                } else{
                    PIB > PIB_2? printf ("portanto a primeira carta vence com maior PIB!\n"): printf("portanto a segunda carta vence com maior PIB!\n");
                }
                atributoescolhidof_1_carta1 = PIB;
                atributoescolhidof_1_carta2 = PIB_2;
                primeiro_atributo = escolha;
                break;
            case 4:
                printf("\n A cidade da primeira carta tem %i pontos turísticos e da segunda carta tem %i pontos turísticos, ", pontos_turisticos, pontos_turisticos_2);
                if (pontos_turisticos == pontos_turisticos_2){
                    printf("portanto temos um empate!\n");
                } else{
                    pontos_turisticos > pontos_turisticos_2? printf ("portanto a primeira carta vence com maior número de pontos turísticos!\n"): printf("portanto a segunda carta vence com maior número de pontos turísticos!\n");
                }
                atributoescolhidof_1_carta1 = pontos_turisticos;
                atributoescolhidof_1_carta2 = pontos_turisticos_2;
                primeiro_atributo = escolha;
                break;
            case 5:
                printf("\n A densidade populacional da primeira carta é cerca de %.2f e da segunda carta é %.2f, ", densidade_populacional, densidade_populacional_2);
                if (densidade_populacional == densidade_populacional_2){
                    printf("portanto temos um empate!\n");
                } else{
                    densidade_populacional < densidade_populacional_2? printf ("portanto a primeira carta vence com menor densidade populacional!\n"): printf("portanto a segunda carta vence com menor densidade populacional!\n");
                }
                atributoescolhidod_carta1 = densidade_populacional;
                atributoescolhidod_carta2 = densidade_populacional_2;
                primeiro_atributo = escolha;
                break;
            default:
                printf("Opção inválida!\n");
        }
    }


    while ((escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 5) || escolha == primeiro_atributo){
        printf("\nEscolha um dos seguintes NÚMEROS para escolher o atributo de comparação de cartas: \n");
        if (primeiro_atributo != 1) {
            printf("1.População\n");
        } if (primeiro_atributo != 2) {
            printf("2.Área\n");
        } if (primeiro_atributo != 3) {
            printf("3.PIB\n");
        } if (primeiro_atributo != 4) {
            printf("4.Número de pontos turísticos\n");
        } if (primeiro_atributo != 5) {
            printf("5.Densidade demográfica\n");
        }

        // Exibe a leitura, as escolhas possíveis com o switch e o resultado da comparação de valores de propriedades das duas cartas
        scanf ("%i", &escolha);
        switch (escolha) {
            case 1:
                if (primeiro_atributo != 1){
                    printf("\nA população da primeira carta é %lu e da segunda carta é %lu, ", populacao, populacao_2);
                    if (populacao == populacao_2){
                        printf("portanto temos um empate!\n");
                    } else{
                        populacao > populacao_2? printf ("portanto a primeira carta vence com maior população!\n"): printf("portanto a segunda carta vence com maior população!\n");
                    }
                    atributoescolhidof_2_carta1 = (float)populacao;
                    atributoescolhidof_2_carta2 = (float)populacao_2;
                    break;
                } else {
                    printf("Opção inválida!\n");
                    break;
                }   
            case 2:
                if (primeiro_atributo != 2){

                    printf("\n A área da primeira carta é cerca de %.2f e da segunda carta é %.2f, ", area, area_2);
                    if (area == area_2){
                        printf("portanto temos um empate!\n");
                    } else{
                        area > area_2? printf ("portanto a primeira carta vence com maior área!\n"): printf("portanto a segunda carta vence com maior área!\n");
                    }
                    atributoescolhidof_2_carta1 = area;
                    atributoescolhidof_2_carta2 = area_2;
                    break;
                } else {
                    printf("Opção inválida!\n");
                    break;
                }
            case 3:
                if (primeiro_atributo != 3){
                    printf("\n O PIB da primeira carta é cerca de %.2f e da segunda carta é %.2f, ", PIB, PIB_2);
                    if (PIB == PIB_2){
                        printf(" portanto temos um empate!\n");
                    } else{
                        PIB > PIB_2? printf ("portanto a primeira carta vence com maior PIB!\n"): printf("portanto a segunda carta vence com maior PIB!\n");
                    }
                    atributoescolhidof_2_carta1 = PIB;
                    atributoescolhidof_2_carta2 = PIB_2;
                    break;
                } else {
                    printf("Opção inválida!\n");
                    break;
                }
            case 4:
                if (primeiro_atributo != 4){
                    printf("\n A cidade da primeira carta tem %i pontos turísticos e da segunda carta tem %i pontos turísticos, ", pontos_turisticos, pontos_turisticos_2);
                    if (pontos_turisticos == pontos_turisticos_2){
                        printf("portanto temos um empate!\n");
                    } else{
                        pontos_turisticos > pontos_turisticos_2? printf ("portanto a primeira carta vence com maior número de pontos turísticos!\n"): printf("portanto a segunda carta vence com maior número de pontos turísticos!\n");
                    }
                    atributoescolhidof_2_carta1 = pontos_turisticos;
                    atributoescolhidof_2_carta2 = pontos_turisticos_2;
                    break;
                } else {
                    printf("Opção inválida!\n");
                    break;
                }
            case 5:
                if (primeiro_atributo != 5){
                    printf("\n A densidade populacional da primeira carta é cerca de %.2f e da segunda carta é %.2f, ", densidade_populacional, densidade_populacional_2);
                    if (densidade_populacional == densidade_populacional_2){
                        printf("portanto temos um empate!\n");
                    } else{
                        densidade_populacional < densidade_populacional_2? printf ("portanto a primeira carta vence com menor densidade populacional!\n"): printf("portanto a segunda carta vence com menor densidade populacional!\n");
                    }
                    atributoescolhidod_carta1 = densidade_populacional;
                    atributoescolhidod_carta2 = densidade_populacional_2;
                    break;
                } else {
                    printf("Opção inválida!\n");
                    break;
                }
            default:
                printf("Opção inválida!\n");
        }
    }

    // Variáveis com a soma dos atributos escolhido para as duas cartas, assim como a subtração da possível escolha do atributo de densidade demográfica
    somatorio_carta1 = atributoescolhidof_1_carta1 + atributoescolhidof_2_carta1 - atributoescolhidod_carta1;
    somatorio_carta2 = atributoescolhidof_1_carta2 + atributoescolhidof_2_carta2 - atributoescolhidod_carta2;
    
    // Exibição do resultado de comparação de somas
    printf ("\nO somatório da primeira carta é %.2f e o somatório da segunda carta é %.2f, ", somatorio_carta1, somatorio_carta2);
    if (somatorio_carta1 == somatorio_carta2){
        printf("portanto temos um empate!");
    } else{
        somatorio_carta1 > somatorio_carta2? printf ("portanto a primeira carta vence!\n"): printf("portanto a segunda carta vence!\n");
    }
return 0;
}

