#include <stdio.h>

int main(){

char Estado1,Estado2;
char codigo1[10],codigo2[10];
char cidade1[56],cidade2[50];
int populacao1,populacao2;
float area1,area2, pib1 = 1.1,pib2;
int x1,x2;
float percapita1,percapita2,dp1,dp2;

printf("***\n\nDesafio Super Trunfo!***\n\n");

printf("Digite a sigla do estado: ");
scanf("%c", &Estado1);

printf("codigo da carta: ");
scanf(" %s",codigo1);

printf(" Digite nome da cidade: ");
scanf("%s", cidade1);

printf("Digite o numero de habitantes: ");
scanf("%d",&populacao1);

printf("Digite a area: ");
scanf("%f", &area1);

printf("Digite o pib: ");
scanf("%f", &pib1);

printf("numeros de pontos turisticos: ");
scanf("%d", &x1);

percapita1 = (float)populacao1 / pib1;
dp1 = (float)area1 / populacao1;

printf("\n");

printf("Digite a sigla do estado2: ");
scanf(" %c", &Estado2);

printf("codigo da carta2: ");
scanf("%s", codigo2);

printf(" Digite nome da cidade2: ");
scanf("%s", cidade2);

printf("Digite o numero de habitantes2: ");
scanf("%d",&populacao2);

printf("Digite a area2: ");
scanf("%f", &area2);

printf("Digite o pib2: ");
scanf("%f", &pib2);

printf("numeros de pontos turisticos2: ");
scanf("%d", &x2);

percapita2 = (float)populacao2 / pib2;
dp2 = (float)area2 / populacao2;


printf("Carta 1:\n");
printf("\nestado: %c\n", Estado1);
printf("codigo: %s\n", codigo1);
printf("Cidade: %s\n",cidade1);
printf("Populacao: %d mil\n",populacao1);
printf("Area: %.3f mil km²\n", area1);
printf("Pib: %.1f trilões\n", pib1);
printf("Pib per capita: %.2f\n",percapita1);
printf("Desidade populacional: %.2f\n",dp1);
printf("Pontos turisticos: %d\n\n",x1);


printf("\nCarta 2:\n");
printf("Estado: %c\n",Estado2);
printf("codigo: %s\n", codigo2);
printf("Cidade: %s\n",cidade2);
printf("Populacao: %d mil\n",populacao2);
printf("Area: %.3f mil km²\n", area2);
printf("Pib: %.1f trilões\n", pib2);
printf("Pib per capita: %.2f\n",percapita2);
printf("Desidade populacional: %.2f\n",dp2);
printf("Pontos turisticos: %d\n",x2);






return 0;

}