#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float cel, fah;

    printf("Conversor de Celsius para Fahrenheit\n");

    printf("Digite os seus graus em Celsius: \n");
    scanf("%f", &cel);

    fah = cel * 1.8 + 32;

    printf("Esses são seus graus em Fahrenheit: %.2f\n", fah);

    return 0;
}
