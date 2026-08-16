//1. Escreva um programa que, com base em uma temperatura em graus celsius, a converta e exiba em Kelvin (K), Réaumur (Re), Rankine (Ra) e Fahrenheit (F), seguindo as fórmulas: F = C * 1.8 + 32; K = C + 273.15; Re = C * 0.8; Ra = C * 1.8 + 32 + 459.67//

package module;

public class Atividade01 {
    public static void main(String[] args) {

    double K, Re, Ra, F, C;
    C = 2.43;

    F = C * 1.8 + 32;
    Re = C * 0.8;
    Ra = C * 1.8 + 32 + 459.67;
    K = C + 273.15;

    System.out.println("A temperatura em Fahrenheit é: " + String.format("%.2f", F));
    System.out.println("A temperatura em Réaumur é: " + String.format("%.2f", Re));
    System.out.println("A temperatura em Rankine é: " + String.format("%.2f", Ra));
    System.out.println("A temperatura em Kelvin é: " + String.format("%.2f", K));

}


}
