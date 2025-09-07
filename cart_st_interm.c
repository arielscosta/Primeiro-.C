#include <stdio.h>

int main(){
    /*Nesse primeiro arquivo, apenas solicitaremos dados referente a duas cartas do jogo "Super Trunfo", armazenaremos
    essas informações em suas respectívas variáveis e faremaos a impressão dessas informações para que o usuário possa vê-la. */
    printf ("***** Bem vindo ao Super Trunfo**** \n");
    printf("Informe os dados da carta 01 \n");

    //Declarando as variáveis;

    char estado; //Variável que armazenará a letra referente ao Estado;
    char codigo [3]; // Variável que armazenara o código da carta;
    int populacao; // Variável que armazenara a populção total do estado;
    float territorio;// Variável que armazenara a extensão territorial;
    float pib; // Variável que armazenara o PIB;
    float area_perc;  // Variável que armazenara a área percapita;
    float renda_perc;  // Variável que armazenara a renda percapita;
    
    // Solicitando dados ao usuário e armazenando nas variáveis;

        printf("Digite a letra que representa o Estado:"); 
        scanf("%c", &estado); // armazena a letra digitada pelo usuário à variavel estado;

        printf("Digite o código ele deve conter a letra do estado e o numero da carta:");
        scanf("%s", &codigo); // armazena a letra digitada pelo usuário à variavel codigo;

        printf(" Informe a população:");
        scanf("%d", &populacao); // armazena a letra digitada pelo usuário à variavel populacao;

        printf("Informe a extensão territorial:");
        scanf("%f", &territorio); // armazena a letra digitada pelo usuário à variavel território;

        printf("Informe o PIB:");
        scanf("%f", &pib); // armazena a letra digitada pelo usuário à variavel pib;

        area_perc = territorio/populacao;
        renda_perc = pib/populacao;

        // Impressão dos dados coletados;

            printf("A carta 01 será representada pela letra: %c \n", estado); 
            printf("Código: %s \n",codigo);
            printf("População total: %d \n", populacao);
            printf("Extensão territorial: %f \n",territorio);
            printf("PIB: %f \n", pib);
            printf("Área percapita: %f \n", area_perc);
            printf("Renda percapita: %f \n", renda_perc);

return 0;

}