#include <stdio.h>
#include "util.h"

int main(void) {
    
    double r = 0;

    printf("Digite o valor de um raio de um círculo qualquer: ");
    scanf("%lf", &r);

    double dia = diametro(r);
    double cir = circunferencia(r);
    double a = area(r);

    printf("O valor do diamêtro do círculo é: %lf", dia);
    printf("\nO valor da circunferência do círculo é: %lf", cir);
    printf("\nO valor da área do círculo é: %lf\n", a);

    return 0;
}