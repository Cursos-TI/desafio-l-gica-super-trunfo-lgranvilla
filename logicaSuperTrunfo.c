#include <stdio.h>

int main() {

    printf("\n*** DESAFIO LÓGICA SUPER TRUNFO - NÍVEL: NOVATO ***\n");

    // Declaração das variáveis para as duas cartas

    char estado_1, estado_2;  
    char codigo_da_carta_1[20], codigo_da_carta_2[20];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    unsigned long int populacao_1, populacao_2;
    double area_1, area_2;                           // EFETUADO A MUDANÇA DA VARIÁVEL PARA DOUBLE PARA MELHORAR A PRECISÃO DOS CALCULOS NAS BATALHAS
    double pib_1, pib_2;                             // EFETUADO A MUDANÇA DA VARIÁVEL PARA DOUBLE PARA MELHORAR A PRECISÃO DOS CALCULOS NAS BATALHAS
    int pontos_turisticos_1, pontos_turisticos_2;
    double densidade1, perCapita1;                   // EFETUADO A MUDANÇA DA VARIÁVEL PARA DOUBLE PARA MELHORAR A PRECISÃO DOS CALCULOS NAS BATALHAS
    double densidade2, perCapita2;                   // EFETUADO A MUDANÇA DA VARIÁVEL PARA DOUBLE PARA MELHORAR A PRECISÃO DOS CALCULOS NAS BATALHAS
    double superPoder1, superPoder2;                 // EFETUADO A MUDANÇA DA VARIÁVEL PARA DOUBLE PARA MELHORAR A PRECISÃO DOS CALCULOS NAS BATALHAS

    // Entrada de dados para a primeira carta

    printf("\n*** Digite os dados da Carta 1 ***\n");

    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado_1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta_1);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf(" %s", nome_da_cidade_1);

    printf("Digite a população: \n");
    scanf("%lu", &populacao_1);

    printf("Digite a área: \n");
    scanf("%lf", &area_1);          // EFETUADO A TROCA DO ESPECIFICADOR DE ACORDO COM A VARIÁVEL DOUBLE

    printf("Digite o PIB: \n");
    scanf("%lf", &pib_1);           // EFETUADO A TROCA DO ESPECIFICADOR DE ACORDO COM A VARIÁVEL DOUBLE

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_1);

    densidade1 = populacao_1 / area_1;  // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo de Densidade populacional da carta 1
    perCapita1 = pib_1 / populacao_1;   // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo da Renda Per Capta da carta 1

    // Entrada de dados para a segunda carta

    printf("\n*** Digite os dados da Carta 2 ***\n");

    printf("\nDigite a letra do estado: \n");
    scanf(" %c", &estado_2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta_2);

    printf("Digite o nome da cidade (sem espaços): \n");
    scanf(" %49s", nome_da_cidade_2);

    printf("Digite a população: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a área: \n");
    scanf("%lf", &area_2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib_2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos_2);

    densidade2 = populacao_2 / area_2;  // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo de Densidade populacional da carta 2
    perCapita2 = pib_2 / populacao_2;   // Váriavel inicializada com os dados inseridos pelo usuário e aplicado o operador aritimético para calculo da Renda Per Capta da carta 2


    // Cálculo do Super Poder para as cartas
    superPoder1 = (double)populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + perCapita1 + (1.0 / densidade1);
    superPoder2 = (double)populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + perCapita2 + (1.0 / densidade2);

    // Comparação e exibição dos resultados utilizando estruturas de decisão IF - ELSE
    printf("\n Comparação de Cartas: \n");

    printf("População: %lu vs %lu \n", populacao_1, populacao_2); // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (populacao_1 > populacao_2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("Área: %.2lf vs %.2lf \n", area_1, area_2);  // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (area_1 > area_2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("PIB: %.2lf vs %.2lf \n", pib_1, pib_2);  // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (pib_1 > pib_2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("Pontos turísticos: %d vs %d \n", pontos_turisticos_1, pontos_turisticos_2);  // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (pontos_turisticos_1 > pontos_turisticos_2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("Densidade populacional: %.2lf vs %.2lf \n", densidade1, densidade2);  // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (densidade1 < densidade2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("PIB per capita: %.2lf vs %.2lf \n", perCapita1, perCapita2);  // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (perCapita1 > perCapita2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("Super Poder: %.2lf vs %.2lf \n", superPoder1, superPoder2);  // Inserido printf para A IMPRESSÃO do vaLor do atributo.
    if (superPoder1 > superPoder2) {
        printf("Carta 1 (Fortaleza) venceu\n");
    } else {
        printf("Carta 2 (Ceará) venceu\n");
    }

    printf("\n*** Obrigado por Jogar Super Trunfo!!!*** \n");

    return 0;
}

