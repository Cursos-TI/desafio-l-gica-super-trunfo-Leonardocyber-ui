#include<stdio.h>
#include<string.h>

int main() {
    char codigo1[5];
    char nome1[50];
    int populacao1; 
    int pontoTuristicos1;
    float area1;
    float pib1;

    char codigo2[5];
    char nome2[50];
    int populacao2; 
    int pontoTuristicos2;
    float area2;
    float pib2;

    int opcao;
    char cidadeVencedora[50];

    // cadastro da primeira carta
    printf("Cadastro da primeira Carta:\n");
    printf("Codigo:\n");
    scanf("%s", &codigo1);
    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", nome1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Area (km):\n");
    scanf("%f", &area1);
    printf("Pib (em bilhoes):\n");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontoTuristicos1);

    // cadastro da segunda carta
    printf("Cadastro da segunda Carta:\n");
    printf("Codigo:\n");
    scanf("%s", &codigo2);
    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", nome2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Area (km):\n");
    scanf("%f", &area2);
    printf("Pib (em bilhoes):\n");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontoTuristicos2);

    //comparaçao das cartas
    if (populacao1>populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

    if (area1>area2) {
        printf("Cidade 1 tem maior area.\n");
    } else {
        printf("Cidade 2 tem maior area.\n");
    }
    
    if (pib1>pib2) {
        printf("Cidade 1 tem maior pib.\n");
    } else {
        printf("Cidade 2 tem maior pib.\n");
    }

    if (pontoTuristicos1>pontoTuristicos2) {
        printf("Cidade 1 tem mais Pontos Turisticos .\n");
    } else {
        printf("Cidade 2 tem mais Pontos Turisticos.\n");
    }

    // resultado final
    
    printf("A Cidade Vencedora é: %s\n", nome1); 

    return 0;

}
