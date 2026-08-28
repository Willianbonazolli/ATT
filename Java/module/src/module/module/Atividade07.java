//7.Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.
package module;
import java.util.Scanner;

public class Atividade07 {

    public static void main(String[] args) {

    Scanner entrada = new Scanner(System.in);
	int idadeAnos, idadeMeses, idadeDias,idadeTotalDias;
	
	System.out.print("Calculadora de idade transformada em dias\n"); 
	System.out.print("Exemplo: Utilize o programa desta forma:> 20 (anos) > 5 (meses) > 10 (dias)\n\n"); 
	System.out.print("Digite quantos anos: ");
	idadeAnos = entrada.nextInt();
	System.out.print("Digite quantos meses: ");
	idadeMeses = entrada.nextInt();
	System.out.print("Digite quantos dias: ");
	idadeDias = entrada.nextInt();
	entrada.close();

	idadeTotalDias = idadeAnos * 365 + idadeMeses * 30 + idadeDias;
	System.out.print("Idade total em dias = "+ idadeTotalDias +"\n");
	
    }

}