package module;

import java.text.NumberFormat;
import java.util.Scanner;

public class Emprestimo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Valor emprestimo: ");
        int valorEmprestimo = sc.nextInt();

        System.out.println("Taxa de Juros Anual: ");
        float taxaJurosAno = sc.nextFloat();
        float taxaJurosMensal = taxaJurosAno / 100 / 12;

        System.out.println("Periodo (Anos): ");
        byte anos = sc.nextByte();
        int qtdDePagamentos = anos * 12;

        double valorPagarMes = valorEmprestimo * (taxaJurosMensal * Math.pow(1 + taxaJurosMensal, qtdDePagamentos))/ (Math.pow(1 + taxaJurosMensal, qtdDePagamentos)- 1);

        NumberFormat formato = NumberFormat.getCurrencyInstance();
        String valorPagarMesFormatted = formato.format(valorPagarMes);
        System.out.println("Parcela mensal: " + valorPagarMesFormatted);
        sc.close();
    }
    
}
