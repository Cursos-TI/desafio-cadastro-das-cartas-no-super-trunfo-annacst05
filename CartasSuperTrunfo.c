#include <stdio.h>

int main() {
    // carta 1:
    char estado1 [3];
    char codigoDaCarta1 [100];
    char nomeDaCidade1 [100];
    unsigned long int populacao1;
    double areaEmKm1;
    double pib1;
    int numeroDePontosTuristicos1;
    double densidadePopulacional1;
    double pibPerCapita1;
    double superPoder1;


    printf(" !!!Cadastro de Cartas Super-Trunfo!!! \n");
    printf("CADASTRO 1: \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado1);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta1);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomeDaCidade1);
    printf("Digite o número de população: \n");
    scanf("%lu", &populacao1);
    printf("Digite o número de Area em Km/2: \n");
    scanf("%lf", &areaEmKm1);
    printf("Digite o Número do PIB: \n");
    scanf("%lf", &pib1);
    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos1);

//calculo das novas propriedades
    densidadePopulacional1 = populacao1 / areaEmKm1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + areaEmKm1 + pib1 + pibPerCapita1 + densidadePopulacional1 + numeroDePontosTuristicos1;

// carta 2
    char estado2 [3];
    char codigoDaCarta2 [100];
    char nomeDaCidade2 [100];
    unsigned long int populacao2;
    double areaEmKm2;
    double pib2;
    int numeroDePontosTuristicos2;
    double densidadePopulacional2;
    double pibPerCapita2;
    double superPoder2;

    printf("CADASTRO 2: \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado2);
    printf("Digite o Código da carta: \n");
    scanf("%s", codigoDaCarta2);
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", nomeDaCidade2);
    printf("Digite o número de população: \n");
    scanf("%lu", &populacao2);
    printf("Digite o número de Area em Km/2: \n");
    scanf("%lf", &areaEmKm2);
    printf("Digite o Número do PIB: \n");
    scanf("%lf", &pib2);
    printf("Digite o Número de Pontos turísticos: \n");
    scanf("%d", &numeroDePontosTuristicos2);

//calculo das novas propriedades
    densidadePopulacional2 = populacao2 / areaEmKm2;
    pibPerCapita1 = pib2 / populacao2;
    superPoder1 = populacao2 + areaEmKm2 + pib2 + pibPerCapita2 + densidadePopulacional2 + numeroDePontosTuristicos2;

// informações finais:

    printf("INFORMAÇOES DO CADASTRO DA CARTA 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código da carata: %s \n", codigoDaCarta1);
    printf("Nome da Cidade: %s \n", nomeDaCidade1);
    printf("Populaçao: %lu \n", populacao1);
    printf("Area em km/2: %.2lf \n", areaEmKm1);
    printf("PIB: %.2lf \n", pib1);
    printf("Número de pontos turisticos: %d \n", numeroDePontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional1);
    printf("Pib Per Capita: %.2f \n", pibPerCapita1);
    printf("Super Poder: %.2f \n", superPoder1);

    printf("INFORMAÇOES DO CADASTRO DA CARTA 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código da carata: %s \n", codigoDaCarta2);
    printf("Nome da Cidade: %s \n", nomeDaCidade2);
    printf("Populaçao: %lu \n", populacao2);
    printf("Area em km/2: %.2lf \n", areaEmKm2);
    printf("PIB: %.2lf \n", pib2);
    printf("Número de pontos turisticos: %d \n", numeroDePontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("Pib Per Capita: %.2f \n", pibPerCapita2);
    printf("Super Poder: %.2f \n", superPoder2);

// comparação de cartas
    printf("COMPARAÇOES: \n");
    printf("População: %d \n", (populacao1 > populacao2));
    printf("Area em KM/2: %d \n", (areaEmKm1 > areaEmKm2));
    printf("PIB: %d \n", (pib1 > pib2));
    printf("Numero de pontos turisticos: %d \n", (numeroDePontosTuristicos1 > numeroDePontosTuristicos2));
    printf("Densidade populacional: %d \n", (densidadePopulacional1 < densidadePopulacional2));
    printf("PIB per capita: %d \n", (pibPerCapita1 > pibPerCapita2));
    printf("Super poder: %d \n", (superPoder1 > superPoder2));

    return 0;
}
