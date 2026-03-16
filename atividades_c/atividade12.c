#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float salarioBruto, ir, inss, sindicato, descontos, salarioLiquido;

    printf("Calcule o seu salario com descontos: \n");

    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salarioBruto);

    ir = salarioBruto * 0.15;
    inss = salarioBruto * 0.11;
    sindicato = salarioBruto * 0.03;

    descontos = ir + inss + sindicato;

    salarioLiquido = salarioBruto - descontos;

    printf("\nSalario Bruto      : R$ %.2f\n", salarioBruto);
    printf("(-) IR (15%%)       : R$ %.2f\n", ir);
    printf("(-) INSS (11%%)     : R$ %.2f\n", inss);
    printf("(-) Sindicato (3%%) : R$ %.2f\n", sindicato);
    printf("Salario Liquido    : R$ %.2f\n", salarioLiquido);

    return 0;
}
