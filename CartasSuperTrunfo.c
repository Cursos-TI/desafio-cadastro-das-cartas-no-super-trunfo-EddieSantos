#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/*
    Curso ADS - Introdução à Programação de Computadores
    Tema 1 - Super Trunfo em C - Fundamentos e Técnicas Avançadas
    Exercício: Desafio Nível Novato - Criando as Cartas do Super Trunfo
    Data: 05 de Março de 2025
    Aluno: Ednilson Graciano dos Santos
    Matrícula: 202503249997 
    Versão: 0.3.0v
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
    int carta1, turiticos1,
        carta2, turiticos2,  
        resultadoPopulacao, resultadoArea, resultadoPib, 
        resultadoTuriticos, resultadoDensidadePop, 
        resultadoPibPerCapita, resultadoSuperPoder 
    ;

    unsigned long int populacao1, populacao2;

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
    scanf("%lu", &populacao1);  

    printf("Digite a Area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: R$ ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos1);

    printf("\nCarta 1 cadastrada com sucesso!\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 1
    densidade_pop1 = populacao1 / area1;
        
    // Calculando o PIB per capita da carta 1
    pib_per_capita1 = pib1 / populacao1;

    // Exibindo os dados da carta 1
    printf("Dados da Carta %d\n", carta1);
    printf("Codigo da Carta: %c%s\n", estado1, codigo1);  // nesse caso retora %c%s para concatenar um caractere com uma string o %s apresentou erro
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB R$ %.2f bilhões de reais\n", pib1);
    printf("Nº de Pontos Turisticos: %d\n", turiticos1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop1);
    printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita1);

    // Calculando o super poder da carta 1 
    super_poder_carta1 = populacao1 + area1 + pib1 + (float)turiticos1 + pib_per_capita1 + (1 / densidade_pop1);
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
    scanf("%lu", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: R$ ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turiticos2);

    printf("Carta 2 cadastrada com sucesso\n \n"); // Mensagem de cadastro com sucesso

    // Calculando a densidade populacional da carta 2
    densidade_pop2 = populacao2 / area2;

    // Calculando o PIB per capita da carta 2
    pib_per_capita2 = pib2 / populacao2;

    // Exibindo os dados da carta 2
    printf("Dados da Carta %d\n", carta2);
    printf("Codigo da Carta: %c%s\n", estado2, codigo2); // nesse retora %c%s para concatenar um caractere com uma string o %s apresentou erro
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Nº de Pontos Turisticos: %d\n", turiticos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade_pop2);
    printf("PIB per Capita: R$ %.2f de reais\n", pib_per_capita2);

    // Calculando o super poder da carta 2
    super_poder_carta2 = populacao2 + area2 + pib2 + (float)turiticos2 + pib_per_capita2 + (1 / densidade_pop2);
    printf("Super Poder da Carta %d: %.2f\n \n", carta2, super_poder_carta2);

    // comparando os atributos das cartas 1 e 2
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoTuriticos = turiticos1 > turiticos2;
    resultadoDensidadePop = densidade_pop1 < densidade_pop2;
    resultadoPibPerCapita = pib_per_capita1 > pib_per_capita2;
    resultadoSuperPoder = super_poder_carta1 > super_poder_carta2;
   
    // Exibindo o resultado final do jogo e a comparação dos atributos das cartas 1 e 2. 
    printf("Resultado Final do Jogo, Comparação das Cartas\n \n");
    
    printf("Carta 1 x Carta 2\n");
    // Exibe o valor da população das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos da População: %lu > %lu - Vencedor: Carta %d Venceu (%d)\n",  populacao1, populacao2, populacao1 > populacao2 ? carta1 : carta2, resultadoPopulacao); 

    // Exibe o valor da área das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos da Área: %.2f > %.2f - Vencedor: Carta %d Venceu (%d)\n", area1, area2, area1 > area2 ? carta1 : carta2, resultadoArea); 
    
    // Exibe o valor do PIB das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos do PIB: R$ %.2f > R$ %.2f - Vencedor: Carta %d Venceu (%d)\n", pib1, pib2, pib1 > pib2 ? carta1 : carta2, resultadoPib);
    
    // Exibe o valor dos pontos turísticos das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos dos Pontos Turísticos: %d > %d - Vencedor: Carta %d Venceu (%d)\n", turiticos1, turiticos2, turiticos1 > turiticos2 ? carta1 : carta2, resultadoTuriticos);
    
    // Exibe o valor da densidade populacional das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos da Densidade Populacional: %.2f < %.2f - Vencedor: Carta %d Venceu (%d)\n", densidade_pop1, densidade_pop2, densidade_pop1 < densidade_pop2 ? carta1 : carta2, resultadoDensidadePop);
    
    // Exibe o valor do PIB per capita das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos do PIB per Capita: R$ %.2f > R$ %.2f - Vencedor: Carta %d Venceu (%d)\n", pib_per_capita1, pib_per_capita2, pib_per_capita1 > pib_per_capita2 ? carta1 : carta2, resultadoPibPerCapita);
    
    // Exibe o valor do super poder das duas cartas, compara e usa a ? para exibe o vencedor da comparação sem usar estrutura de desição
    printf("Pontos do Super Poder: %.2f > %.2f - Vencedor: Carta %d Venceu (%d)\n", super_poder_carta1, super_poder_carta2, super_poder_carta1 > super_poder_carta2 ? carta1 : carta2, resultadoSuperPoder);
    
    // Mensagem de Encerrando Jogo
    printf("\nFim do Jogo!\n \n");


    /*  Observação na exibição dos resultado o codigo funciona perfeito no programa Visual Studio, a partir da linha 171 para exibir qual carta
        venceu usei a ? para comparar se verdadeiro ou falso e retornar a carta1 : carta2, 
        porem quando a carta1 vence não retorna o numero da carta retorna 0, quando a carta2 vence retorna o numero da carta corretamente,
        ja fiz e refiz e deu o mesmo retorno mas no programa, no Pc funciona e na web não funciona.
        
        só fiquei com essa duvida porque no navegador não funciona e no Pc sim, pode ser alguma extenção instalada no Pc
    */
    return 0;
}