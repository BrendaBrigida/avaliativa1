#include <stdio.h>
#include <string.h>

main(){

  /*Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados: código da cidade estado (RS, SC, PR, SP, RJ, ...)
  número de veículos de passeio (em 1992) número de acidentes de trânsito com vítimas (em 1992) Deseja-se saber: a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
  b) qual a média de veículos nas cidades brasileiras c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/

    int codigo, numVeiculos, numAcidentes;
    char estado[3];
    char cidadeMaiorAcidente[50], cidadeMenorAcidente[50];
    int maiorAcidente = -1, menorAcidente = -1;
    int totalVeiculos = 0;
    int cidades_rs = 0;
    float mediaAcidentesRS = 0.0, mediaVeiculos = 0.0, totalAcidentesRS = 0.0;

    for (int i = 0; i < 2; i++) {
        printf("Cidade %d:\n", i + 1);
        printf("Codigo da cidade: ");
        scanf("%d", &codigo);
        printf("Estado: ");
        scanf("%s", estado);
        printf("Numero de veiculos de passeio: ");
        scanf("%d", &numVeiculos);
        printf("Numero de acidentes de transito com vitimas: ");
        scanf("%d", &numAcidentes);

        totalVeiculos += numVeiculos;

        if (strcmp(estado, "rs") == 0) {
            totalAcidentesRS += numAcidentes;
            cidades_rs++;
            mediaAcidentesRS = totalAcidentesRS / cidades_rs;
        }

        if (maiorAcidente == -1 || numAcidentes > maiorAcidente) {
            maiorAcidente = numAcidentes;
            strcpy(cidadeMaiorAcidente, cidadeMaiorAcidente);
        }
        if (menorAcidente == -1 || numAcidentes < menorAcidente) {
            menorAcidente = numAcidentes;
            strcpy(cidadeMenorAcidente, cidadeMenorAcidente);
        }
    }

    mediaVeiculos = totalVeiculos / 2;

    printf("\nResultados:\n");
    printf("Maior indice de acidentes: %d (Cidade: %s) (Estado: %s)\n", maiorAcidente, cidadeMaiorAcidente, estado);
    printf("Menor indice de acidentes: %d (Cidade: %s) (Estado: %s)\n", menorAcidente, cidadeMenorAcidente, estado);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas no Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

}