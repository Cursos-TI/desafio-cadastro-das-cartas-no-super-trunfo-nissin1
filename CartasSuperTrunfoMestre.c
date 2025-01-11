#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char codigo1[4], codigo2[4]; // Código da cidade
    char nome1[20], nome2[20]; // Nome da cidade
    unsigned int populacao1, populacao2; // População total da cidade
    float area1, area2; // Área total da cidade
    float pib1, pib2; // Valor do Produto Interno Bruto da cidade
    int pontos_turisticos1, pontos_turisticos2; // Quantidade de pontos turísticos da cidade

    // Interação com o(a) usuário(a) para gerar a 1ª carta
    printf("Olá, seja bem vindo ao editor de cartas do Super Trunfo - Edição Países!\n");
    printf("Siga as instruções para gerar os dados da 1ª carta do Super Trunfo - Edição Países\n");
    printf("Por favor, insira o código da cidade:\n");
    scanf("%s", &codigo1); // Aqui o usuário digita o código que será atribuído à cidade

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nome1); // Aqui o usuário digita o nome que será atribuído à cidade

    printf("Qual é o tamanho da população desta cidade?\n");
    scanf("%d", &populacao1); // Aqui o usuário digita o número equivalente à população da cidade

    printf("Qual é a área total em km² da cidade?\n");
    scanf("%fkm²", &area1); // Aqui o usuário digita o valor da área da cidade

    printf("Insira o valor do Produto Interno Bruto (PIB) desta cidade:\n");
    scanf("%f", &pib1); // Aqui o usuário digita o número do PIB da cidade
    
    printf("Por fim, insira a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &pontos_turisticos1); // Aqui o usuário digita o número de pontos turísticos da cidade

    // Variáveis para calcular a densidade populacional e o PIB per capita da 1ª carta
    float dp1 = (float) populacao1 / area1; // Densidade populacional (Quantidade de habitantes por km²)
    float pibpc1 = pib1 / (float) populacao1; // PIB per Capita (PIB total da cidade dividido por sua população)

    // Interação com o(a) usuário(a) para gerar a 2ª carta
    printf("Agora, siga as instruções para gerar os dados da 2ª carta do Super Trunfo - Edição Países\n");
    printf("Por favor, insira o código da cidade:\n");
    scanf("%s", &codigo2); // Aqui o usuário digita o código que será atribuído à cidade

    printf("Insira o nome da cidade:\n");
    scanf("%s", &nome2); // Aqui o usuário digita o nome que será atribuído à cidade

    printf("Qual é o tamanho da população desta cidade?\n");
    scanf("%d", &populacao2); // Aqui o usuário digita o número equivalente à população da cidade

    printf("Qual é a área total em km² da cidade?\n");
    scanf("%fkm²", &area2); // Aqui o usuário digita o valor da área da cidade

    printf("Insira o valor do Produto Interno Bruto (PIB) desta cidade:\n");
    scanf("%f", &pib2); // Aqui o usuário digita o número do PIB da cidade
    
    printf("Por fim, insira a quantidade de pontos turísticos da cidade\n");
    scanf("%d", &pontos_turisticos2); // Aqui o usuário digita o número de pontos turísticos da cidade

     // Variáveis para calcular a densidade populacional e o PIB per capita da 2ª carta
    float dp2 = (float) populacao2 / area2; // Densidade populacional (Quantidade de habitantes por km²)
    float pibpc2 = pib2 / (float) populacao2; // PIB per Capita (PIB total da cidade dividido por sua população)

    // Exibição dos dados digitados pelo usuário
    printf("Verifique as informações da 1ª carta:\n");
    printf("Código: %s Nome da Cidade: %s\n", codigo1, nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: R$%.2f\n", pibpc1);

    printf("Verifique as informações da 2ª carta:\n");
    printf("Código: %s Nome da Cidade: %s\n", codigo2, nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: R$%.2f\n", pibpc2);
    
    // Dados a serem comparados para identificar a carta vencedora
    
    unsigned int resultado_populacao = populacao1 > populacao2;
    float resultado_area = area1 > area2;
    float resultado_pib = pib1 > pib2;
    int resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    float resultado_dp = dp1 < dp2;
    float resultado_pibpc = pibpc1 > pibpc2; 

    printf("-----------------------------------------------------\n");
    printf("Hora de comparar qual das duas cartas é vitoriosa!\n");

    printf("a carta vencedora quanto a população é: %d", resultado_populacao);
    printf("a carta vencedora quanto a área é: %.2f", resultado_area);
    printf("a carta vencedora quanto ao PIB é: %.2f", resultado_pib);
    printf("a carta vencedora quanto a quantidade de pontos turísticos é: %d", resultado_pontos_turisticos);
    printf("a carta vencedora quanto a densidade populacional é: %.2f", resultado_dp);
    printf("a carta vencedora quanto ao PIB per capita é: %.2f", resultado_pibpc);

    return 0;
}