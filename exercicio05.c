#include <stdio.h>

int main(){

    int vetor[10];
    int pares;

    for(int i = 0; i < 10; i++){

        printf("Insira o valor %d: \n", i);
        scanf("%d", &vetor[i]);
        
    }
    printf("Existem %d numeros pares nesse conjunto", pares);
}