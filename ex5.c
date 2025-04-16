#include <stdio.h>
#include "igualdade.h"

int main(void) {
    
    /*Exercício retorna numero;*/
    retornaNumero();

    /*Exercicio comparação de três números.*/
    int a, b, c = 0;
    
    //Primeira variavel
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    
    //Segunda variavel
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    
    //Terceira variavel
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    //Maior número
    int ma = maior(a, maior(b, c)); 
    printf("O maior número é: %d\n", ma);

    return 0;
}