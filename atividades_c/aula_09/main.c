#include <stdio.h>
#include <stdlib.h>

//1. Construa um programa que leia 10 números inteiros e armazene em um vetor. Ao final, exiba todos os valores informados.


int main(void) {
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o %i numero do vetor: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("\nValores informados NO SEU VETOR:\n");
    for(i = 0; i < 10; i++) {
        printf("%i", vetor[i]);
    }

    return 0;
}
