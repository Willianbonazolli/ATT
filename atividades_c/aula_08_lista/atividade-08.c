#include <stdio.h>
#include <stdlib.h>

/* 8. Considere que a população do país A é de 80.000 habitantes, com crescimento anual de 3%, e que a população do país B é de 200.000 habitantes, com crescimento anual de 1,5%.
Construa um programa que calcule e mostre o número de anos necessários para que a população do país A seja maior ou igual à população do país B, mantendo-se essas taxas de crescimento. */

int main(void) {
    int anos;
    float a, b;

    printf("A populacao de 80.000 habitantes da cidade A cresce anualmente em 3%%\n");
    printf("Para ela alcancar a cidade B de 200.000 habitantes que cresce anualmente em 1.5%% serao:\n");

    a = 80000;
    b = 200000;

    while(a < b) {
        a += b * 0.03;
        a += b * 0.015;
        anos++;
    }

    printf("Necessarios: %i anos\n", anos);

    return 0;
}
