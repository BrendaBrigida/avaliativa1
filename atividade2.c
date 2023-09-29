#include <stdio.h>

int main(){

    /*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
     Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/ 

    double alturaChico = 1.50, alturaZe = 1.10;
    int anos = 0;

    while(alturaZe <= alturaChico){

          alturaChico += 2;
          alturaChico += 3;
          anos++;
    }
         
    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

   return 0;

}