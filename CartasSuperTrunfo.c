#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char codigo[4]; // Código da cidade
    char nome[20]; // Nome da cidade
    int populacao; // População total da cidade
    float area; // Área total da cidade
    float pib; // Valor do Produto Interno Bruto da cidade
    int pontos_turisticos; // Quantidade de pontos turísticos da cidade

    printf("Olá, seja bem vindo ao editor de cartas do Super Trunfo - Edição Países!\n");
    printf("Por favor, insira o código da cidade:\n");
    scanf("%s", &codigo); // Aqui o usuário digita o código que será atribuído à cidade

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nome); // Aqui o usuário digita o nome que será atribuído à cidade

    printf("Qual é o tamanho da população desta cidade?\n");
    scanf("%d", &populacao); // Aqui o usuário digita o número equivalente à população da cidade

    printf("Qual é a área total em km² da cidade?\n");
    scanf("%fkm²", &area); // Aqui o usuário digita o valor da área da cidade

    printf("Insira o valor do Produto Interno Bruto (PIB) desta cidade:\n");
    scanf("%f", &pib); // Aqui o usuário digita o número do PIB da cidade
    
    printf("Por fim, insira a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &pontos_turisticos); // Aqui o usuário digita o número de pontos turísticos da cidade
    printf("Verifique as informações da sua carta:\n");

    // Exibição dos dados digitados pelo usuário
    printf("Código: %s Nome da Cidade: %s\n", codigo, nome);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area);
    printf("PIB: R$%.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
