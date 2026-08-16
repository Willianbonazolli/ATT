#include <stdio.h>

int main(void){

    float num1, num2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);

    media = (num1 + num2) / 2.0;

    if(media >= 7){
    
        printf("Aprovado! Media: %.2f\n", media);
    } else if (media >= 6 && media < 7){
        printf("Em recuperação! Media: %.2f\n", media);
    } else {
        printf("Reprovado! Media: %.2f\n", media);
    }
}

