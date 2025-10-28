#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
   char Estado_1, Estato_2;
   char Codigo_Carta_1, Codigo_Carta_2;
   char Cidade_1, Cidade_2;
   int Populacao_1, População_2;
   float Area_1, Area_2;
   float PIB_1, PIB_2;
   int Turismo_1, Turismo2;


  // Área para entrada de dados

  printf("Digite de uma letra de A a H para representar o Estado:\n");
  scanf(" %c", &Estado_1);

  printf(" letra do estado seguida de um número de 01 a 04 (ex: A01, B03);");
  scanf(" %d", &Codigo_Carta_1);

  printf(" nome da cidade:\n");
  scanf(" %c", &Cidade_1);

  printf("área da cidade em quilômetros quadrados:\n");
  scanf(" %f", &Area_1);

  printf("população da cidade:\n");
  scanf(" %d", &Populacao_1);

  printf("PIB da cidade em bilhões de reais:\n");
  scanf(" %f", &PIB_1);

  printf("índice de turismo da cidade (0 a 100):\n");
  scanf(" %d", &Turismo_1);

  

  printf("Você digitou: %c\n", Estado_1);
  printf("Código da carta: %d\n", Codigo_Carta_1);
  printf("Cidade: %c\n", Cidade_1);
  printf("Área: %.2f km²\n", Area_1);
  printf("População: %d habitantes\n", Populacao_1);
  printf("PIB: R$ %.2f bilhões\n", PIB_1);
  printf("Índice de turismo: %d\n", Turismo_1);
  // Área para exibição dos dados da cidade

return 0;
} 
