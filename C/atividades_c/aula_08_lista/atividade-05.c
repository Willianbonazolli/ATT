#include <stdio.h>
#include <stdlib.h>

/*5. Construa um programa que calcule a média de alunos por turma de uma escola.
Para isso, o usuário deverá informar a quantidade de turmas existentes e, em seguida, a quantidade de alunos em cada turma.
Considere que nenhuma turma pode possuir mais de 40 alunos. */

int main(void) {
    int turmas, i, alunos, soma;
    float media;

    printf("Digite a quantidade de turmas: ");
    scanf("%i", &turmas);
    fflush(stdin);

    for(i = 0; i < turmas; i++) {
        printf("Digite a quantidade de alunos da turma %i: ", i+1);
        scanf("%i", &alunos);
        fflush(stdin);

        while(alunos > 40) {
            printf("Erro: limite 40 alunos por turma.\n");
            printf("Digite novamente a quantidade de alunos: ", i);
            scanf("%i", &alunos);
            fflush(stdin);

        }

        soma += alunos;
    }

    media = (float)soma / turmas;

    printf("Media de alunos por turma: %.2f\n", media);

    return 0;
}
