#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int numero1, numero2;

    float numero3, formula1, formula2, formula3;

    printf("Digite um numero inteiro: \n");
    fscanf(stdin, "%i", &numero1);

    printf("Digite outro numero inteiro: \n");
    fscanf(stdin, "%i", &numero2);

    printf("Digite um numero real: \n");
    fscanf(stdin,"%f", &numero3);

    formula1 = (numero1 * 2) * (numero2 / 2.0);

    formula2 = (numero1 * 3) + numero3;

    formula3 = pow(numero3, 3);

    printf("Aqui estão suas formulas:\n");
    printf("O produto do dobro do primeiro numero com a metade do segundo numero: %.2f\n", formula1);
    printf("A soma do triplo do primeiro número com o terceiro numero: %.2f\n", formula2);
    printf("O terceiro numero elevado ao cubo: %.2f\n", formula3);

    return 0;
}

