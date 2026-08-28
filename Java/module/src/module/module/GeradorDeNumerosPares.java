package module;

import java.util.Scanner;

public class GeradorDeNumerosPares {

    public static void main(String[] args) {

        int i = 1;
        int par = 0;

        Scanner sc = new Scanner(System.in);
        
        System.out.println("Qual o tamanho da sequencia de numeros pares desejada?: ");
        int qtdNumerosPares = sc.nextInt();

        while (i <= qtdNumerosPares) {
            System.out.println(par + " - ");
            i++;
            par += 2;

        } 

        sc.close();

    }
    
}