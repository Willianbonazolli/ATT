#include <stdio.h>
#include <stdlib.h>

// 6. Construa um programa que leia os valores de uma matriz 3x3 e exiba todos os elementos na tela no formato de tabela.


int main(void) {
    int matriz[3][3];
    int i, j;

    printf("Digite os valores da matriz 3x3:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\nValores da Matriz 3x3:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4i", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
