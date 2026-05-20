#include <stdio.h>
#include <stdlib.h>

// 10. Construa um programa que leia uma matriz 4x4 e conte quantos elementos são maiores que 10. Ao final, exiba a quantidade encontrada. R.:

int main(void) {
    int matriz[4][4];
    int i, j;
    int contador = 0;

    printf("Digite os valores da matriz 4x4:\n");

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &matriz[i][j]);
            fflush(stdin);

            if(matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("Quantidade de elementos maiores que 10: %i\n", contador);

    return 0;
}
