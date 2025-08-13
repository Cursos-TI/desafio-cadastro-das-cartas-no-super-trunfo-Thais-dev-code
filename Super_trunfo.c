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
    int populacao1;
    float area1, pib1;
    int numerodepontosturisticos1;
    float densidadepopulacional1, pibpercapita1;

    //--------Entrada dos dados da carta 01 

    printf("Digite os Dados da Carta 01:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01):\n ");
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade:\n ");
    scanf(" %49[^\n]", nomedacidade1);

    printf ("populacao:\n");
    scanf ("%d", &populacao1);

    printf ("area1 (km²)\n:");
    scanf ("%f", &area1);

    float pib1_bilhoes;
    printf ("pib1 (em Bilhoes de reais):\n");
    scanf ("%f", &pib1_bilhoes);
    pib1 = pib1_bilhoes *1e9;

    printf("Numero de pontos turisticos 1 :\n");
    scanf("%i", &numerodepontosturisticos1);
     
   //------- densidade e pib per capita 01 -----
   densidadepopulacional1= (float)populacao1/area1;
   pibpercapita1=pib1/(float)populacao1;

    //-------- Carta 02 --------

    char estado2;
    char codigodacarta2[4];
    char nomedacidade2[50];
    int populacao2;
    float area2, pib2;
    int numerodepontosturisticos2;
    float densidadepopulacional2 ,pibpercapita2;
    //--------Entrada dos dados da carta 02

    printf("Digite os Dados da Carta 02:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A02):\n ");
    scanf("%s", codigodacarta2);

    printf("Nome da Cidade 02:\n ");
    scanf(" %49[^\n]", nomedacidade2);

    printf ("populacao cidade 02:\n");
    scanf ("%d", &populacao2);

    printf ("area 2 (km²):\n");
    scanf ("%f", &area2);

    float pib2_bilhoes;
    printf ("pib 2 (em Bilhoes de reais):\n");
    scanf ("%f", &pib2_bilhoes);
    pib2= pib2_bilhoes *1e9;

    printf("Numero de pontos turisticos 2:\n");
    scanf("%i", &numerodepontosturisticos2);

    //----calculo carta 02 ----

    densidadepopulacional2=(float)populacao2/area2;
    pibpercapita2=pib2/(float)populacao2;
    
// Saída de dados resultado final 
printf("\n\n========== RESULTADO FINAL SUPER TRUNFO CIDADES =============\n\n");

    printf ("\n-----CARTA 01------");
    printf ("\n Estado : %c\n", estado1 );
    printf ("\n Código da carta : %s\n", codigodacarta1);
    printf("\n Nome Da Cidade: %s\n", nomedacidade1);
    printf("\n População:%d\n",populacao1);
    printf("\n Area 1 em m²:%.2f/km²\n", area1);
    printf("\nPib cidade 1:%f Bilhões de reais\n", pib1);
    printf("\n Numero de pontos turisticos na cidade 1 :%i\n", numerodepontosturisticos1);
    printf("Densidade Populacional 1: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita 1: %.2f reais\n", pibpercapita1);
    
  
    printf ("\n-----CARTA 02------");
    printf ("\n Estado : %c\n", estado2 );
    printf ("\n Código da carta : %s\n", codigodacarta2);
    printf("\n Nome Da Cidade: %s\n", nomedacidade2);
    printf("\n População:%d\n",populacao2);
    printf("\n Area 2 em m²:%.2f/km²\n", area2);
    printf("\n Pib :%f Bilhões de reais\n", pib2);
    printf("\n Numero de pontos turisticos na cidade 2:%i\n", numerodepontosturisticos2);
    printf("\n Densidade populacional2 : %.2f hab/km²\n", densidadepopulacional2);
    printf("\n PIB per Capita 2: %.2f reais\n", pibpercapita2);


    return 0;
}