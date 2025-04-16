#include <stdio.h>
#include "igualdade.h"

int main(void) {

    int x = 0;
    int y = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);
  
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    int igual = igualdade(x, y);
    int ma = maior(x, y);
    int me = menor(x, y);

    if(x != y) {
        printf("O Maior número é o : %d\n", ma);
        printf("O Menor número é o : %d\n", me);
    }
    
    printf("Os números são iguais? : %d\n", igual);

    return 0;

}