#include <stdio.h>

main(){

     /*Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
      e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

      float a, b, c;

     // Verificar se os valores formam um triângulo
      printf("insira o valor de a: ");
      scanf("%d", &a);

      printf("insira o valor de b: ");
      scanf("%d", &b);

      printf("insira o valor de c: ");
      scanf("%d", &c);

      // Verificar se é um triângulo retângulo
      if(a + b > c && a + c > b && b + c > a){
             
      }if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a){
          
          printf("triangulo retangulo\n");         
     // Verificar se é um triângulo obtusângulo
      }else if(a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a){
          printf("triangulo obtusangulo ");
      }else{
     // Caso contrário, é um triângulo acutângulo
        printf("triangulo Acutangulo");
      }



    
}