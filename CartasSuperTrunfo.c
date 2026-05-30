#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   
    char estado1 = 'B';
    char codigo1[4] = "B01";
    char nomedacidade1[30] = "Salvador";
    int populacao1 = 2897545;
    float area1 = 693;
    float pib1 = 125000000;
    int pontosturisticos1 = 15;


    char estado2 = 'S';
    char codigo2[4] = "S01";
    char nomedacidade2[30] = "São Paulo";
    int populacao2 = 11866933;
    float area2 = 1521;
    float pib2 = 450000000;
    int pontosturisticos2 = 20;
  



    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);
  
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade1); 

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);




    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
  
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade2); 

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);


    return 0;
}

