#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
        setlocale(0, "Portuguese");
    /*
        Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char

        Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)

        Nome da Cidade: O nome da cidade. Tipo: char[] (string)

        População: O número de habitantes da cidade. Tipo: int

        Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float

        PIB: O Produto Interno Bruto da cidade. Tipo: float

        Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    */

    /// CARTA 1
    printf("CARTA 1\n");
    // Estado
    char estadoUm;
    printf("Informe o Estado: ");
    estadoUm = getchar();

    // Código da carta
    char codeCartaUm[3];
    printf("Informe o Código da Carta: ");
    scanf("%s", &codeCartaUm);

    // Nome da cidade
    char nomeCidadeUm[30];
    printf("Informe o Nome da Cidade: ");
    fflush(stdin);
    gets(nomeCidadeUm);

    // População
    int populacaoUm;
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacaoUm);

    // Área
    float areaUm;
    printf("Informe a Área (em km²): ");
    fflush(stdin);
    scanf("%f", &areaUm);

    // PIB
    float pibUm;
    printf("Informe o PIB: ");
    fflush(stdin);
    scanf("%f", &pibUm);

    // Pontos turisticos
    int pontosTuristicosUm;
    printf("Informe a quantidade de pontos turísticos: ");
    fflush(stdin);
    scanf("%d", &pontosTuristicosUm);

    /// ==============================================

    /// CARTA 2
    printf("\nCARTA 2\n");
    // Estado
    getchar();
    char estadoDois;
    printf("Informe o Estado: ");
    estadoDois = getchar();

    // Código da carta
    char codeCartaDois[3];
    printf("Informe o Código da Carta: ");
    scanf("%s", &codeCartaDois);

    // Nome da cidade
    char nomeCidadeDois[30];
    printf("Informe o Nome da Cidade: ");
    fflush(stdin);
    gets(nomeCidadeDois);

    // População
    int populacaoDois;
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacaoDois);

    // Área
    float areaDois;
    printf("Informe a Área (em km²): ");
    fflush(stdin);
    scanf("%f", &areaDois);

    // PIB
    float pibDois;
    printf("Informe o PIB: ");
    fflush(stdin);
    scanf("%f", &pibDois);

    // Pontos turisticos
    int pontosTuristicosDois;
    printf("Informe a quantidade de pontos turísticos: ");
    fflush(stdin);
    scanf("%d", &pontosTuristicosDois);


    /// RESULTADO
    // Carta 1
    printf("\nCARTA 1\n");
    printf("Estado: %c\n", estadoUm);
    printf("Código da Carta: %s\n", codeCartaUm);
    printf("Nome da Cidade: %s\n", nomeCidadeUm);
    printf("O número de habitantes da cidade: %d\n", populacaoUm);
    printf("A área da cidade em quilômetros quadrados: %.2f\n", areaUm);
    printf("O Produto Interno Bruto da cidade: %.2f bilhões de reais\n", pibUm);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosUm);

    // Carta 2
    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estadoDois);
    printf("Código da Carta: %s\n", codeCartaDois);
    printf("Nome da Cidade: %s\n", nomeCidadeDois);
    printf("O número de habitantes da cidade: %d\n", populacaoDois);
    printf("A área da cidade em quilômetros quadrados: %.2f\n", areaDois);
    printf("O Produto Interno Bruto da cidade: %.2f bilhões de reais\n", pibDois);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosDois);

    printf("\n\n");
    system("pause");
}
