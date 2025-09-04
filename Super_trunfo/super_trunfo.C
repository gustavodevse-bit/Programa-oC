#include <stdio.h>

int main() {
    int atributo1, atributo2;

    // Variáveis da Carta 1
    char estado[50], codigo[50], nome[50];
    unsigned long int populacao;
    float area, PIB;
    int NPT;
    float densidade_populacional, PIB_per_capita;

    // Variáveis da Carta 2
    char estado2[50], codigo2[50], nome2[50];
    unsigned long int populacao2;
    float area2, PIB2;
    int NPT2;
    float densidade_populacional2, PIB_per_capita2;

    // ------------------- Entrada Carta 1 -------------------
    printf("Nome do estado (Carta 1): ");
    scanf("%s", estado);

    printf("Código do estado (Carta 1): ");
    scanf("%s", codigo);

    printf("Nome da Cidade (Carta 1): ");
    scanf("%s", nome);

    printf("População da Cidade (Carta 1): ");
    scanf("%lu", &populacao);

    printf("Área da Cidade (Carta 1): ");
    scanf("%f", &area);

    printf("PIB da Cidade (Carta 1): ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos (Carta 1): ");
    scanf("%d", &NPT);

    // Cálculos Carta 1
    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;

    // ------------------- Entrada Carta 2 -------------------
    printf("\nNome do estado (Carta 2): ");
    scanf("%s", estado2);

    printf("Código do estado (Carta 2): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (Carta 2): ");
    scanf("%s", nome2);

    printf("População da Cidade (Carta 2): ");
    scanf("%lu", &populacao2);

    printf("Área da Cidade (Carta 2): ");
    scanf("%f", &area2);

    printf("PIB da Cidade (Carta 2): ");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos (Carta 2): ");
    scanf("%d", &NPT2);

    // Cálculos Carta 2
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;

    // ------------------- Escolha dos Atributos -------------------
    printf("\nAtributos disponíveis:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capita\n");

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo: ");
    scanf("%d", &atributo1);

    // Segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        }
    } while (atributo2 == atributo1);

    // ------------------- Comparação -------------------
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    // Primeiro atributo
    switch (atributo1) {
        case 1: valor1_carta1 = populacao; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = PIB; valor1_carta2 = PIB2; break;
        case 4: valor1_carta1 = NPT; valor1_carta2 = NPT2; break;
        case 5: valor1_carta1 = densidade_populacional; valor1_carta2 = densidade_populacional2; break;
        case 6: valor1_carta1 = PIB_per_capita; valor1_carta2 = PIB_per_capita2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: valor2_carta1 = populacao; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = PIB; valor2_carta2 = PIB2; break;
        case 4: valor2_carta1 = NPT; valor2_carta2 = NPT2; break;
        case 5: valor2_carta1 = densidade_populacional; valor2_carta2 = densidade_populacional2; break;
        case 6: valor2_carta1 = PIB_per_capita; valor2_carta2 = PIB_per_capita2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // ------------------- Resultado -------------------
    printf("\n================ RESULTADO DA COMPARAÇÃO ================\n");
    printf("Carta 1 (%s) x Carta 2 (%s)\n", estado, estado2);

    // Primeiro atributo
    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
        case 6: printf("PIB per capita\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", estado, valor1_carta1, estado2, valor1_carta2);

    // Segundo atributo
    printf("\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Número de pontos turísticos\n"); break;
        case 5: printf("Densidade demográfica\n"); break;
        case 6: printf("PIB per capita\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", estado, valor2_carta1, estado2, valor2_carta2);

    // Comparação das somas
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", estado, soma1, estado2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor: Carta 1 - %s\n", estado);
    } else if (soma2 > soma1) {
        printf("\nVencedor: Carta 2 - %s\n", estado2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
