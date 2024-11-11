//primeira parte de inserção de dados pra o desafio super trunfo
#include <stdio.h>

int main() {


    char nome [50];
    char codigo_da_cidade [10];
    int pontos_turisticos; //numerro de pontos turisticcos
    float area;     // em Km²
    int pib;        // Em milhões
    int populacao; //Em milhôes
    
    printf("Insira os dados conforme solicitado \n");
    printf("Digite o código da cidade: \n");
    scanf("%s", &codigo_da_cidade);


    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);
    
    printf("Quantos pontos turisticos há na cidade? \n");
    scanf("%d", &pontos_turisticos);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Qual é o PIB? \n");
    scanf("%d", &pib);

    printf("Qual a populção da cidade? \n");
    scanf("%f", &populacao);


        printf("Código da cidade: %s \n", codigo_da_cidade);
        printf("Cidade: %s \n", nome);
        printf("Pontos turisticos: %d \n", pontos_turisticos);
        printf("Área demográfica: %f Km² \n", area);
        printf("PIB da cidade: %d Mi \n", pib);
        printf("A população é: %f Mi \n", populacao);
       



    return 0;
}