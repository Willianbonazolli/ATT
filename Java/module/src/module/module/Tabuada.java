package module;

import java.util.Scanner;

public class Tabuada{
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int tabuada = 0;
        int total;

        try{
            System.out.println("Digite seu numero para ver a tabuada dele");
            int numeroTabuada = sc.nextInt();   
            
            System.out.printf("Tabuada do : %d \n", numeroTabuada);

        while (tabuada <= 10){
            total = numeroTabuada * tabuada;
            System.out.printf("%d x %d = %d \n" , numeroTabuada, tabuada, total);
            tabuada++;
        }
        sc.close();

        } catch (Exception e){

            System.out.println("Tipo invalido digite um Número Inteiro: ");
        }
        
    }
}