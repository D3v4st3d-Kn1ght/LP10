#include <stdio.h>

void imprimeOla(void) {
    printf("Hello World!");
    printf("\n");
}

int main(void) {
    //Imprime o programa duas vezes
    for(int i = 0; i <= 1; i++) {
        imprimeOla();
    }
    
    return 0;
} 