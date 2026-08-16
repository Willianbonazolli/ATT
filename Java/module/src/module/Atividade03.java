//3. Criar um programa que calcule a média de salários de uma empresa, pedindo ao usuário a grade de funcionários e os salários, e devolvendo a média salarial.
package module;

import java.util.Scanner;

public class Atividade03 {
    public static void main(String[] args) {

    int numFuncionarios;
    double salario, somaSalarios, mediaSalarios;
    
    somaSalarios = 0;

    try (Scanner entrada = new Scanner(System.in)) {
        System.out.println("Digite o número de funcionários: ");
        numFuncionarios = entrada.nextInt();

        for (int i = 1; i <= numFuncionarios; i++) {
            System.out.println("Digite o salário do funcionário " + i + ": ");
            salario = entrada.nextDouble();
            somaSalarios += salario;
        }

        mediaSalarios = somaSalarios / numFuncionarios;
    }

    System.out.println("A quantidade de funcionários é " + numFuncionarios);
    System.out.println("A média Salárial é: R$" + String.format("%.2f", mediaSalarios));

}


}
