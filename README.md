# Desafio Super Trunfo - Países - Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas - Atualizado: 13/03/2025

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, foi criado o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.  Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas com os seguintes atributos:

*   População (`int`)
*   Área (`float`)
*   PIB (`float`)
*   Número de pontos turísticos (`int`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, Foi expandido o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, foi implementado a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.

*   Fim da primeira etapa: Tema 1 - Super Trunfo em c: Fundamentos e Técnicas Avançadas 
----------------------------------------------------------------------------------------

## Desafio Super Trunfo - Países - Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo - Atualizado 13/03/2025

Tema 1 foi criado o cadastro e a exibição das cartas com a implementação da comparação das cartas e o calculo de super poder.
Tema 2 será implementado e desenvolvido a logica do jogo.

## 🎮 Desafio: Nível Novato - Comparando Cartas do Super Trunfo

No Nível Novato, foi implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). Este desafio é uma continuação do desafio do tema anterior, onde foi desenvolvido o cadastro das cartas e foi reaproveitado o código de cadastro de cartas que já foi desenvolvido. O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.

🚩 **Objetivo**  Usar a estrutura de decisão para comparar as duas cartas com os adicionando novos atributos:
 
*   Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
 
*   Densidade Populacional: População / Área
 
*   PIB per capita: PIB / População
 
⚙️ **Funcionalidades do Sistema:**

*   Comparar um atributo escolhido: foi implementado a comparação dos atributos um a um (População, Área, PIB, Pnto Turistico, Densidade Populacional, PIB per capita, Super Poder) para realizar a comparação entre as duas cartas, exibido a comparação e qual carta venceu. 
 
*   Determinado a carta vencedora:
 
*   Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
 
*   Para Densidade Populacional, a carta com o menor valor vence.

📥 **Entrada** e 📤 **Saída de Dados:**
 
*   Exibido o resultado final da comparação: O programa exibi, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo.
Requisitos não funcionais

## 🛡️ Desafio: Nível Aventureiro - Interatividade no Super Trunfo

No nível Aventureiro, Foi emplementado um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, foi usado estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. 

🆕 **Diferença em relação ao Nível Novato:**

*   **Menu Interativo:**
    *   Modificado a estrutura de comparação do nível anterios que comparava com estrutura de decisão if-else
    *   Implementado a opção de escolha com o switch e a estrutura de decisão alinhada if-else dentro de if-else

⚙️ **Funcionalidades do Sistema:**

*   O sistema após o cadastros das cartas dará ao usuário a opção de escolher qual atributo deve ser usado para comparar as duas cartas.
*   Após escolhas do atributos serão exibidos a carta vencedora o nome da cidade e os valores do atributo escolhido e também os dados da carta derrotada.
*   No caso de Empate os dados também serão exibidos
*   Caso seja digitado uma valor fora das opções, a opção será inválida

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anterios e mais a opção escolhida pelo usuário.
*   A saída exibirá a carta vencedora, o nome da cidade e também os valores do atributo escolhido.
*   No caso de Empate os dados também serão exibidos.
*   Caso seja digitado uma valor fora das opções, a opção será inválida.