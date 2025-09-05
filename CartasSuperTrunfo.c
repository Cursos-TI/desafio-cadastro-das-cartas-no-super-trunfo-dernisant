int main (){
/*Carta 1*/
    char estado[20];
    char codigo[20];
    char cidade[20];
    int populaçao;
    float area;
    float pib;
    int turisticos;
    float densidadepopulacional;
    float PIBpc;
    float superpoder;
    /*Form carta 2*/

    printf("Insira as informações nos campos abaixo para construir a primeira carta do seu Estado de preferência! \n");

    printf("Insira uma letra de A a H para identificar um estado: \n");
    scanf("%s", &estado);

    printf("Defina o código da carta usando a letra de identificação do estado seguida de um número de 01 a 04(diferente do código da primeira carta): \n");
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

    densidadepopulacional = populaçao / area;
    PIBpc = pib / populaçao;
    superpoder = populaçao + area + pib + turisticos + PIBpc + (1 / densidadepopulacional);
    /*Carta 2*/

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populaçao2;
    float area2;
    float pib2;
    int turisticos2;
    float densidadepopulacional2;
    float PIBpc2;
    float superpoder2;

    printf("\n Insira as informações nos campos abaixo para construir a segunda carta do seu Estado de preferência! \n");

    printf("Insira uma letra de A a H para identificar um estado: \n");
    scanf("%s", &estado2);

    printf("Defina o código da carta usando a letra de identificação do estado seguida de um número de 01 a 04: \n");
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

    densidadepopulacional2 = populaçao2 / area2;
    PIBpc2 = pib2 / populaçao2;
    superpoder2 = populaçao2 + area2 + pib2 + turisticos2 + PIBpc2 + (1 / densidadepopulacional2); 

    printf("\n Carta 1: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n Densidade Populacional: %f \n PIB per Capita: %f \n Super Poder: %f \n Carta 2: \n Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número de Pontos Turísticos: %d \n Densidade Populacional: %f \n PIB per capita: %f \n Super poder: %f\n", estado, codigo, cidade, populaçao, area, pib, turisticos, densidadepopulacional, PIBpc, superpoder, estado2, codigo2, cidade2, populaçao2, area2, pib2, turisticos2, densidadepopulacional2, PIBpc2, superpoder2);

    // Comparação entre as cartas
    int comparaçaoPopulaçao = populaçao > populaçao2;
    int comparaçaoArea = area > area2;
    int comparaçaoPIB = pib > pib2;
    int comparaçaoPontosturisticos = turisticos > turisticos2;
    int comparaçaoDensidadepopulacional = (1 / densidadepopulacional) > (1 / densidadepopulacional2);
    int comparaçaoPIBperCapita = PIBpc > PIBpc2;
    int comparaçaoSuperpoder = superpoder > superpoder2;



    printf("Comparando as cartas: \n Carta 1 vence = 1\n Carta 2 vence = 0\n");
    printf("População: %d\n Área: %d\n PIB: %d\n Pontos turísticos: %d\n Densidade populacional: %d\n PIB per Capita: %d\n Super Poder: %d\n", comparaçaoPopulaçao, comparaçaoArea, comparaçaoPIB, comparaçaoPontosturisticos, comparaçaoDensidadepopulacional, comparaçaoPIBperCapita, comparaçaoSuperpoder);

    printf("Carta 1 - População: %d\n Carta 2 - População:%d\n", populaçao, populaçao2);
    //Estrutura de decisão
    if (populaçao > populaçao2)
    {
        printf("A carta 1 é vencedora!\n");
    } else {
        printf("A carta 2 é vencedora!\n");
    }
    
    printf("Carta 1 - PIB: %f\n Carta 2 - PIB:%f\n", pib, pib2);

    if (pib > pib2)
    {
        printf("A carta 1 é vencedora!\n");
    } else {
        printf("A carta 2 é vencedora!\n");
    }

    printf("Carta 1 - Pontos turísticos: %d\n Carta 2 - Pontos turísticos:%d\n", turisticos, turisticos2);

     if (turisticos > turisticos2)
    {
        printf("A carta 1 é vencedora!\n");
    } else {
        printf("A carta 2 é vencedora!\n");
    }

    printf("Carta 1 - Densidade populacional: %f\n Carta 2 - Densidade populacional:%f\n", densidadepopulacional, densidadepopulacional2);

     if (densidadepopulacional > densidadepopulacional2)
    {
        printf("A carta 1 é vencedora!\n");
    } else {
        printf("A carta 2 é vencedora!\n");
    }

    printf("Carta 1 - PIB per capita: %f\n Carta 2 - PIB per capita:%f\n", PIBpc, PIBpc2);

      if (PIBpc > PIBpc2)
    {
        printf("A carta 1 é vencedora!\n");
    } else {
        printf("A carta 2 é vencedora!\n");
    }

    printf("Carta 1 - Superpoder: %f\n Carta 2 - Superpoder:%f\n", superpoder, superpoder2);

       if (superpoder > superpoder2)
    {
        printf("A carta 1 é vencedora!\n");
    } else {
        printf("A carta 2 é vencedora!\n");
    }
    
    return 0;
}