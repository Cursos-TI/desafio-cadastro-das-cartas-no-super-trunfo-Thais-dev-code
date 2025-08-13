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
    

    //--------Entrada dos dados da carta 01 

    printf("Digite os Dados da Carta 01:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01):\n ");
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade:\n ");
    scanf(" %s",nomedacidade1);

    printf ("populacao:\n");
    scanf ("%d", &populacao1);

    printf ("area1 (km²)\n:");
    scanf ("%f", &area1);

    printf("PIB da cidade 2:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos 1:\n");
    scanf("%i", &numerodepontosturisticos1);

   

    //-------- Carta 02 --------

    char estado2;
    char codigodacarta2[4];
    char nomedacidade2[50];
    int populacao2;
    float area2, pib2;
    int numerodepontosturisticos2;
   
    //--------Entrada dos dados da carta 02

    printf("Digite os Dados da Carta 02:\n");

    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A02):\n ");
    scanf("%s", codigodacarta2);

    printf("Nome da Cidade 02:\n ");
    scanf(" %s",nomedacidade2);

    printf ("populacao cidade 02:\n");
    scanf ("%d", &populacao2);

    printf ("area 2 (km²):\n");
    scanf ("%f", &area2);

    printf("PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos 2:\n");
    scanf("%i", &numerodepontosturisticos2);

// Saída de dados resultado final 
printf("\n\n========== RESULTADO FINAL SUPER TRUNFO CIDADES =============\n\n");
    

   

   
    printf ("\n-----CARTA 01------");
    printf ("\n Estado : %c\n", estado1 );
    printf ("\n Código da carta : %s\n", codigodacarta1);
    printf("\n Nome Da Cidade: %s\n", nomedacidade1);
    printf("\n População:%d\n",populacao1);
    printf("\n Area 1 em m²:%f/km²\n", area1);
    printf("\nPib cidade 1:%f\n", pib1);
    printf("\n Numero de pontos turisticos na cidade 1 :%i\n", numerodepontosturisticos1);
    
    
 
    printf ("\n-----CARTA 02------");
    printf ("\n Estado : %c\n", estado2 );
    printf ("\n Código da carta : %s\n", codigodacarta2);
    printf("\n Nome Da Cidade: %s\n", nomedacidade2);
    printf("\n População:%d\n",populacao2);
    printf("\n Area 2 em m²:%f/km²\n", area2);
    printf("\n Pib :%fs\n", pib2);
    printf("\n Numero de pontos turisticos na cidade 2:%i\n", numerodepontosturisticos2);
   


    return 0;
}