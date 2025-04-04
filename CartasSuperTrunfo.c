#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    // Carta 01
    printf("CARTA 1\n");
    // ESTADO
    printf("Digite o Estado: ");
    char estadoUm = getchar();

    // CÓDIGO DA CARTA
    printf("Digite o código da carta: ");
    char codeUm[3];
    scanf("%s", &codeUm);

    // Limpando o buffer
    getchar();

    // NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    char cidadeUm[30];
    gets(cidadeUm);

    // POPULAÇÃO
    printf("Digite a População: ");
    int populacaoUm;
    scanf("%d", &populacaoUm);

    // ÁREA
    printf("Digite a Área (em km²): ");
    double areaUm;
    scanf("%lf", &areaUm);

    // PIB
    printf("Digite o PIB: ");
    double pibUm;
    scanf("%lf", &pibUm);

    getchar();

    // Número de Pontos Turísticos
    printf("Digite o Número de Pontos Turísticos: ");
    int pontosTuristicosUm;
    scanf("%d", &pontosTuristicosUm);

    // Calculando a Densidade Populacional da carta 01
    double densidadePopulacionalUm = populacaoUm / areaUm;

    // calculando o PIB per capita da carta 01
    double pibPerCapitaUm = (pibUm * 1000000000) / populacaoUm;


    printf("=========================================\n");

    // Limpando buffer
    getchar();

    // Carta 02
    printf("CARTA 2\n");
    // ESTADO
    printf("Digite o Estado: ");
    char estadoDois = getchar();

    // CÓDIGO DA CARTA
    printf("Digite o código da carta: ");
    char codeDois[3];
    scanf("%s", &codeDois);

    // Limpando o buffer
    getchar();

    // NOME DA CIDADE
    printf("Digite o nome da cidade: ");
    char cidadeDois[30];
    gets(cidadeDois);

    // POPULAÇÃO
    printf("Digite a População: ");
    int populacaoDois;
    scanf("%d", &populacaoDois);

    // ÁREA
    printf("Digite a Área (em km²): ");
    double areaDois;
    scanf("%lf", &areaDois);

    // PIB
    printf("Digite o PIB: ");
    double pibDois;
    scanf("%lf", &pibDois);

    // Número de Pontos Turísticos
    printf("Digite o Número de Pontos Turísticos: ");
    int pontosTuristicosDois;
    scanf("%d", &pontosTuristicosDois);

    // calculando a Densidade Populacional da carta 02
    double densidadePopulacionalDois = populacaoDois / areaDois;

    // calculando o PIB per capita da carta 02
    double pibPerCapitaDois = (pibDois * 1000000000) / populacaoDois;

    // visualizar resultado

    // Carta Um
    printf("\n===================== INFORMAÇÕES DA CARTA 01 =====================\n");
    printf("Estado: %c\n", estadoUm);
    printf("Código da Carta: %s\n", codeUm);
    printf("Nome da Cidade: %s\n", cidadeUm);
    printf("Número de habitantes da cidade: %d\n", populacaoUm);
    printf("A área da cidade em quilômetros quadrados: %.2lf\n", areaUm);
    printf("O Produto Interno Bruto da cidade: %.2lf\n", pibUm);
    printf("A quantidade de pontos turísticos na cidade: %d\n", pontosTuristicosUm);
    printf("A Densidade Populacional da cidade: %.2lf hab/km²\n", densidadePopulacionalUm);
    printf("O PIB per capita da cidade: %.2lf reais\n", pibPerCapitaUm);

    // Carta dois
    printf("\n===================== INFORMAÇÕES DA CARTA 02 =====================\n");
    printf("Estado: %c\n", estadoDois);
    printf("Código da Carta: %s\n", codeDois);
    printf("Nome da Cidade: %s\n", cidadeDois);
    printf("Número de habitantes da cidade: %d\n", populacaoDois);
    printf("A área da cidade em quilômetros quadrados: %.2lf\n", areaDois);
    printf("O Produto Interno Bruto da cidade: %.2lf\n", pibDois);
    printf("A quantidade de pontos turísticos na cidade: %d\n", pontosTuristicosDois);
    printf("A Densidade Populacional da cidade: %.2lf hab/km²\n", densidadePopulacionalDois);
    printf("O PIB per capita da cidade: %.2lf reais\n", pibPerCapitaDois);
}
