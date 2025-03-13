#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países - no caso como no primeiro codigo começamos com cidade nao quis alterar, só muda o nome. 

/*
    Curso ADS - Introdução à Programação de Computadores
    Tema 2 - Super Trunfo em C: Desenvolvendo a Lógica do Jogo
    Exercício: Desafio Nível Aventureiro - Interatividade no Super Trunfo
    Data: 13 de Março de 2025
    Aluno: Ednilson Graciano dos Santos
    Matrícula: 202503249997 
    Versão: 0.5.0v
*/

int main() {
    int opcao, carta1, turiticos1, populacao1,
        carta2, turiticos2, populacao2
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
    printf("Jogador, cadastre sua carta 1\n \n"); // Mensagem para o jogador cadastrar a sua carta 1

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
    printf("Codigo da Carta: %c%s\n", estado1, codigo1);
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

    printf("Jogador, cadastre a sua carta 2\n \n"); // Mensagem para o jogador cadastrar a sua carta 2  

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

    printf("\nCarta 2 cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 2
    densidade_pop2 = (float)populacao2 / area2;

    // Calculando o PIB per capita da carta 2
    pib_per_capita2 = pib2 / (float)populacao2;

    // Exibindo os dados da carta 2
    printf("Dados da Carta %d\n", carta2);
    printf("Codigo da Carta: %c%s\n", estado2, codigo2); 
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


    // Menu Interativo
    printf("Menu Interativo\n");
    printf("Escolha um atributo para comparar as cartas\n"); // Mensagem para o jogador escolher um atributo para comparar as cartas
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n \n");

    printf("Digite a sua escolha: ");
    scanf("%d", &opcao); // Recebe a opção escolhida pelo jogador

    switch (opcao) // Estrutura de decisão switch, das opções do menu interativo caso o jogador escolha um atributo para comparar as cartas
    {
    case 1:
        printf("\nVocê escolheu População\n \n"); 
        if (populacao1 > populacao2) {
            //Exibe a carta vencedora
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);

            //Exibe a carta perdedora
            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);


        } else if (populacao1 < populacao2) {
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
        } else {
            // Exibe a mensagem de empate das cartas
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n \n", populacao1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
        }
        break;
    case 2:
        printf("\nVocê escolheu Área\n \n");
        if (area1 > area2) {
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Área: %.2f Km²\n", area1);

            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Área: %.2f Km²\n", area2);


        } else if (area1 < area2) {
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Área: %.2f Km²\n", area2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Área: %.2f Km²\n", area1);
        } else {
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Área: %.2f Km²\n \n", area1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Área: %.2f Km²\n", area2);
        }        
        break;
    case 3:
        printf("\nVocê escolheu PIB\n");
        if (pib1 > pib2) {
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("PIB: R$ %.2f bilhões de reais\n", pib1);

            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB: R$ %.2f bilhões de reais\n", pib2);


        } else if (pib1 < pib2) {
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB: R$ %.2f bilhões de reais\n", pib2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("PIB: R$ %.2f bilhões de reais\n", pib1);
        } else {
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("PIB: R$ %.2f bilhões de reais\n \n", pib1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB: R$ %.2f bilhões de reais\n", pib2);
        }
        break;
    case 4:
        printf("\nVocê escolheu Número de Pontos Turísticos\n \n");
        if (turiticos1 > turiticos2) {
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Nº de Pontos Turisticos: %d\n", turiticos1);

            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Nº de Pontos Turisticos: %d\n", turiticos2);


        } else if (turiticos1 < turiticos2) {
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Nº de Pontos Turisticos: %d\n", turiticos2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Nº de Pontos Turisticos: %d\n", turiticos1);
        } else {
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Nº de Pontos Turisticos: %d\n \n", turiticos1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Nº de Pontos Turisticos: %d\n", turiticos2);
        }
        break;
    case 5:
        printf("\nVocê escolheu Densidade Populacional\n \n");
        if (densidade_pop1 < densidade_pop2) { // Inverte a regra para a Densidade Populacional, vence a carta com o menor valor
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop1);

            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop2);


        } else if (densidade_pop1 > densidade_pop2) { // Inverte a regra para a Densidade Populacional, vence a carta com o menor valor
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop1);
        } else {
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Densidade Populacional: %.2f hab/Km²\n \n", densidade_pop1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop2);
        }
        break;
    case 6:
        printf("\nVocê escolheu PIB per Capita\n \n");
        if (pib_per_capita1 > pib_per_capita2) {
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita1);

            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita2);


        } else if (pib_per_capita1 < pib_per_capita2) {
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita1);
        } else {
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("PIB per Capita: R$ %.2f de reais\n \n", pib_per_capita1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita2);
        }       
        break;
    case 7:
        printf("\nVocê escolheu Super Poder\n \n");
        if (super_poder_carta1 > super_poder_carta2) {
            printf("A Carta %d venceu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Super Poder: %.2f\n", super_poder_carta1);

            printf("\nCarta %d perdeu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Super Poder: %.2f\n", super_poder_carta2);


        } else if (super_poder_carta1 < super_poder_carta2) {
            printf("A Carta %d venceu!\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Super Poder: %.2f\n", super_poder_carta2);

            printf("\nCarta %d perdeu!\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Super Poder: %.2f\n", super_poder_carta1);
        } else {
            printf("Empate! Ambas as Cartas possuem o mesmo valor!\n");
            printf("Carta %d\n", carta1);
            printf("Cidade: %s\n", cidade1);
            printf("Super Poder: %.2f\n \n", super_poder_carta1);

            printf("Carta %d\n", carta2);
            printf("Cidade: %s\n", cidade2);
            printf("Super Poder: %.2f\n", super_poder_carta2);
        }        
        break;
    default:
        printf("\nOpção inválida\n");
        break;
    }
    // Mensagem de Encerrando Jogo
    printf("\nFim do Jogo!\n \n");

    return 0;
}