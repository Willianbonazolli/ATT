//Uma parede em formato retangular, cuja altura é hp (altura da parede) e a largura lp (largura da parede) precisa ser coberta por azulejos também retangulares. O azulejo retangular tem dimensões ha (altura do azulejo) e la (largura do azulejo). Escreva um programa que leia as quatro medidas hp, lp, ha e la, calcule e imprima quanto azulejos com as medidas dadas são necessários para cobrir a parede dada.
package module;

import java.util.Scanner;

public class Atividade04 {
    public static void main(String[] args) {

    double hp, lp, ha, la, qta;

    Scanner metros = new Scanner(System.in);

    System.out.println("Digite a altura da parede");
    hp = metros.nextDouble();
    System.out.println("Digite a largura da parede");
    lp = metros.nextDouble();
    System.out.println("Digite a altura do azulejo:");
    ha = metros.nextDouble();
    System.out.println("Digite a largura do azulejo:");
    la = metros.nextDouble();

    metros.close();

    qta = (hp * lp) / (ha * la);

    qta = Math.ceil(qta);

    System.out.println("A quantidade de azulejos necessárias para cobrir a parede é de : " + qta);

}

}
