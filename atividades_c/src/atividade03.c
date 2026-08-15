#include <stdio.h>
#include <stdlib.h>

int main(void){

    float fah, cel;

	printf("Conversor de Fahrenheit para Celsius\n");

	printf("Digite os graus Fahrenheit (°F):\n");
	scanf("%f", &fah);

	cel = 5 * (fah - 32) / 9;

	printf("Esse sao seus graus em Celsius: %.2f\n", cel);

    return 0;
}

