#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float nota1, nota2, nota3, nota4, media;

    printf("Calcule sua media de notas bimestral\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media final e: %.2f\n", media);

    return 0;
}
