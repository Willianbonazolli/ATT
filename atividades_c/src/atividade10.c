#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float valorHora, horasTrabalhadas, salario;

    printf("Calcule o seu salario total por mes: \n");

    printf("Digite o valor ganho por hora: ");
    scanf("%f", &valorHora);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    salario = valorHora * horasTrabalhadas;

    printf("O salario total do mes e: R$ %.2f\n", salario);

    return 0;
}
