#include <stdio.h>

int main(){

    int vetor[8];
    int x, y, soma;

    for(int i = 0; i < 8; i++){
        printf("Insira o valor(%d): \n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Escolha dois numeros de 0 a 7: \n");
    scanf("%d \n%d", &x, &y);
    soma = vetor[x] + vetor[y];
    printf("A soma das posicoes %d e %d eh: %d", x, y, soma);
        


}