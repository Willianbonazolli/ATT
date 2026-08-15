#include <stdio.h>

int main(void){

    int num1, num2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%i", &num1);
    printf("Digite a segunda nota: ");
    scanf("%i", &num2);

    media = (num1 + num2) / 2.0;

    if(media >= 7){
    
        printf("Aprovado! Media: %.2f\n", media);
    } else {
        printf("Reprovado! Media: %.2f\n", media);
    }
}

