#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade;

    printf("Classificação etária:\n");
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade < 0) {
        printf("Idade inválida!\n");
    } else if (idade < 10) {
        printf("Categoria: Livre\n");
    } else if (idade < 12) {
        printf("Categoria: 10 anos\n");
    } else if (idade < 14) {
        printf("Categoria: 12 anos\n");
    } else if (idade < 16) {
        printf("Categoria: 14 anos\n");
    } else if (idade < 18) {
        printf("Categoria: 16 anos\n");
    } else if (idade >= 18) {
        printf("Categoria: 18 anos\n");
    }

}