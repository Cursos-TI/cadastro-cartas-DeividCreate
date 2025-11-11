#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // declaração das variáveis para a Carta 1 
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float PIB_Capital1;
    float super_poder_carta1;


    // declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
     unsigned long  populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float PIB_Capital2;
    float super_poder_carta2;


  // ====== Entrada de dados da Carta 1 ======
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra do estado (A a H): "); //Imprime a mensagem para o usuário
    scanf(" %c", &estado1); //Lê a entrada do usuário e armazena na variável estado1

    printf("Digite o código da carta, letra do estado seguido de um número de 01 a 04 (ex: A01): "); //Imprime a mensagem para o usuário
    scanf("%s", codigo1);//Lê a entrada do usuário e armazena na variável codigo1

    printf("Digite o nome da cidade: ");//Imprime a mensagem para o usuário
    scanf(" %[^\n]", cidade1);//Lê a entrada do usuário e armazena na variável cidade1

    printf("Digite a população: ");//Imprime a mensagem para o usuário
    scanf("%lu", &populacao1);//Lê a entrada do usuário e armazena na variável populacao1

    printf("Digite a área em km²: ");//Imprime a mensagem para o usuário
    scanf("%f", &area1);//Lê a entrada do usuário e armazena na variável area1

    printf("Digite o PIB em bilhões de reais: ");//Imprime a mensagem para o usuário
    scanf("%f", &pib1);//Lê a entrada do usuário e armazena na variável pib1

    printf("Digite o número de pontos turísticos: ");//Imprime a mensagem para o usuário
    scanf("%d", &pontos_turisticos1);//Lê a entrada do usuário e armazena na variável pontos_turisticos1

    // ====== Entrada de dados da Carta 2 ======
    printf("\n=== Cadastro da Carta 2 ===\n");//Imprime a mensagem para o usuário

    printf("Digite a letra do estado (A a H): ");//Imprime a mensagem para o usuário
    scanf(" %c", &estado2);//Lê a entrada do usuário e armazena na variável estado2

    printf("Digite o código da carta, letra do estado seguido de um número de 01 a 04 (ex: A01): ");//Imprime a mensagem para o usuário
    scanf("%s", codigo2);//Lê a entrada do usuário e armazena na variável codigo2

    printf("Digite o nome da cidade: ");//Imprime a mensagem para o usuário
    scanf(" %[^\n]", cidade2);//Lê a entrada do usuário e armazena na variável cidade2

    printf("Digite a população: ");//Imprime a mensagem para o usuário
    scanf("%lu", &populacao2);//Lê a entrada do usuário e armazena na variável populacao2

    printf("Digite a área em km²: ");//Imprime a mensagem para o usuário
    scanf("%f", &area2);//Lê a entrada do usuário e armazena na variável area2

    printf("Digite o PIB em bilhões de reais: ");//Imprime a mensagem para o usuário
    scanf("%f", &pib2);//Lê a entrada do usuário e armazena na variável pib2

    printf("Digite o número de pontos turísticos: ");//Imprime a mensagem para o usuário
    scanf("%d", &pontos_turisticos2);//Lê a entrada do usuário e armazena na variável pontos_turisticos2



     
     densidade_populacional1 = (float)populacao1 / area1; //Calcular a Densidade Populacional Carta 1 

     densidade_populacional2 = (float)populacao2 / area2; //Calcular a Densidade Populacional Carta 2

     
     PIB_Capital1 = pib1 / (float)populacao1; // Calcular o PIB per Capital Carta 1

     PIB_Capital2 = pib2 / (float)populacao2;// Calcular o PIB per Capital Carta 1


        // Super Poder = soma de todos os atributos numéricos + inverso da densidade
     super_poder_carta1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + PIB_Capital1 + (1 / densidade_populacional1);
     super_poder_carta2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + PIB_Capital2 + (1 / densidade_populacional2);


    // ====== Exibição dos dados ======
    printf("\n=============================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.4f reais\n", PIB_Capital1);
    printf("Super Poder: %.2f\n",super_poder_carta1);




    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.4f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.4f reais\n", PIB_Capital2);
    printf("Super Poder: %.2f\n",super_poder_carta2);
    printf("=============================\n");

//  Comparações 
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIB_Capital1 > PIB_Capital2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder_carta1 > super_poder_carta2);


return 0;
}