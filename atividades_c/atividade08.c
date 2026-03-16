#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int numero1, numero2, soma;

    printf("Calcule dois numeros e veja o resultado\n");

    printf("Digite um numero: \n");
    scanf("%i", &numero1);

    printf("Digite outro numero: ");
    scanf("%i", &numero2);

    soma = numero1 + numero2;

    printf("Essa é a soma dos dois numeros: %.2i\n", soma);

    return 0;
}

