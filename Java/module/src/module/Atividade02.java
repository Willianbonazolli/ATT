//2. Tem-se um conjunto de dados contendo a altura e o sexo (masculino, feminino) de 10 pessoas. Fazer um algoritmo que calcule e escreva: A. a maior e a menor altura do grupo; B. média de altura dos homens; C. o número de mulheres.//

package module;

import java.util.Scanner;

public class Atividade02 {
    public static void main(String[] args) {
    
    int sexo, qtdeMulheres, qtdeHomens;
    double altura, somaH, mediaHomens, maior, menor;
    
    qtdeMulheres = 0;
    qtdeHomens = 0;
    somaH = 0;
    mediaHomens = 0;
    maior = 0;
    menor = 0;

    try (Scanner entrada = new Scanner(System.in)){

    for (int i = 1; i <= 10; i++) {
        System.out.println("Digite o sexo: 1- Masculino, 2- Feminino ");
        sexo = entrada.nextInt();
        System.out.println("Digite a altura: ");
        altura = entrada.nextDouble();

        if(sexo == 1){
            qtdeHomens++;
            somaH += altura;
        } else if(sexo == 2){
            qtdeMulheres++;
        } else {
            System.out.println("Sexo inválido. Digite 1 para Masculino ou 2 para Feminino.");
            i--;
            continue;
        }

        if (i == 1) {
            maior = altura;
            menor = altura;
        } else {
            if (altura > maior) {
                maior = altura;
            }
            if (altura < menor) {
                menor = altura;
            }
        }
    }
}   

    mediaHomens = somaH / qtdeHomens;
    
    System.out.println("A quantidade de mulheres é: " + qtdeMulheres);
    System.out.println("A quantidade de homens é: " + qtdeHomens);
    System.out.println("A maior altura é: " + String.format("%.2f", maior) + " A menor altura é: " + String.format("%.2f", menor));
    System.out.println("A média de altura dos homens é: " + String.format("%.2f", mediaHomens));

}


}
