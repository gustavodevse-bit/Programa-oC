#include <stdio.h>

int main(){

    int atributos;

    // Variáveis da Carta 1
    char estado[50];
    char codigo[50];
    char nome[50];
    unsigned long int populacao;
    float area;
    float PIB;
    int NPT;
    float densidade_populacional;
    float PIB_per_capita;
    float Super_poder1;

    // Variáveis da Carta 2
    char estado2[50];
    char codigo2[50];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int NPT2;
    float densidade_populacional2;
    float PIB_per_capita2;
    float Super_poder2;

    // Primeira Carta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    printf("Nome do estado (Carta 1): \n");
    scanf("%s", estado);

    printf("Código do estado (Carta 1): \n");
    scanf("%s", codigo);

    printf("Nome da Cidade (Carta 1): \n");
    scanf("%s", nome);

    printf("População da Cidade (Carta 1): \n");
    scanf("%lu", &populacao);

    printf("Área da Cidade (Carta 1): \n");
    scanf("%f", &area);

    printf("PIB da Cidade (Carta 1): \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos (Carta 1): \n");
    scanf("%d", &NPT);

    // Cálculos Carta 1
    densidade_populacional = populacao / area;
    PIB_per_capita = PIB / populacao;
    Super_poder1 = populacao + area + PIB + PIB_per_capita + NPT + (1.0 / densidade_populacional);

    // Segunda Carta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    printf("Nome do estado (Carta 2): \n");
    scanf("%s", estado2);

    printf("Código do estado (Carta 2): \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade (Carta 2): \n");
    scanf("%s", nome2);

    printf("População da Cidade (Carta 2): \n");
    scanf("%lu", &populacao2);

    printf("Área da Cidade (Carta 2): \n");
    scanf("%f", &area2);

    printf("PIB da Cidade (Carta 2): \n");
    scanf("%f", &PIB2);

    printf("Número de Pontos Turísticos (Carta 2): \n");
    scanf("%d", &NPT2);

    // Cálculos Carta 2
    densidade_populacional2 = populacao2 / area2;
    PIB_per_capita2 = PIB2 / populacao2;
    Super_poder2 = populacao2 + area2 + PIB2 + PIB_per_capita2 + NPT2 + (1.0 / densidade_populacional2);

 
    // Exibição >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NPT);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita);
    printf("Super poder: %.2f\n", Super_poder1);

    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NPT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita2);
    printf("Super poder: %.2f\n", Super_poder2);
    
 // Comparações
// População
    printf("População:\n");

    if (populacao > populacao2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    // Área
    printf("Área:\n");

    if (area > area2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    // PIB
    printf("PIB:\n");
    if (PIB > PIB2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    // Números de Pontos Turísticos
    printf("Números de Pontos Turísticos:\n");
    if (NPT > NPT2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    // Densidade Populacional
    printf("Densidade Populacional:\n");
    if (densidade_populacional < densidade_populacional2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    // PIB per capita
    printf("PIB per capita:\n");
    if (PIB_per_capita > PIB_per_capita2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    // Super Carta (Poder)
    printf("Super Carta (Poder)");
    if (Super_poder1 > Super_poder2)
    {
        printf("%s Vence\n",estado);
    }
    else{
        printf("%s Vence\n",estado2);
    }
    printf("Atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolham o atributo: \n");
    scanf("%d", &atributos);

    switch (atributos)
    {
    case 1:
        // Comparações
        // População
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", estado, populacao);
    printf("Carta 2 - %s: %d\n", estado2, populacao2);
    if (populacao > populacao2)
    {
        printf("Carta 1 - (%s)Venceu\n", estado);
    }
    else
    {
        printf("Carta 2 - (%s) Venceu\n",estado2);
    }
        break;
    case 2:
        // Comparações
        // Área
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %.2f\n", estado, area);
    printf("Carta 2 - %s: %.2f\n", estado2, area2);
    if (area > area2)
    {
        printf("Carta 1 - (%s)Venceu\n", estado);
    }
    else
    {
        printf("Carta 2 - (%s) Venceu\n",estado2);
    }
        break;
    case 3:
        // Comparações
        // PIB
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", estado, PIB);
    printf("Carta 2 - %s: %d\n", estado2, PIB2);
    if (PIB > PIB2)
    {
        printf("Carta 1 - (%s)Venceu\n", estado);
    }
    else
    {
        printf("Carta 2 - (%s) Venceu\n",estado2);
    }
        break;
    case 4:
        // Comparações
        // Número de pontos turísticos
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", estado, NPT);
    printf("Carta 2 - %s: %d\n", estado2, NPT2);
    if (NPT > NPT2)
    {
        printf("Carta 1 - (%s)Venceu\n", estado);
    }
    else
    {
        printf("Carta 2 - (%s) Venceu\n",estado2);
    }
        break;
    case 5:
    // Comparações
        // desidade demografica
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", estado, densidade_populacional);
    printf("Carta 2 - %s: %d\n", estado2, densidade_populacional2);
    if (densidade_populacional < densidade_populacional2)
    {
        printf("Carta 1 - (%s)Venceu\n", estado);
    }
    else
    {
        printf("Carta 2 - (%s) Venceu\n",estado2);
    }

    break;
    
    return 0;
}
}
