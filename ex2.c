#include <stdio.h>

//Funcao que retorna através de um texto interativo o valor passado pelo usuário.
void funcaoNum(void) {

   int num = 0; 
   printf("Informe um numero aleatorio: ");
   scanf("%d", &num);

   printf("O valor informado é de: %d", num);
   printf("\n");
}

//Funcao que soma os valores passados.
int funcaoSoma(int x, int y) {
    return x + y;
} 

//Funcao que retorna o texto com a soma; 
void somaUsuario(int x, int y) {

    printf("A soma dos valores é de: %d", funcaoSoma(x, y));
}

//Criar um biblioteca com funções.
int main(void) {

    //Chamada de primeira função.
    funcaoNum();

    /*
    * Inicializando o tratamento das funções de soma!!!
    */
    //Declaração de variáveis para as funções de soma.
    int x = 0;
    int y = 0;

    //Informando o primeior valor.
    printf("Informe o valor de X: ");
    scanf("%d", &x);    

    //Informando o segundo valor.
    printf("Agora o de Y: ");
    scanf("%d", &y);

    //Chamando as funções e seus comandos.
    funcaoSoma(x, y);   
    somaUsuario(x, y);
    
    return 0;
}