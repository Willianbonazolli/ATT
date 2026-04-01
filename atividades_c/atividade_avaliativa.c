#include <stdio.h>
#include <stdlib.h>

int main (void) {

    float num1, num2, resultado;
    int operador;

    printf("Calculadora Simples\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    fflush(stdin);

    printf("Escolha a operacao: \n");
    printf("[1] - Adicao\n");
    printf("[2] - Subtracao\n");
    printf("[3] - Multiplicacao\n");
    printf("[4] - Divisao\n");
    printf("[5] - Fim\n");
    scanf("%i", &operador);
    fflush(stdin);


    switch (operador) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        case 5:
            printf("Encerrando a calculadora\n");
            break;
        default:
            printf("Operacao invalida. Por favor, escolha uma operacao entre 1 e 5.\n");
    }
    return 0;

}
