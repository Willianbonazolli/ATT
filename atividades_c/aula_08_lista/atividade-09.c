#include <stdio.h>
#include <stdlib.h>

/* 9. Construa um programa que calcule e mostre a soma de todos os números pares entre 100 e 200, inclusive.
Após exibir o resultado, o programa deverá permitir que o usuário escolha se deseja repetir essa operação novamente. */

int main(void) {
    char opcao;
    int i, soma;

    printf("Calcule e veja a soma de todos os numeros pares entre 100 e 200: \n");

    do {
        soma = 0;

        for(i = 100; i <= 200; i++) {
            if(i % 2 == 0) {
                soma += i;
            }
        }

        printf("Soma dos pares: %i\n", soma);

        printf("Deseja repetir essa operacao? (s/n): ");
        scanf(" %c", &opcao);
        fflush(stdin);

    } while(opcao == 's' || opcao == 'S');

    return 0;
}
