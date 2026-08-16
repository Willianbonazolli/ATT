//5. Calcular e apresentar o valor do volume de uma lata de óleo, utilizando fórmula: V = 3.14159 * R * R * A, em que as variáveis: V, R e A representam respectivamente o volume, o raio e a altura. Vamos declarar as variáveis V, R e A como double e definir um valor qualquer para as variáveis de altura e de raio. Agora vamos escrever a fórmula, conforme dita no enunciado e, em seguida, exibir na tela uma mensagem contendo o resultado do volume encontrado.

package module;

import java.util.Scanner;

public class Atividade05 {
    public static void main(String[] args) {

    double V, R, A;

    System.out.println("Calcule o volume da sua lata de Óleo");

    Scanner lata = new Scanner(System.in);
    System.out.println("Raio da lata: ");
    R = lata.nextDouble();
    System.out.println("Altura da lata: ");
    A = lata.nextDouble();
    lata.close();

    V = 3.14159 * R * R * A;
    System.out.printf("O volume da lata de óleo é de %.2f m³%n", V);
}


}
