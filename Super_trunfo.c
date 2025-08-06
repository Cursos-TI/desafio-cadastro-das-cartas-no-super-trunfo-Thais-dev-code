#include <stdio.h>

//-------- Carta 01 --------

int main() {
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

    printf("Nome da Cidade: ");
    scanf(" %s", nomedacidade1);

    printf ("populacao:");
    scanf ("%d", &populacao1);

    printf ("area1:");
    scanf ("%f", &area1);

    printf ("pib1:");
    scanf ("%f", &pib1);

    printf("Numero de pontos turisticos:");
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
    scanf("%s", codigodacarta1);

    printf("Nome da Cidade: ");
    scanf(" %s", nomedacidade2);

    printf ("populacao:");
    scanf ("%d", &populacao2);

    printf ("area2:");
    scanf ("%f", &area2);

    printf ("pib2:");
    scanf ("%f", &pib2);

    printf("Numero de pontos turisticos 2:");
    scanf("%i", &numerodepontosturisticos2);

    // -------- Saida de Dados carta 01
    printf ("\n-----CARTA 01------");
    printf ("\n Estado : %c\n", estado1 );
    printf ("\n Código da carta : %s\n", codigodacarta1);
    printf("\n Nome Da Cidade: %s\n", nomedacidade1);
    printf("\n População:%d\n",populacao1);
    printf("\n Area em m²:%f\n", area1);
    printf("\nPib cidade 1:%f\n", pib1);
    printf("\n Numero de pontos turisticos na cidade 1 :%i\n", numerodepontosturisticos1);

    
    // -------- Saida de Dados carta 02
    printf ("\n-----CARTA 02------");
    printf ("\n Estado : %c\n", estado2 );
    printf ("\n Código da carta : %s\n", codigodacarta2);
    printf("\n Nome Da Cidade: %s\n", nomedacidade2);
    printf("\n População:%d\n",populacao2);
    printf("\n Area em m²:%f\n", area2);
    printf("\n Pib :%f\n", pib2);
    printf("\n Numero de pontos turisticos na cidade:%i\n", numerodepontosturisticos2);



    return 0;
}

