#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Super Trunfo em C: Desenvolvendo a Lógica do Jogo
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/*
    Curso ADS - Introdução à Programação de Computadores
    Tema 2 - Super Trunfo em C: Desenvolvendo a Lógica do Jogo
    Exercício: Desafio Nível Novato - Comparando Cartas do Super Trunfo
    Data: 10 de Março de 2025
    Aluno: Ednilson Graciano dos Santos
    Matrícula: 202503249997 
    Versão: 0.4.1v
*/

int main() {
    // Declarando as variáveis da Carta 1 e 2
    int carta1, turiticos1, populacao1,
        carta2, turiticos2, populacao2,
        vitorias1 = 0, vitorias2 = 0 
    ;

    char codigo1[10];
    char codigo2[10]; 

    char estado1, estado2;

    char cidade1[50], cidade2[50];

    float area1, area2, pib1, pib2,
          densidade_pop1, densidade_pop2,
          pib_per_capita1, pib_per_capita2, 
          super_poder_carta1, super_poder_carta2
    ;

    printf("Bem vindo ao Super Trunfo\n \n"); // Mensagem de boas vindas
    printf("Jogador 1, cadastre sua carta\n \n"); // Mensagem para o jogador 1 cadastrar a sua carta

    // Recebendo os dados da carta 1
    printf("Digite o numero da carta: ");
    scanf("%d", &carta1);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%s", codigo1); 

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado1);

    printf("Digite a cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);  

    printf("Digite a Area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: R$ ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos1);

    printf("\nCarta 1 cadastrada com sucesso!\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 1
    densidade_pop1 = (float)populacao1 / area1;
        
    // Calculando o PIB per capita da carta 1
    pib_per_capita1 = pib1 / (float)populacao1;

    // Exibindo os dados da carta 1
    printf("Dados da Carta %d\n", carta1);
    printf("Codigo da Carta: %c%s\n", estado1, codigo1);  // nesse caso retora %c%s para concatenar um caractere com uma string o %s apresentou erro
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB R$ %.2f bilhões de reais\n", pib1);
    printf("Nº de Pontos Turisticos: %d\n", turiticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop1);
    printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita1);

    // Calculando o super poder da carta 1 
    super_poder_carta1 = (float)populacao1 + area1 + pib1 + (float)turiticos1 + pib_per_capita1 + (1 / densidade_pop1);
    printf("Super Poder da Carta %d: %.2f\n \n", carta1, super_poder_carta1);

    printf("Jogador 2, cadastre a sua carta\n \n"); // Mensagem para o jogador 2 cadastrar a sua carta 

    // Recebendo os dados da carta 2
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%s", codigo2);

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: R$ ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos2);

    printf("Carta 2 cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 2
    densidade_pop2 = (float)populacao2 / area2;

    // Calculando o PIB per capita da carta 2
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibindo os dados da carta 2
    printf("Dados da Carta %d\n", carta2);
    printf("Codigo da Carta: %c%s\n", estado2, codigo2); // nesse retora %c%s para concatenar um caractere com uma string o %s apresentou erro
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Nº de Pontos Turisticos: %d\n", turiticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop2);
    printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita2);

    // Calculando o super poder da carta 2
    super_poder_carta2 = (float)populacao2 + area2 + pib2 + (float)turiticos2 + pib_per_capita2 + (1 / densidade_pop2);
    printf("Super Poder da Carta %d: %.2f\n \n", carta2, super_poder_carta2);

    // Exibindo o resultado final do jogo e a comparação dos atributos das cartas 1 e 2. 
    printf("Resultado Final do Jogo, Comparação das Cartas\n \n");
  
    // comparando os atributos das cartas 1 e 2 usando a estrutura de decisão if
    // Exibe o valor da população das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (populacao1 > populacao2) {
        vitorias1 += 1;    // se a vitória for da carta 1, incrementa o contador de vitórias do jogador 1, se não incrementa o contador de vitórias do jogador 2
        printf("Carta1 - Cidade de %s - População: %d \n", cidade1, populacao1);
        printf("Carta2 - Cidade de %s - População: %d \n",cidade2, populacao2);
        printf("Resultado Final: Carta %d Vitória: %d \n", carta1, vitorias1);
    } else {
        vitorias2 += 1;   
        printf("Carta1 - Cidade de %s - População: %d \n", cidade1, populacao1);
        printf("Carta2 - Cidade de %s - População: %d \n", cidade2, populacao2);
        printf("Resultado: Carta %d Vitória: %d \n", carta2, vitorias2);       
    }

    // Exibe o valor da área das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (area1 > area2) {
        vitorias1 += 1;
        printf("\nCarta1 - Cidade de %s - Area: %.2f\n",cidade1, area1);
        printf("Carta2 - Cidade de %s - Area: %.2f\n",cidade2, area2); 
        printf("Resultado: Carta %d Vitoria: %d\n", carta1, vitorias1);
    } else {
        vitorias2 += 1;
        printf("\nCarta1 - Cidade de %s - %.2f Area: \n",cidade1, area1);
        printf("Carta2 - Cidade de %s - %.2f Area: \n",cidade2, area2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta2, vitorias2);
    }

    // Exibe o valor do PIB das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (pib1 > pib2) {
        vitorias1 += 1;
        printf("\nCarta1 - Cidade de %s - PIB: R$ %.2f bilhões de reais\n",cidade1, pib1);
        printf("Carta2 - Cidade de %s - PIB: R$ %.2f bilhões de reais\n",cidade2, pib2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta1, vitorias1);

    } else {
        vitorias2 += 1;
        printf("\nCarta1 - Cidade de %s - PIB: R$ %.2f bilhões de reais\n",cidade1, pib1);
        printf("Carta2 - Cidade de %s - PIB: R$ %.2f bilhões de reais\n",cidade2, pib2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta2, vitorias2);
    } 
    
    // Exibe o valor do número de pontos turísticos das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (turiticos1 > turiticos2) {
        vitorias1 += 1;
        printf("\nCarta1 - Cidade de %s - Nº de Pontos Turisticos: %d\n",cidade1, turiticos1);
        printf("Carta2 - Cidade de %s - Nº de Pontos Turisticos: %d\n",cidade2, turiticos2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta1, vitorias1);
    } else {
        vitorias2 += 1;
        printf("\nCarta1 - Cidade de %s - Nº de Pontos Turisticos: %d\n",cidade1, turiticos1);
        printf("Carta2 - Cidade de %s - Nº de Pontos Turisticos: %d\n",cidade2, turiticos2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta2, vitorias2);
    }
    
    // Exibe o valor da densidade populacional das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (densidade_pop1 < densidade_pop2) {
        vitorias1 += 1;
        printf("\nCarta1 - Cidade de %s - Densidade Populacional: %.2f hab/Km²\n",cidade1, densidade_pop1);
        printf("Carta2 - Cidade de %s - Densidade Populacional: %.2f hab/Km²\n",cidade2, densidade_pop2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta1, vitorias1);
    } else {
        vitorias2 += 1;
        printf("\nCarta1 - Cidade de %s - Densidade Populacional: %.2f hab/Km²\n",cidade1, densidade_pop1);
        printf("Carta2 - Cidade de %s - Densidade Populacional: %.2f hab/Km²\n",cidade2, densidade_pop2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta2, vitorias2);
    }

    // Exibe o valor do PIB per capita das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (pib_per_capita1 > pib_per_capita2) {
        vitorias1 += 1;
        printf("\nCarta1 - Cidade de %s - PIB per Capita: R$ %.2f de reais\n",cidade1, pib_per_capita1);
        printf("Carta2 - Cidade de %s - PIB per Capita: R$ %.2f de reais\n",cidade2, pib_per_capita2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta1, vitorias1);
    } else {
        vitorias2 += 1;
        printf("\nCarta1 - Cidade de %s - PIB per Capita: R$ %.2f de reais\n",cidade1, pib_per_capita1);
        printf("Carta2 - Cidade de %s - PIB per Capita: R$ %.2f de reais\n",cidade2, pib_per_capita2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta2, vitorias2);
    }

    // Exibe o valor do super poder das duas cartas, compara e exibe o vencedor da comparação usando a estrutura de decisão if
    if (super_poder_carta1 > super_poder_carta2) {
        vitorias1 += 1;
        printf("\nCarta1 - Cidade de %s - Super Poder: %.2f\n",cidade1, super_poder_carta1);
        printf("Carta2 - Cidade de %s - Super Poder: %.2f\n",cidade2, super_poder_carta2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta1, vitorias1);
    } else {
        vitorias2 += 1;        
        printf("\nCarta1 - Super Poder: %.2f\n", super_poder_carta1);
        printf("Carta2 - Super Poder: %.2f\n", super_poder_carta2);
        printf("Resultado: Carta %d Vitoria: %d\n", carta2, vitorias2);
    }

    // Quem venceu o jogo de Super Trunfo com o numero maior de vitorias
    if (vitorias1 > vitorias2) {
        printf("\nO Vencedor do Super Trunfo é o Jogador 1 com a Carta %d\n", carta1);
        printf("Numero de vitorias: %d\n", vitorias1);
    } else {
        printf("\nO Vencedor do Super Trunfo é o Jogador 2 coma Carta %d\n", carta2);
        printf("Numero de vitorias: %d\n", vitorias2);
    }

    // Mensagem de Encerrando Jogo
    printf("\nFim do Jogo!\n \n");

    return 0;
}