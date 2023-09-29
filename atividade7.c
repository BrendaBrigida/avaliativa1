#include <stdio.h>

main(){

    /*7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: 
    MP = ( n1*2 + n2*4 + n3*3 ) / 10 Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem 
    "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.*/

    float n1 = 0, n2 = 0 , n3 = 0, MP;
    int mediaGeral;

    printf("digite a n1: ");
    scanf("%f", &n1);

    printf("digite a n2: ");
    scanf("%f", &n2);
    
    printf("digite a n3: ");
    scanf("%f", &n3);
    
     MP = ((n1 * 2) + (n2 * 4) + (n3 * 3))/10;

    printf("Media do aluno: %.2f",MP);
 
    if(MP >= 7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }

   mediaGeral /=  30;

   printf("Media geral da turma: %.2f\n", mediaGeral);


    
}