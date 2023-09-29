#include <stdio.h>

main(){

    /*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
    e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles*/

      float a, b, c;

      // Verificar se os valores formam um triângulo
      printf("insira o valor de a: ");
      scanf("%f", &a);

      printf("insira o valor de b: ");
      scanf("%f", &b);

      printf("insira o valor de c: ");
      scanf("%f", &c);

    if(a * b > c || a * c > b || b * c > a){    
    }if(a == b && b == c){   
       printf("triangulo equilatero");
    }else if(a == b || a == c || b == c){
       printf("triangulo isosceles");
    }else{
       printf("triangulo escaleno");
    }


}