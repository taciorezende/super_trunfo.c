#include <stdio.h>  // Biblioteca padrão de entrada e saída (printf, scanf, etc.)

int main(){  // Função principal do programa
    
    // ---------- Declaração das variáveis da Carta 01 ----------
    char estado1;            // Armazena a letra do estado (A-H)
    char cod1[4];            // Código da carta (ex: A01) → precisa de 3 posições
    char cidade1[20];        // Nome da cidade (20 caracteres)
    int populacao1;          // População da cidade
    float area1;             // Área da cidade em km²
    float pib1;              // PIB da cidade em bilhões de reais
    int pontos_t1;           // Número de pontos turísticos da cidade
    float densidadepopulacional1; // Densidade populacional
    float PIBpercapita1; // Pib per capita
    float SuperPoder1; //(Soma de população, área, PIB, n de pontos tur., PIB per capita e o inverso da dens. popul.

    // ---------- Declaração das variáveis da Carta 02 ----------
    char estado2;            // Armazena a letra do estado (A-H)
    char cod2[4];            // Código da carta (ex: A01)
    char cidade2[20];        // Nome da cidade
    int populacao2;          // População
    float area2;             // Área em km²
    float pib2;              // PIB em bilhões de reais
    int pontos_t2;           // Número de pontos turísticos
    float densidadepopulacional2; // Densidade populacional
    float PIBpercapita2; // Pib per capita
    float SuperPoder2; //(Soma de população, área, PIB, n de pontos tur., PIB per capita e o inverso da dens. popul.

    int resultado_populacao;
    int resultado_area;
    int resultado_PIB;
    int resultado_pontosturisticos;
    int resultado_densidadepop;
    int resultado_pibpercapita;
    int resultado_superpoder;

    // ---------- Entrada de dados da primeira carta ----------
    printf("Vamos Cadastrar a Primeira Carta \n\n");  // Mensagem inicial

    printf("Digite o Estado (A-H): ");  
    scanf(" %c", &estado1);  // Lê um único caractere (estado)

    printf("Digite o Código da Carta (ex: A01): ");  
    scanf("%s", cod1);       // Lê uma string (código da carta)

    printf("Nome da Cidade: ");  
    scanf("%s", cidade1);    // Lê o nome da cidade (sem espaços)

    printf("Digite a População: ");  
    scanf("%d", &populacao1); // Lê um número inteiro (população)

    printf("Digite a Área (em km²): ");  
    scanf("%f", &area1);     // Lê um número decimal (área)

    printf("Digite o PIB (em bilhões de reais): ");  
    scanf("%f", &pib1);      // Lê um número decimal (PIB)

    printf("Digite o Número de Pontos Turísticos: ");  
    scanf("%d", &pontos_t1); // Lê um número inteiro (pontos turísticos)

    // ---------- Exibição dos dados da primeira carta ----------
    printf("\n~~~~~~ CARTA 1 ~~~~~~\n\n");  
    printf("Estado: %c\n", estado1);                // Mostra o estado
    printf("Código: %s\n", cod1);                   // Mostra o código
    printf("Nome da Cidade: %s\n", cidade1);        // Mostra o nome da cidade
    printf("População: %d\n", populacao1);          // Mostra a população
    printf("Área: %.2f km²\n", area1);              // Mostra a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);   // Mostra o PIB com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontos_t1); // Mostra pontos turísticos
   
    //Calculos da Carta
    densidadepopulacional1 = populacao1/area1;
    printf("Densidade Populacional %.2f hab/km² \n", densidadepopulacional1);
    PIBpercapita1 = (pib1*1e9)/populacao1;
    printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
    SuperPoder1 = (float) populacao1 + area1 + pib1 + PIBpercapita1 + pontos_t1 + (1.0 / densidadepopulacional1);
    printf("Super Poder1: %lf \n",SuperPoder1); // Mostra Superpoder Carta 1
    // ---------- Entrada de dados da segunda carta ----------
    printf("\nExcelente, Vamos Cadastrar a Segunda Carta\n\n");  

    printf("Digite o Estado (A-H): ");  
    scanf(" %c", &estado2);  // Lê o estado da carta 2

    printf("Digite o Código da Carta (ex: A01): ");  
    scanf("%s", cod2);       // Lê o código da carta 2

    printf("Nome da Cidade: ");  
    scanf("%s", cidade2);    // Lê o nome da cidade da carta 2

    printf("Digite a População: ");  
    scanf("%d", &populacao2); // Lê a população da carta 2

    printf("Digite a Área (em km²): ");  
    scanf("%f", &area2);     // Lê a área da carta 2

    printf("Digite o PIB (em bilhões de reais): ");  
    scanf("%f", &pib2);      // Lê o PIB da carta 2

    printf("Digite o Número de Pontos Turísticos: ");  
    scanf("%d", &pontos_t2); // Lê os pontos turísticos da carta 2

    // ---------- Exibição dos dados da segunda carta ----------
    printf("\n~~~~~~ CARTA 2 ~~~~~~\n\n");  
    printf("Estado: %c\n", estado2);                // Mostra o estado da carta 2
    printf("Código: %s\n", cod2);                   // Mostra o código da carta 2
    printf("Nome da Cidade: %s\n", cidade2);        // Mostra a cidade da carta 2
    printf("População: %d\n", populacao2);          // Mostra a população
    printf("Área: %.2f km²\n", area2);              // Mostra a área
    printf("PIB: %.2f bilhões de reais\n", pib2);   // Mostra o PIB
    printf("Número de Pontos Turísticos: %d\n", pontos_t2); // Mostra pontos turísticos
   
    // Calculos da carta 2
    densidadepopulacional2 = populacao2/area2; 
    printf("Densidade Populacional %.2f hab/km² \n", densidadepopulacional2);
    PIBpercapita2 = (pib2*1000000000)/populacao2;
    printf("PIB per Capita: %.2f reais\n ",PIBpercapita2);
    SuperPoder2 = (float) populacao2 + area2 + pib2 + PIBpercapita2 + pontos_t2 + (1.0 / densidadepopulacional2);
    printf("Super Poder1: %lf \n",SuperPoder2); // Mostra Superpoder Carta 1

    // ---------- Mensagem final ----------
    printf("\nCartas Cadastradas Com Sucesso!\n\n"); 
    
    
    // Comparação de Cartas:

    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_PIB = pib1 > pib2;
    resultado_pontosturisticos = pontos_t1 > pontos_t2;
    resultado_densidadepop = densidadepopulacional1 > densidadepopulacional2;    
    resultado_pibpercapita = PIBpercapita1> PIBpercapita2;
    resultado_superpoder = SuperPoder1 > SuperPoder2;

    //Exibindo resultado das comparaçoes

    printf("População: Carta 1 venceu(%d)\n", resultado_populacao);
    printf("Área: Carta 1 venceu (%d)\n",resultado_area);
    printf("PIB: Carta 1 venceu(%d)\n",resultado_PIB);
    printf("Pontos turisticos: Carta 1 venceu(%d)\n", resultado_pontosturisticos);
    printf("Densidade Populacional: Carta 1 venceu(%d)\n",resultado_densidadepop);
    printf("PIB per Capita: Carta 1 venceu(%d)\n",resultado_pibpercapita);
    printf("Super Poder Carta 1 venceu(%d)\n", resultado_superpoder);
    


    return 0; // Finaliza o programa
}
