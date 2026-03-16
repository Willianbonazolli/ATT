#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float raio, area;
    float pi = 3.14159;

    printf("Calcule a area do circulo \n");

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A area do circulo e: %.2f\n", area);

    return 0;
}

