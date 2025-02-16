#include <stdio.h>

int main (){
    float populacao;
    float area;
    float pib;
    int turisticos;

    printf ("*** Início do Programa *** \n");

    printf ("Digite a população da cidade \n");
    scanf ("%f", &populacao);

    printf ("Digite a área da cidade: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turisticos: \n");
    scanf ("%d", &turisticos);

    printf ("População: %.3f milhões \n", populacao);
    printf ("Área: %.3f Km² \n", area);
    printf ("PIB: %.2f bilhões \n", pib);
    printf ("Pontos Turísticos: %d \n", turisticos);

    float densidade = area / populacao;

    printf ("Densidade Populacional: %.2f \n", densidade);

    float capital = pib / populacao;

    printf ("PIB Per Capita %.2f \n", capital);

    return 0;
}