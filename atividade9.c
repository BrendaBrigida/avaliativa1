#include <stdio.h>

main(){

    /*Em uma eleição presidencial existem quatro candidatos.Os votos são informados através de códigos.
     Os dados utilizados para a contagem dos votos obedecem à seguinte codificação*/

     int votos; 
     int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
     int votosNulos = 0, votosEmBranco = 0;

     printf("selecione seu votos: ");
     scanf("%d", &votos);

     printf("Informe o voto (0 para encerrar): ");

     while (1) {
        scanf("%d", &votos);

        if (votos == 0) {
            break;
        }

    switch(votos){
    
       case 1:
            candidato1++;
            break;
       case 2:
            candidato2++;
        case 3:
            candidato3++; 
            break;
        case 4:
            candidato4++;
          break;
        case 5:
            votosNulos++;
          break;
        case 6:
            votosEmBranco++;
          break;  
        }
        }
        
    // Exibe os resultados
    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosEmBranco);

   

    
}