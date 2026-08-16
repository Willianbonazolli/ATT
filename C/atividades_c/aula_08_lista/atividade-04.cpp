#include <stdio.h>
#include <stdlib.h>

/*4. Construa um programa que calcule e mostre a média bimestral de uma turma.
O usuário deverá informar a quantidade de notas que serão consideradas e, em seguida, digitar cada uma delas.
Ao final, o programa deverá apresentar a média calculada.*/

int main(void) {
    int n, i;
    float nota, soma, media;

    printf("Digite a quantidade de notas: ");
    scanf("%i", &n);
    fflush(stdin);

    for(i = 0; i < n; i++) {
        printf("Digite a nota %i: ", i+1);
        scanf("%f", &nota);
        fflush(stdin);
        soma += nota;
    }

    media = soma / n;

    printf("Media da turma: %.2f\n", media);

    return 0;
}
