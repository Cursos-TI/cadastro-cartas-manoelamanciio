#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, codigo1[4], cidade1[50];
  int populacao1, pontosTuristicos1;
  float area1, pib1;

  char estado2, codigo2[4], cidade2[50];
  int populacao2, pontosTuristicos2;
  float area2, pib2;
  // Área para entrada de dados
  printf(" === Cadastro de Carta 1 ===\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1);

  printf("Código do estado: ");
  scanf("%3s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%49[^/n]",cidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Area em km2: ");
  scanf("%f", &area1);

  printf("PIB em bilhoes de reais: ");
  scanf("%f", &pib1);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);


  printf(" === Cadastro da Carta 2 === \n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Código do estado: ");
  scanf("%3s", codigo2);

  printf("Nome da Cidade: ");
  scanf("%49[^/n]",cidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Area em km2: ");
  scanf("%f", &area2);

  printf("PIB em bilhoes de reais: ");
  scanf("%f", &pib2);

  printf("Número de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade

    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
} 
