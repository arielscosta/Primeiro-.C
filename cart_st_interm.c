#include <stdio.h>

int main(){
    /*Nesse primeiro arquivo, apenas solicitaremos dados referente a duas cartas do jogo "Super Trunfo", armazenaremos
    essas informações em suas respectívas variáveis e faremaos a impressão dessas informações para que o usuário possa vê-la. */
    printf ("***** Bem vindo ao Super Trunfo**** \n");
    printf("Informe os dados da carta 01 \n");

    //Declarando as variáveis;

    char estado1; //Variável que armazenará a letra referente ao Estado;
    char codigo1 [3]; // Variável que armazenara o código da carta;
    char cidade1 [20];
    int populacao1; // Variável que armazenara a populção total do estado;
    float territorio1;// Variável que armazenara a extensão territorial;
    float pib1; // Variável que armazenara o PIB;
    int pont_turis1;
    float area_perc1;  // Variável que armazenara a área percapita;
    float renda_perc1;  // Variável que armazenara a renda percapita;
    
    // Solicitando dados ao usuário e armazenando nas variáveis;

        printf("Digite a letra que representa o Estado:"); 
        scanf("%c", &estado1); // armazena a letra digitada pelo usuário à variavel estado;

        printf("Digite o código ele deve conter a letra do estado e o numero da carta:");
        scanf("%s", &codigo1); // armazena a letra digitada pelo usuário à variavel codigo;

        printf(" Nome da cidade: ");
        scanf("%s", &cidade1);

        printf(" Informe a população:");
        scanf("%d", &populacao1); // armazena a letra digitada pelo usuário à variavel populacao;

        printf("Informe a extensão territorial:");
        scanf("%f", &territorio1); // armazena a letra digitada pelo usuário à variavel território;

        printf("Informe o PIB:");
        scanf("%f", &pib1); // armazena a letra digitada pelo usuário à variavel pib;

        printf("Quantidade de pontos turisticos: ");
        scanf("%d", &pont_turis1);

        area_perc1 = populacao1/territorio1;
        renda_perc1 = populacao1/pib1;

    printf("**** Digite as informações da carta 02**** \n");

    char estado2; //Variável que armazenará a letra referente ao Estado;
    char codigo2 [3]; // Variável que armazenara o código da carta;
    char cidade2 [20];
    int populacao2; // Variável que armazenara a populção total do estado;
    float territorio2;// Variável que armazenara a extensão territorial;
    float pib2; // Variável que armazenara o PIB;
    int pont_turis2;
    float area_perc2;  // Variável que armazenara a área percapita;
    float renda_perc2;  // Variável que armazenara a renda percapita;
    
    // Solicitando dados ao usuário e armazenando nas variáveis;

        printf("Digite a letra que representa o Estado:"); 
        scanf("%c", &estado2); // armazena a letra digitada pelo usuário à variavel estado;

        printf("Digite o código ele deve conter a letra do estado e o numero da carta:");
        scanf("%s", &codigo2); // armazena a letra digitada pelo usuário à variavel codigo;

        printf(" Nome da cidade: ");
        scanf("%s", &cidade2);

        printf(" Informe a população:");
        scanf("%d", &populacao2); // armazena a letra digitada pelo usuário à variavel populacao;

        printf("Informe a extensão territorial:");
        scanf("%f", &territorio2); // armazena a letra digitada pelo usuário à variavel território;

        printf("Informe o PIB:");
        scanf("%f", &pib2); // armazena a letra digitada pelo usuário à variavel pib;

        printf("Quantidade de pontos turisticos: ");
        scanf("%d", &pont_turis2);

        area_perc2 = populacao2/territorio2;
        renda_perc2 = populacao2/pib2;

        // Impressão dos dados coletados;
        
            printf("A carta 01 será representada pela letra: %c \n", estado1); 
            printf("Código: %s \n",codigo1);
            printf("Nome da Cidade: %s \n", cidade1);
            printf("População total: %d \n", populacao1);
            printf("Extensão territorial: %f \n",territorio1);
            printf("PIB: %f \n", pib1);
            printf("Quantidade de pontos turisticos: %d \n", pont_turis1);
            printf("Área percapita: %f \n", area_perc1);
            printf("Renda percapita: %f \n", renda_perc1);

            printf("A carta 01 será representada pela letra: %c \n", estado2); 
            printf("Código: %s \n",codigo2);
            printf("Nome da Cidade: %s \n", cidade2);
            printf("População total: %d \n", populacao2);
            printf("Extensão territorial: %f \n",territorio2);
            printf("PIB: %f \n", pib2);
            printf("Quantidade de pontos turisticos: %d \n", pont_turis2);
            printf("Área percapita: %f \n", area_perc2);
            printf("Renda percapita: %f \n", renda_perc2);

return 0;

}