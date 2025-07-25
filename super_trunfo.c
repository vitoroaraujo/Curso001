#include <stdio.h>

int main(){

//DADOS DA CARTA 01
char estado1;
char codigocarta1[5];
char nomecidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

printf("Digite o Estado (A-H): ");
scanf(" %c", &estado1);

printf("Digite o Código da Carta: ");
scanf("%s", &codigocarta1);

printf("Digite o Nome da Cidade: ");
scanf("%s", nomecidade1);

printf("Digite a População: ");
scanf("%d", &populacao1);

printf("Digite a Area em km2: ");
scanf("%f", &area1);

printf("Digite o PIB em bilhões de reais:");
scanf("%f", &pib1);

printf("Digite os Números dos Pontos Turisticos:");
scanf("%d", &pontosturisticos1);

printf("\n");

//DADOS DA CARTA 02
char estado2;
char codigocarta2[5];
char nomecidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

printf("Digite o Estado (A-H): ");
scanf(" %c", &estado2);

printf("Digite o Código da Carta: ");
scanf("%s", &codigocarta2);

printf("Digite o Nome da Cidade: ");
scanf("%s", nomecidade2);

printf("Digite a População: ");
scanf("%d", &populacao2);

printf("Digite a Area em km2: ");
scanf("%f", &area2);

printf("Digite o PIB em bilhões de reais:");
scanf("%f", &pib2);

printf("Digite os Números dos Pontos Turisticos:");
scanf("%d", &pontosturisticos2);

printf("\n");

//EXIBIÇÃO DAS CARTAS CADASTRADAS
printf("--- Cartas Cadastradas ---\n");

printf("Carta 1:\n"); //CARTA 01
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigocarta1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %f km2\n", area1);
printf("PIB: %f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
printf("\n");

printf("Carta 2:\n"); //CARTA 02
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigocarta2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %f km2\n", area2);
printf("PIB: %f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
printf("\n");

return 0;

}
