#include <stdio.h>

int main(){ 
 // Mensagem inicial
    printf("=============================================\n");
    printf(" Bem-vindo ao desafio \"Super Trunfo - Paises\"!\n");
    printf(" No Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte.\n");
    printf(" Tema: Cidades de Paises - compare os atributos!\n");
    printf(" Empresa: MateCheck\n");
    printf("=============================================\n\n");

//-------- Carta 01 --------


    char estado1;
    char codigodacarta1[4];
    char nomedacidade1[50];
    unsigned long int populacao1;
    float area1, pib1_bilhoes;
    int numerodepontosturisticos1;
    
    
    //-------- Carta 02 --------

    char estado2;
    char codigodacarta2[4];
    char nomedacidade2[50];
    unsigned long int populacao2;
    float area2, pib2_bilhoes;
    int numerodepontosturisticos2;

    //--------Entrada dos dados da carta 01 

    printf("Digite os Dados da Carta 01:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01):\n ");
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade:\n ");
    scanf(" %49[^\n]" ,nomedacidade1);

    printf ("populacao cidade 01:(>=0)\n");
    scanf ("%lu", &populacao1);

    printf ("area1 (km²)\n:");
    scanf ("%.2f", &area1);

    printf("PIB da cidade 1:(em bilhoes de R$)\n");
    scanf("%.2f", &pib1_bilhoes);

    printf("Numero de pontos turisticos 1:\n");
    scanf("%i", &numerodepontosturisticos1);

    //--------Entrada dos dados da carta 02

    printf("Digite os Dados da Carta 02:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A02):\n ");
    scanf("%s", codigodacarta2);

    printf("Nome da Cidade 02:\n ");
    scanf(" %49[^\n]",nomedacidade2);

    printf ("populacao cidade 02:(>=0)\n");
    scanf ("%lu", &populacao2);

    printf ("area 2 (km²):\n");
    scanf ("%2.f", &area2);

    printf("PIB da cidade 2:\n");
    scanf("%.2f", &pib2_bilhoes);

    printf("Numero de pontos turisticos 2:\n");
    scanf("%i", &numerodepontosturisticos2);

/* ======================= CALCULOS ======================= */
    // Densidade (populacao /area) 

     float densidade1 = (float)populacao1 /area1;
     float densidade2= (float)populacao2 / area2;
   
      float pib_per_capita1 = (pib1_bilhoes * 1000000000) / (float)populacao1;
    float pib_per_capita2 = (pib2_bilhoes * 1000000000) / (float)populacao2;

    // Super Poder 
    float super_poder1 = (float)populacao1 + area1 + pib1_bilhoes +
                         (float)numerodepontosturisticos1  + pib_per_capita1 + (1 / densidade1);

    float super_poder2 = (float)populacao2 + area2 + pib2_bilhoes +
                         (float)numerodepontosturisticos2 + pib_per_capita2 + (1 / densidade2);

    // ======  DADOS ======
    printf("\n=== RESUMO DAS CARTAS ===\n");
    printf("Carta 1: %s (%s-%c)\n", nomedacidade1, codigodacarta1, estado1);
    printf(" Pop=%lu  Area=%.2f  PIB=%.2f bi  Pontos=%d\n", populacao1, area1, pib1_bilhoes, numerodepontosturisticos1);
    printf(" Densidade=%.2f  PIB per capita=%.2f  Super=%.2f\n", densidade1, pib_per_capita1, super_poder1);

    printf("\nCarta 2: %s (%s-%c)\n", nomedacidade2, codigodacarta2, estado2);
    printf(" Pop=%lu  Area=%.2f  PIB=%.2f bi  Pontos=%d\n", populacao2, area2, pib2_bilhoes, numerodepontosturisticos2);
    printf(" Densidade=%.2f  PIB per capita=%.2f  Super=%.2f\n", densidade2, pib_per_capita2, super_poder2);

    // ======  COMPARACOES ======
    int resultado_populacao        = (populacao1 > populacao2);
    int resultado_area             = (area1 > area2);
    int resultado_pib              = (pib1_bilhoes > pib2_bilhoes);
    int resultado_pontos           = (numerodepontosturisticos1 > numerodepontosturisticos2);
    int resultado_densidade        = (densidade1 < densidade2); // MENOR vence
    int resultado_pib_per_capita   = (pib_per_capita1 > pib_per_capita2);
    int resultado_super_poder      = (super_poder1 > super_poder2);

    const char *mensagem[2] = {"Carta 2 venceu (0)", "Carta 1 venceu (1)"};
// Saída de dados resultado final 
printf("\n\n========== RESULTADO FINAL SUPER TRUNFO CIDADES =============\n\n");
    
    printf("\n=== Comparacao de Cartas ===\n\n");
    printf("Populacao: %s\n",             mensagem[resultado_populacao]);
    printf("Area: %s\n",                   mensagem[resultado_area]);
    printf("PIB: %s\n",                    mensagem[resultado_pib]);
    printf("Pontos Turisticos: %s\n",      mensagem[resultado_pontos]);
    printf("Densidade Populacional: %s\n", mensagem[resultado_densidade]);
    printf("PIB per Capita: %s\n",         mensagem[resultado_pib_per_capita]);
    printf("Super Poder: %s\n",            mensagem[resultado_super_poder]);

    return 0;
}