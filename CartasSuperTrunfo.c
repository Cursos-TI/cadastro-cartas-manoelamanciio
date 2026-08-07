#include <stdio.h>

int main(void) {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[100], cidade2[100];

    unsigned long int populacao1, populacao2;

    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    int carta1VenceuPopulacao;
    int carta1VenceuArea;
    int carta1VenceuPib;
    int carta1VenceuPontosTuristicos;
    int carta1VenceuDensidade;
    int carta1VenceuPibPerCapita;
    int carta1VenceuSuperPoder;

    /* Entrada dos dados da primeira carta */
    printf("Cadastro da Carta 1\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (por exemplo, A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area em km2: ");
    scanf("%f", &area1);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* Entrada dos dados da segunda carta */
    printf("\nCadastro da Carta 2\n");

    printf("Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (por exemplo, B02): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %99[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area em km2: ");
    scanf("%f", &area2);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /*
     * Cálculo da densidade populacional:
     * população dividida pela área.
     */
    densidadePopulacional1 = (float) populacao1 / area1;
    densidadePopulacional2 = (float) populacao2 / area2;

    /*
     * Cálculo do PIB per capita.
     * Como o PIB foi informado em bilhões de reais,
     * ele é multiplicado por um bilhão antes da divisão.
     */
    pibPerCapita1 =
        (pib1 * 1000000000.0f) / (float) populacao1;

    pibPerCapita2 =
        (pib2 * 1000000000.0f) / (float) populacao2;

    /*
     * Cálculo do Super Poder.
     * O inverso da densidade beneficia cidades menos densas.
     */
    superPoder1 =
        (float) populacao1 +
        area1 +
        pib1 +
        (float) pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidadePopulacional1);

    superPoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        (float) pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidadePopulacional2);

    /*
     * Comparação dos atributos.
     * Uma expressão verdadeira produz 1 e uma falsa produz 0.
     */
    carta1VenceuPopulacao =
        populacao1 > populacao2;

    carta1VenceuArea =
        area1 > area2;

    carta1VenceuPib =
        pib1 > pib2;

    carta1VenceuPontosTuristicos =
        pontosTuristicos1 > pontosTuristicos2;

    /*
     * Na densidade populacional, o menor valor vence.
     */
    carta1VenceuDensidade =
        densidadePopulacional1 < densidadePopulacional2;

    carta1VenceuPibPerCapita =
        pibPerCapita1 > pibPerCapita2;

    carta1VenceuSuperPoder =
        superPoder1 > superPoder2;

    /* Exibição da primeira carta */
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf(
        "Numero de Pontos Turisticos: %d\n",
        pontosTuristicos1
    );
    printf(
        "Densidade Populacional: %.2f hab/km2\n",
        densidadePopulacional1
    );
    printf(
        "PIB per Capita: %.2f reais\n",
        pibPerCapita1
    );
    printf("Super Poder: %.2f\n", superPoder1);

    /* Exibição da segunda carta */
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf(
        "Numero de Pontos Turisticos: %d\n",
        pontosTuristicos2
    );
    printf(
        "Densidade Populacional: %.2f hab/km2\n",
        densidadePopulacional2
    );
    printf(
        "PIB per Capita: %.2f reais\n",
        pibPerCapita2
    );
    printf("Super Poder: %.2f\n", superPoder2);

    /* Exibição dos resultados das comparações */
    printf("\nComparacao de Cartas:\n");

    printf(
        "Populacao: Carta %s venceu (%d)\n",
        carta1VenceuPopulacao ? "1" : "2",
        carta1VenceuPopulacao
    );

    printf(
        "Area: Carta %s venceu (%d)\n",
        carta1VenceuArea ? "1" : "2",
        carta1VenceuArea
    );

    printf(
        "PIB: Carta %s venceu (%d)\n",
        carta1VenceuPib ? "1" : "2",
        carta1VenceuPib
    );

    printf(
        "Pontos Turisticos: Carta %s venceu (%d)\n",
        carta1VenceuPontosTuristicos ? "1" : "2",
        carta1VenceuPontosTuristicos
    );

    printf(
        "Densidade Populacional: Carta %s venceu (%d)\n",
        carta1VenceuDensidade ? "1" : "2",
        carta1VenceuDensidade
    );

    printf(
        "PIB per Capita: Carta %s venceu (%d)\n",
        carta1VenceuPibPerCapita ? "1" : "2",
        carta1VenceuPibPerCapita
    );

    printf(
        "Super Poder: Carta %s venceu (%d)\n",
        carta1VenceuSuperPoder ? "1" : "2",
        carta1VenceuSuperPoder
    );

    return 0;
}