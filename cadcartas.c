#include <stdio.h>
#include <stdlib.h>

int main() {

    // DADOS DA CARTA 01
    char estado1;
    char codigocarta1[5];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadeDemografica1;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigocarta1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos1);

    densidadeDemografica1 = populacao1 / area1;

    printf("\n");

    // DADOS DA CARTA 02
    char estado2;
    char codigocarta2[5];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadeDemografica2;

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigocarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomecidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    densidadeDemografica2 = populacao2 / area2;

    system("cls");
    
    // Exibicao das cartas cadastradas
    printf("--- Cartas Cadastradas ---\n");

    printf("Carta 1: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Demografica: %.2f hab/km2\n", densidadeDemografica1);
    printf("\n");

    printf("Carta 2: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Demografica: %.2f hab/km2\n", densidadeDemografica2);
    printf("\n");
    
    int opcao;
    
    printf("--- ESCOLHA O ATRIBUTO PARA COMPARAR ---\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("------------------------------------------\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    
    printf("\n--- RESULTADO DA COMPARACAO ---\n");
    
    switch (opcao) {
        case 1: // Comparação por População
            printf("Atributo escolhido: Populacao\n");
            printf("%s (Populacao: %d) vs %s (Populacao: %d)\n", nomecidade1, populacao1, nomecidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 2: // Comparação por Area
            printf("Atributo escolhido: Area\n");
            printf("%s (Area: %.2f) vs %s (Area: %.2f)\n", nomecidade1, area1, nomecidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        case 3: // Comparação por PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s (PIB: %.2f) vs %s (PIB: %.2f)\n", nomecidade1, pib1, nomecidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Comparação por Pontos Turisticos
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s (Pontos Turisticos: %d) vs %s (Pontos Turisticos: %d)\n", nomecidade1, pontosturisticos1, nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Vencedor: %s\n", nomecidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Comparação por Densidade Demografica (Regra Invertida)
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s (Densidade: %.2f) vs %s (Densidade: %.2f)\n", nomecidade1, densidadeDemografica1, nomecidade2, densidadeDemografica2);
            if (densidadeDemografica1 < densidadeDemografica2) { // Menor valor vence
                printf("Vencedor: %s\n", nomecidade1);
            } else if (densidadeDemografica2 < densidadeDemografica1) { // Menor valor vence
                printf("Vencedor: %s\n", nomecidade2);
            } else {
                printf("Empate!\n");
            }
            break;
            
        default:
            printf("Opcao invalida. Por favor, escolha uma opcao de 1 a 5.\n");
            break;
    }

    printf("------------------------------------------\n");

    return 0;
}
