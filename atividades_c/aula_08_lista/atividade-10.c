#include <stdio.h>
#include <stdlib.h>

/* 10. Construa um programa que solicite dois números inteiros, sendo eles a base e o expoente, e calcule o valor da potência correspondente.
Ao final, o programa deverá mostrar o resultado do primeiro número elevado ao segundo. */

int main(void) {
    int base, expoente, i;
    long long resultado;

    resultado = 1;

    printf("Digite dois numeros inteiros, sendo eles a base e o expoente: \n");

    printf("Base: ");
    scanf("%i", &base);
    fflush(stdin);

    printf("Expoente: ");
    scanf("%i", &expoente);
    fflush(stdin);

    for(i = 0; i < expoente; i++) {
        resultado *= base;
    }

    printf("Resultado da potencia: %lli\n", resultado);

    return 0;
}
