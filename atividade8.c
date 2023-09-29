#include <stdio.h>

main(){

   /*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber: média do salário da população;
  média do número de filhos; maior salário; percentual de pessoas com salário até R$100,00. 
  O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while)*/ 


    float salario, mediaSalario = 0, maiorSalario = 0;
    int Filhos, totalPessoas = 0, totalFilhos = 0, salarioAte100 = 0;

    do {
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario >= 0) {
            printf("Digite o numero de filhos: ");
            scanf("%d", &Filhos);

            totalPessoas++;
            totalFilhos += Filhos;
            mediaSalario += salario;

            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            if (salario <= 100) {
                salarioAte100++;
            }
        }
    } while (salario >= 0);

    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
        float mediaFilhos = totalFilhos / totalPessoas;


        printf("a) Media do salario da população: %.2f\n", mediaSalario);
        printf("b) Media do número de filhos: %.2f\n", mediaFilhos);
        printf("c) Maior salario: %.2f\n", maiorSalario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n",salarioAte100 / totalPessoas * 100);
   
    }

    
}