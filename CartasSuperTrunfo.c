#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/*
    Curso ADS - Introdução à Programação de Computadores
    Tema 1 - Super Trunfo em C - Fundamentos e Técnicas Avançadas
    Exercício: Desafio Nível Novato - Criando as Cartas do Super Trunfo
    Data: 01 de Março de 2025
    Aluno: Ednilson Graciano dos Santos
    Matrícula: 202503249997 
    Versão: 0.1v
*/

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //---------------------------------------------------------------------------------------------------------------
    
    // Declarando as variáveis da Carta 1 e 2
    int carta1, populacao1, turiticos1,
        carta2, populacao2, turiticos2
    ;

    char codigo1[10], codigo2[10]; // Coloquei um valor maior para evitar erro no teclado mais poderia ser[3]

    char estado1, estado2;

    char cidade1[50], cidade2[50];

    float area1, area2, pib1, pib2;

    printf("Bem vindo ao Super Trunfo\n \n"); // Mensagem de boas vindas
    printf("Jogador, cadastre sua primeira carta\n \n"); // Mensagem para o jogador cadastrar a sua primeira carta

    // Recebendo os dados da carta 1
    printf("Digite o numero da carta: ");
    scanf("%d", &carta1);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado1);

    printf("Digite a cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos1);

    printf("Carta 1 cadastrada com sucesso!\n \n"); // Mensagem de cadastro com sucesso

    // Exibindo os dados da carta 1
    printf("Dados da Carta %d\n", carta1);
    printf("Codigo da Carta: %c%s\n", estado1, codigo1);  // nesse retora %c%s para concatenar um caractere com uma string o %s apresentou erro
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Nº de Pontos Turisticos: %d\n \n", turiticos1);

    printf("Jogador, cadastre a sua segunda carta\n \n"); // Mensagem para o jogador cadastrar a sua carta 2

    // Recebendo os dados da carta 2
    printf("Digite o numero da carta: ");
    scanf("%d", &carta2);

    printf("Digite o codigo (01-08) da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado2);

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos2);

    printf("Carta 2 cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Exibindo os dados da carta 2
    printf("Dados da Carta %d\n", carta2);
    printf("Codigo da Carta: %c%s\n", estado2, codigo2); // nesse retora %c%s para concatenar um caractere com uma string o %s apresentou erro
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("Nº de Pontos Turisticos: %d\n \n", turiticos2);

    // Mensagem de Encerrando Jogo
    printf("Fim do Jogo! Aguarde Continuação.");

    // Outra forma também é inverter os código da forma que cadastre as duas cartas primeiro e depois exiba as duas juntas

    return 0;
}