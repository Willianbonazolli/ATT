package module;

import java.util.Scanner;

public class MediaConsole {
	
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		
		System.out.print("Calculadora de Média de 3 notas\n");
		
		System.out.println(("Digite a primeira nota: "));
		double num1 = leitor.nextDouble();
		
		System.out.println(("Digite a segunda nota: "));
		double num2 = leitor.nextDouble();
		
		System.out.println(("Digite a terceira nota: "));
		double num3 = leitor.nextDouble();
		
		double media = (num1 + num2 + num3) / 3;
		
		System.out.println("A média é: " + media);
		
	}
}
