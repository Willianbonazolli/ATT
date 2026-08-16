#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int usuario;
    int computador;
    int soma;
    char escolha;

    srand(time(NULL));

    printf("Jogo de Par ou Impar\n");
    printf("Regras: Escolha um numero entre 1 e 5 e escolha par ou impar. O computador ira escolher outro numero entre 1 e 5. Se a soma dos dois numeros for par, quem escolheu par ganha, se for impar, quem escolheu impar ganha.\n\n");
    printf("Escolha par ou impar (p/i): ");
    scanf(" %c", &escolha);

    printf("Digite um numero entre 1 e 5: ");
    scanf("%i", &usuario);

    computador = rand() % 5 + 1;

    soma = usuario + computador;

    printf("\nSeu numero: %i\n", usuario);
    printf("Numero do computador: %i\n", computador);
    printf("Soma: %i\n", soma);

    if (soma % 2 == 0) {

        printf("A soma e PAR!\n");

        if (escolha == 'p' || escolha == 'P') {
            printf("Voce ganhou!\n");
        } else {
            printf("O computador ganhou!\n");
        }

    } else {

        printf("A soma e IMPAR!\n");

        if (escolha == 'i' || escolha == 'I') {
            printf("Voce ganhou!\n");
        } else {
            printf("O computador ganhou!\n");
        }
    }

    return 0;
}