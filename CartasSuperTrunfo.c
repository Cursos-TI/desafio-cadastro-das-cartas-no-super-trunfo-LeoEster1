#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(void) {
    // Sugestãoparadas : Defina variáveis separa cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   char Estado;
   char Codigo[20];
   char cidade[40];
   int Populacao;
  int Area;
   float PIB;
   int Pontos_Turisticos;
    
   printf("Digite a sigla do estado: ");
   scanf(" %c", &Estado);
  

   printf("Digite o codigo da carta: ");
   scanf("%s",Codigo);
 

   printf("Digite a cidade: ");
   scanf("%s",cidade);
    

   printf("Digite o numero de habitantes: ");
   scanf("%d",&Populacao);


   printf("Digite a area do estado: ");
   scanf("%d",&Area);


   printf("Numeros de Pontos Turisticos: ");
   scanf("%d",&Pontos_Turisticos); 
  

   printf("PIB do estado: ");
   scanf("%f",&PIB);

   printf("Estado: %c\n", Estado);
   printf("Codigo: %s\n", Codigo);
   printf("Cidade: %s\n",cidade);
   printf("População: %d mil habitantes\n",Populacao);
   printf("Área: %d mil km quadrados\n",Area);
   printf("Pontos Turisticos: %d\n",Pontos_Turisticos);
   printf("PIB: %.1f trilhões de reais\n", PIB);
   return 0;
}
