#include <stdio.h>

int main() {
    char estado1, estado2;
    char cidade1[50], cidade2[50];
    char codigo1[5], codigo2[5];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_pop1, densidade_pop2;
    float pib_per_capta1, pib_per_capta2;
    int num_pontos_turisticos1, num_pontos_turisticos2;

    printf("\nSuper Trunfo - Cadastro de cartas\n");
    printf("---------------------------------\n\n");

    // Pede ao usuário as informações da carta 1
    printf("Carta 1\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bi R$): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos1);

    // Calcula a densidade populacional e o PIB per capta
    densidade_pop1 = populacao1 / area1;
    pib_per_capta1 = (pib1 * 10000000) / populacao2;

    // Mostra na tela as informações da carta 1
    printf("\nInformações da carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos1);
    printf("Densidade populacional: %f hab/km²\n", densidade_pop1);
    printf("PIB per capta: %f reais\n\n", pib_per_capta1);

    // Pede ao usuário as informações da carta 2
    printf("Carta 2\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bi R$): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos2);

    // Calcula a densidade populacional e o PIB per capta
    densidade_pop2 = populacao2 / area2;
    pib_per_capta2 = (pib2 * 10000000) / populacao2;

    // Mostra na tela as informações da carta 2
    printf("\nInformações da carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", num_pontos_turisticos2);
    printf("Densidade populacional: %f hab/km²\n", densidade_pop2);
    printf("PIB per capta: %f reais\n", pib_per_capta2);

    return 0;
}
