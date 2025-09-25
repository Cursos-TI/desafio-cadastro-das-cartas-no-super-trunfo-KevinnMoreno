#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    int cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    int cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Cidade (1-4): ");
    scanf("%d", &cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Cidade (1-4): ");
    scanf("%d", &cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1    = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9f) / populacao1;
    densidade2    = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9f) / populacao2;

    // Exibição das cartas
    printf("\n Espirito Santo - Vitoria \n");
    printf("Codigo: %c0%d\n", estado1, cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n Rio de Janeiro - Duque de Caxias \n");
    printf("Codigo: %c0%d\n", estado2, cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    return 0;
