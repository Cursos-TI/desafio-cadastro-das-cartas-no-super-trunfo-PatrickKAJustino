#include <stdio.h>

int main (){

    int codigo;
    char nome [50];
    char populacao[20];
    char area [20];
    char pib [20];
    int turistico;

    printf ("Digite o código da cidade: \n");
    scanf ("%d", &codigo);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome);

    printf ("Digite a população da cidade: \n");
    scanf ("%s", &populacao);

    printf ("Digite a área da cidade: \n");
    scanf ("%s", &area);

    printf ("Digite o PIB da cidade: \n");
    scanf ("%s", &pib);

    printf ("Digite o número de pontos turísticos da cidade: \n");
    scanf ("%d", &turistico);

    printf ("Código da cidade: %d\n", codigo);
    printf ("Nome: %s\n", nome);
    printf ("População: %s \n", populacao);
    printf ("Área: %s Km² \n", area);
    printf ("PIB: %s \n", pib);
    printf ("Pontos turísticos: %d\n", turistico);

    return 0;



}