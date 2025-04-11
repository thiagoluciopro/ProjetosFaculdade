#include <stdio.h>

//Desafio 01 para cadastro e exibição de cartas do Super Trunfo

int main(){

    //Carta 1
    char estado1;
    char codigo_carta1[5];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    //Carta 2
    char estado2;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Pede para o usuário preencher: Carta 1
    printf("Carta 1 do Super Trunfo \n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Pede para o usuário preencher: Carta 2
    printf("Carta 2 do Super Trunfo \n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Exibir os dados da Carta 1
    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    //Exibir os dados da Carta 2
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
