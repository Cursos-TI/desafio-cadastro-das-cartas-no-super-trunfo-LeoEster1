#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(void) {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   char Estado = 'C';
   char Codigo[10]= "A01";
   char cidade[20] = "Fortaleza";
   int Populacao = 123434;
  float Area = 1521.22;
   float PIB = 321.78;
   int Pontos_Turisticos = 50;
    
   printf("Estado: ");
   scanf(" %c", &Estado);
   
   printf("Codigo: ");
   scanf("%s", Codigo);
    
   printf("Cidade: ");
   scanf("%s",cidade);
    
   printf("População: ");
   scanf("%d", &Populacao);

   printf("Área: ");
   scanf("%f", &Area);

   printf("PIB: ");
   scanf("%f", &PIB);
   
   printf("Pontos Turisticos: ");
   scanf("%d", &Pontos_Turisticos);

   
   
   
   
   
   
   
   
   
   
   
   
   
   return 0;
}
