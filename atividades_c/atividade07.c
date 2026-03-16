#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float metros, centimetros;

    printf("Converta metros em centimetros\n");

    printf("Digite a medida em metros: ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("A medida em centimetros e: %.2f\n", centimetros);

    return 0;
}
