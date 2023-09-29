#include <stdio.h>
#include <math.h>

main(){

    // Criar um algoritmo que receba o valor de x, e calcule e imprima o valor de f(x).

    double x;
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    // Verifique se o valor de x é válido (x^2 - 16 não pode ser igual a zero)
    if (x * x <= 16.0) {
        printf("Erro: O valor de x deve ser maior que 4.\n");
    } else {
        double resultado = (5 * x + 3) / sqrt(x * x - 16.0);
        printf("f(x) = %.2lf\n", resultado);
    }

   
}