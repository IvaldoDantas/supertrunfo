#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {
    
    // Declaraççao das Variáveis para a Carta 01

    char estado1[01]; // declaração da variável tipo char com nome estado1
    char codigo1[03]; // declaração da variável tipo char com nome codigo1
    char cidade1[30]; // declaração da variável tipo char com nome cidade1
    int populacao1; // declaração da variável tipo int com nome populacao1
    float area1; // declaração da variável tipo float com nome area1
    float pib1; // declaração da variável tipo float com nome pib1
    int pontosturisticos1; // declaração da variável tipo int com nome pontosturisticos1

    // Declaração das Variáveis para a Carta 2

    char estado2[01]; // declaração da variável tipo char com nome estado2
    char codigo2[03]; // declaração da variável tipo char com nome codigo2
    char cidade2[30]; // declaração da variável tipo char com nome cidade2
    int populacao2; // declaração da variável tipo int com nome populacao2
    float area2; // declaração da variável tipo float com nome area2
    float pib2; // declaração da variável tipo float com nome pib2
    int pontosturisticos2; // declaração da variável tipo int com nome pontosturisticos2

    // Cadastro das Cartas:
    
    // Realização do cadastro para a Carta 01

    printf("Carta 01:\n");

    printf("Digite o nome do Estado:\n ");
    scanf(" %s", &estado1);

    printf("Digite o Código da Cidade:\n ");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade:\n ");
    scanf(" %s", &cidade1);

    printf("Digite a quantidade da População:\n ");
    scanf("%d", &populacao1);

    printf("Digite a Área em  km² da Cidade:\n ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade em bilhões:\n ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:\n ");
    scanf("%d", &pontosturisticos1);


    // Realização do cadastro para a Carta 02

    printf("Carta 02:\n");

    printf("Digite o nome do Estado:\n ");
    scanf(" %s", &estado2);

    printf("Digite o Código da Cidade:\n ");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade:\n ");
    scanf(" %s", &cidade2);

    printf("Digite a quantidade da População:\n ");
    scanf("%d", &populacao2);

    printf("Digite a Área em  km² da Cidade:\n ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade em bilhões:\n ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:\n ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    
    // Exibição dos dados para a Carta 01

    printf("\n--- Carta 01 ---\n");

    printf("Nome do Estado: %s\n", estado1);

    printf("Código da Cidade: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %d\n", populacao1);

    printf("Área da Cidade: %.2f km²\n", area1);

    printf("PIB da Cidade: R$ %.2f bilhões\n", pib1);

   printf("Pontos Turísticos: %d\n", pontosturisticos1);


    // Exibição dos dados para a Carta 02

    printf("\n--- Carta 02 ---\n");

    printf("Nome do Estado: %s\n", estado2);

    printf("Código da Cidade: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %d\n", populacao2);

    printf("Área da Cidade: %.2f km²\n", area2);

    printf("PIB da Cidade: R$ %.2f bilhões\n", pib2);

    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
