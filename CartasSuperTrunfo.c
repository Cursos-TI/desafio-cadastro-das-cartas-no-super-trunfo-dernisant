#include <stdio.h>

int main (){
/*Carta 1*/
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populaçao;
    float area;
    float pib;
    int turisticos;

    

    /*Form carta 1*/

    printf("Insira as informações nos campos abaixo para construir a primeira carta do seu Estado de preferência! \n");

    printf("Insira uma letra de A a H para identificar um estado: \n");
    scanf("%s", &estado);

    printf("Defina o código da carta usando a letra de identificação do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigo);

    printf("Digite uma cidade pertencente ao estado escolhido: \n");
    scanf("%s", &cidade);

    printf("Informe o número de habitantes da cidade que você escolheu: \n");
    scanf("%d", &populaçao);

    printf("Informe a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos dessa cidade: \n");
    scanf("%d", &turisticos);

    
    /*Carta 2*/
    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populaçao2;
    float area2;
    float pib2;
    int turisticos2;

    /*Form carta 2*/

    printf("\n Insira as informações nos campos abaixo para construir a segunda carta do seu Estado de preferência! \n");

    printf("Insira uma letra de A a H para identificar um estado: \n");
    scanf("%s", &estado2);

    printf("Defina o código da carta usando a letra de identificação do estado seguida de um número de 01 a 04(diferente do código da primeira carta): \n");
    scanf("%s", &codigo2);

    printf("Digite uma cidade pertencente ao estado escolhido: \n");
    scanf("%s", &cidade2);

    printf("Informe o número de habitantes da cidade que você escolheu: \n");
    scanf("%d", &populaçao2);

    printf("Informe a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Informe o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos dessa cidade: \n");
    scanf("%d", &turisticos2);

    printf("\n Carta 1: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n \n Carta 2: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n", estado, codigo, cidade, populaçao, area, pib, turisticos, estado2, codigo2, cidade2, populaçao2, area2, pib2, turisticos2);

    
}
