#include <stdio.h>

int igualdade(int x, int y) {
    if(x == y){ 
        return 1;
    } else{
        return 0;
    }
}

void retornaNumero(void) {
    int x = 0;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("O número digitado foi: %d\n", x);
}

int maior(int x, int y){
    if(x > y){
        return x;
    } else if(x != y){
        return y;
    } 
}

int menor(int x, int y){
    if(x < y){
        return x;
    } else if(x != y) {
        return y;
    }
}
