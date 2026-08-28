package module;

import java.util.Scanner;

public class VerificarPrimo {
    
    public static void main(String[] args) {
        int candidato;
        int resto;
        int i = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Descubra se o número é primo: ");
        candidato = sc.nextInt();

        for (int x = 1; x <= candidato; x++){
            resto = candidato % x;
            if(resto == 0){
                i += 1;
            }
        }
    
    if(i == 2){
        System.out.println("É primo");
    }else {
        System.out.println("Não é primo");
    }
    sc.close();
}
}
