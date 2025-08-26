#include <stdio.h>

int main(){
    char estado[50];
    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int NPT;

    char estado2[50];
    char codigo2[50];
    char nome2[50];
    int populacao2;
    float area2;
    float PIB2;
    int NPT2;

// Primeira Carta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    printf("Nome Do estado: \n");
    scanf("%s", &estado);

    printf("Código Do estado: \n");
    scanf("%s", &codigo);

    printf("Nome Da Cidade: \n");
    scanf("%s", &nome);

    printf("População da Cidade: \n");
    scanf("%f", &populacao);

    printf("Área da Cidade: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &NPT);

    // Segunda Carta >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    printf("Nome Do estado: \n");
    scanf("%s", &estado);

    printf("Código Do estado: \n");
    scanf("%s", &codigo);

    printf("Nome Da Cidade: \n");
    scanf("%s", &nome);

    printf("População da Cidade: \n");
    scanf("%f", &populacao);

    printf("Área da Cidade: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &NPT);

    // Valores da carta
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
// Carta 1

    printf("Carta 1:\n");

    printf("Estado: %s \n", estado);

    printf("Código: %s \n", codigo);

    printf("Nome da Cidade: %s \n", nome);

    printf("População: %f \n",populacao);

    printf("Área: %f \n",area);

    printf("PIB: %f \n", PIB);

    printf("Número De ponto Turísticos: %d \n", NPT);

// Carta 2
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    printf("Carta 2:\n");

    printf("Estado: %s \n", estado2);

    printf("Código: %s \n", codigo2);

    printf("Nome da Cidade: %s \n", nome2);

    printf("População: %f \n",populacao2);

    printf("Área: %f \n",area2);

    printf("PIB: %f \n", PIB2);

    printf("Número De ponto Turísticos: %d \n", NPT2);

    return 0;

}