#include <stdio.h>
#include <math.h>

main(){

     /*Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
      p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:*/

    float x1, y1, x2, y2;
    float distancia;


    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    //Calcule a distancia

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //Mostre a distância

    printf("A distancia entre os pontos e: %.4f\n", distancia);



}