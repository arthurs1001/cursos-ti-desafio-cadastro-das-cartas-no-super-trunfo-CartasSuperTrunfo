#include <stdio.h>

int main() {

 //variaveis da carta 01
char estado;
char codigo[10];
char cidade[50];
int população;
int pontos_turisticos;
float área;
float PIB;

//variaveis da carta 02
char Estado;
char Codigo[10];
char Cidade[50];
int População;
int Pontos_turisticos;
float Area;
float Pib;

printf("carta 1:\n");

printf("digite o estado (apenas uma letra):");
scanf("%c",&estado);

printf("digite o codigo:");
scanf("%s",codigo);

printf("digite a cidade:");
scanf("%s",cidade);

printf("digite a população:");
scanf("%d",&população);

printf("digite os pontos turísticos:");
scanf("%d",&pontos_turisticos);

printf("digite a area:");
scanf("%f",&área);

printf("digite o PIB:");
scanf(" %f",&PIB);

//carta 2 

printf("\ncarta 2:\n");

printf("digite o estado (apenas uma letra):");
scanf(" %c",&Estado);

printf("digite o codigo:");
scanf("%s",Codigo);

printf("digite a cidade:");
scanf("%s",Cidade);

printf("digite a população:");
scanf("%d",&População);

printf("digite os pontos turísticos:");
scanf("%d",&Pontos_turisticos);

printf("digite a area:");
scanf("%f",&Area);

printf("digite o PIB:");
scanf(" %f",&Pib);

printf("\nresultados:\n");

//carta 01
printf("\ncarta 01\n");

printf("estado: %c\n" ,estado); 
printf("codigo: %s\n" ,codigo);
printf("cidade: %s\n" ,cidade);
printf("população: %d\n" ,população);
printf("pontos turísticos: %d\n" ,pontos_turisticos);
printf("área: %.2f\n" ,área);
printf("PIB: %.2f\n" ,PIB);

//carta 02
printf("\ncarta 02\n");

printf("estado: %c\n" ,Estado);
printf("codigo: %s\n" ,Codigo);
printf("cidade: %s\n" ,Cidade);
printf("população: %d\n" ,População);
printf("pontos turísticos: %d\n" ,Pontos_turisticos);
printf("área: %.2f\n" ,Area);
printf("PIB: %.2f\n" ,Pib);


    return 0;
}
