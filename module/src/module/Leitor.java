package module;

import java.util.Scanner;

public class Leitor {
	
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		System.out.println("Informe o seu nome: ");
		String nome = leitor.nextLine();
		System.out.println("Olá " + nome + " seja bem-vindo a disciplica de POO");
	}
}
