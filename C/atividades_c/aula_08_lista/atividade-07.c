#include <stdio.h>
#include <stdlib.h>

/* 7. Construa um programa que gere a tabuada de 1 a 10 de qualquer número informado pelo usuário.
Ao final, o programa deverá exibir todos os resultados correspondentes à multiplicação desse número pelos valores de 1 até 10. */

int main(void) {

    int num, i;

    printf("Gere a tabuada de um numero: \n");

    printf("Digite um numero: ");
    scanf("%i", &num);
    fflush(stdin);

    printf("tabuada do numero: %i\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", num, i, num * i);
    }

    return 0;
}
