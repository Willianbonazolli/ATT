#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int dias;
    float bruto, desconto, liquido;

    printf("Calcule o numero de dias trabalhados e seu salario: \n");

    printf("Digite o numero de dias trabalhados: ");
    scanf("%i", &dias);

    bruto = dias * 25;
    desconto = bruto * 0.08;
    liquido = bruto - desconto;

    printf("Salario liquido a receber: R$ %.2f\n", liquido);

    return 0;
}
