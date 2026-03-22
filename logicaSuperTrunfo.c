#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
     char estado1, estado2;
     char codigo1[4], codigo2[4];
     char cidade1[50], cidade2[50];
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     int pontos1, pontos2;
    
    // Área para entrada de dados da carta 1:
     printf("CADASTRO DA CARTA 1\n");
     printf("Digite o estado:\n");
     scanf(" %c", &estado1);
     printf("Digite o codigo:\n");
     scanf(" %s", codigo1); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a cidade:\n");
     scanf(" %s", cidade1); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a populacao:\n");
     scanf(" %d", &populacao1);
     printf("Digite a Area:\n");
     scanf(" %f", &area1);
     printf("Digite o PIB:\n");
     scanf(" %f", &pib1);
     printf("Digite os pontos turisticos:\n");
     scanf(" %d", &pontos1);
     printf("\n"); //Linha em branco
  // Área para entrada de dados da carta 2:
     printf("CADASTRO DA CARTA 2\n");
     printf("Digite o estado:\n");
     scanf(" %c", &estado2);
     printf("Digite o codigo:\n");
     scanf(" %s", codigo2); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a cidade:\n");
     scanf(" %s", cidade2); //STRING NÃO PRECISA DE & NO SCANF
     printf("Digite a populacao:\n");
     scanf(" %d", &populacao2);
     printf("Digite a Area:\n");
     scanf(" %f", &area2);
     printf("Digite o PIB:\n");
     scanf(" %f", &pib2);
     printf("Digite os pontos turisticos:\n");
     scanf(" %d", &pontos2);
     printf("\n");
     //Área de cálculos:
     float densidadePop1 = populacao1 / area1, densidadePop2 = populacao2 / area2;
     float pib_per_capita1 = pib1 / populacao1, pib_per_capita2 = pib2 / populacao2;
     float superPoder1 = populacao1 + area1 + pib1 + pontos1 + densidadePop1 + pib_per_capita1;//SUPER PODER
     float superPoder2 = populacao2 + area2 + pib2 + pontos2 + densidadePop2 + pib_per_capita2; //SUPER PODER
     //Comparação de atributos emostrando cada atributo vencedor
     printf("\n===COMPARACAO DE ATRIBUTOS===\n");
     printf("ATRIBUTO (POPULACAO)\n");
     if(populacao1 > populacao2){
      printf("carta 1 venceu (populacao maior)\n");
     }else if(populacao2 > populacao1){
      printf("carta 2 venceu (populacao maior)\n");
     }else{
      printf("###EMPATE!###\n");
     }
     printf("\n");
     printf("ATRIBUTO: AREA.\n");
     if(area1 > area2){
      printf("carta 1 venceu (Area maior)\n");
     }else if(area2 > area1){
      printf("carta 2 venceu (Area maior)\n");
     }else{
      printf("###EMPATE!###\n");
     }    
     printf("\n");
     printf("ATRIBUTO: PIB.\n");
     if(pib1 > pib2){
      printf("carta 1 venceu (PIB maior)\n");
     }else if(pib2 > pib1){
      printf("carta 2 venceu (PIB maior)\n");
     }else{
      printf("###EMPATE!###\n");
     }
     printf("\n");
     printf("ATRIBUTO: DENSIDADE POPULACIONAL.\n");
     printf("MENOR DENSIDADE POPULACIONAL VENCE!\n");
     if(densidadePop1 < densidadePop2){
      printf("Carta 1 venceu (Menor densidade pop.)\n");
     }else if(densidadePop2 < densidadePop1){
      printf("Carta 2 venceu (Menor densidade pop)\n");
     }else{
      printf("###EMPATE!###\n");
     }
     printf("\n");
     printf("ATRIBUTO: PIB PER CAPITA.\n");
     if(pib_per_capita1 > pib_per_capita2){
      printf("carta 1 venceu (PIB per capita maior)\n");
     }else if(pib_per_capita2 > pib_per_capita1){
      printf("carta 2 venceu (PIB per capita maior)\n");
     }else{
      printf("###EMPATE!###\n");
     }
      printf("\n");
      printf("ATRIBUTO: PONTOS TURISTICOS.\n");
     if(pontos1 > pontos2){
      printf("carta 1 venceu (Tem mais pontos turisticos)\n");
     }else if(pontos2 > pontos1){
      printf("carta 2 venceu (Tem mais pontos turisticos)\n");
     }else{
      printf("###EMPATE!###\n");
     }
     printf("\n");
     printf("ATRIBUTO: SUPER PODER.\n");
     if(superPoder1 > superPoder2){
      printf("carta 1 venceu (Super poder maior)\n");
     }else if(superPoder2 > superPoder1){
      printf("carta 2 venceu (Super poder maior)\n");
     }else{
      printf("###EMPATE!###\n");
     }
    //DECLARANDO A VARIÁVEL "OPCÃO" E INCLUINDO O MENU SWITCH:
    int opcao;

    printf("DIGITE UMA OPÇÃO:\n");
    printf("1. COMPARACAO DE ATRIBUTOS\n");
    printf("2. COMPARAR TODOS OS ATRIBUTOS.\n");
    printf("3. SAIR.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        int subopcao; 
        printf("SELECIONE O ATRIBUTO QUE DESEJA COMPARAR:\n");
        printf("1. POPULACAO.\n");
        printf("2. AREA.\n");
        printf("3. PIB.\n");
        printf("4. DENSIDADE POP.\n");
        printf("5. PIB. PER CAPITA\n");
        printf("6. PONTOS TURISTICOS.\n");
        printf("7. SUPER PODER.\n");
        scanf("%d", &subopcao);
        
        break;

        switch (subopcao)
        {
        case 1:
            printf("COMPARANDO POPULACAO...\n");
            if (populacao1 > populacao2){
                printf("CARTA 1 VENCEU");
            }else if (populacao2 > populacao1){
                printf("CARTA 2 VENCEU");
            }else{
                printf("===EMPATE===\n");
            }
            }
            break;

            case 2:
            printf("COMPARANDO AREA...\n");
            if(area1 > area2){
                printf("CARTA 1 VENCEU");
            }else if(area2 > area1){
                printf("CARTA 2 VENCEU!");
            }else{
                printf("===EMPATE!===\n");
            }
            }
            break;
        
        default:
            break;
        }
        break;
    case 2:
        printf("COMPARANDO TODOS OS ATRIBUTOS\n");
        break;
    case 3:
        printf("SAINDO...");
        break;
    default:
        printf("OPCAO INVALIDA!\n");
        break;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
