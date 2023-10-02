#include <stdio.h>

int main(){

    int vetor[10];
    int pares = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite os numeros: \n");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("A quantidade de numeros pares eh %d", pares);
}