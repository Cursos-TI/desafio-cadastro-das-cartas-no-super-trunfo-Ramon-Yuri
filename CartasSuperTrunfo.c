#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
typedef struct {
    char codigo[4];       // Código da cidade (ex.: A01, B02)
    int populacao;        // População da cidade
    float area;           // Área da cidade
    float pib;            // PIB da cidade
    int pontos_turisticos;// Número de pontos turísticos da cidade
} Cidade;

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
Cidade cidades[32]; // Array para armazenar as cidades

    printf("Cadastro de Cartas - Super Trunfo\n");

    // Cadastro das cidades
    for (int i = 0; i < 32; i++) {
        // Gerar o código da cidade automaticamente
        char estado = 'A' + (i / 4);      // Determina a letra do estado (A, B, ..., H)
        int cidade = (i % 4) + 1;         // Determina o número da cidade no estado (1, 2, 3, 4)
        snprintf(cidades[i].codigo, sizeof(cidades[i].codigo), "%c%02d", estado, cidade);

        // Exibir o código da cidade e solicitar os dados
        printf("\n== Cadastro da Cidade %s ==\n", cidades[i].codigo);

        printf("População: ");
        scanf("%d", &cidades[i].populacao);

        printf("Área (em km2): ");
        scanf("%f", &cidades[i].area);

        printf("PIB (em milhões): ");
        scanf("%f", &cidades[i].pib);

        printf("Pontos turísticos: ");
        scanf("%d", &cidades[i].pontos_turisticos);
    }

    // Exibição das cidades cadastradas
    printf("\n=== Cartas cadastradas ===\n");
    for (int i = 0; i < 32; i++) {
        printf("\n== Cidade %s ==\n", cidades[i].codigo);
        printf("População: %d\n", cidades[i].populacao);
        printf("Área: %.2f km2\n", cidades[i].area);
        printf("PIB: %.2f milhões\n", cidades[i].pib);
        printf("Pontos turísticos: %d\n", cidades[i].pontos_turisticos);
    }

    return 0; // Fim do programa

}
