#include <stdio.h>
#include <stdlib.h>

/* 6. Construa um programa que calcule o valor total investido na compra de CDs e também o custo médio por unidade.
O usuário deverá informar a quantidade de CDs adquiridos e, em seguida, o valor pago por cada um deles. */

int main(void) {
    int cds, i;
    float valor, soma, media;

    printf("Digite a quantidade de CDs: ");
    scanf("%i", &cds);

    for(i = 0; i < cds; i++) {
        printf("Valor do CD %i: ", i+1);
        scanf("%f", &valor);
        soma += valor;
    }

    media = soma / cds;

    printf("Total investido: %.2f\n", soma);
    printf("Media por CD: %.2f\n", media);

    return 0;
}
