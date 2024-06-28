package arrays;

import java.util.Scanner;

public class appTorneio {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Time times[] = new Time[3];

        for (int i = 0; i < times.length; i++) {
            times[i] = new Time();
            System.out.println("Digite o nome do time " + (i + 1) + ":");
            times[i].setNome(scanner.nextLine());
        }
        
        for (int i = 0; i < times.length; i++) {
            int[] resultados = new int[3];
            System.out.println("Digite o total de vitórias do " + times[i].getNome() + ":");
            resultados[0] = scanner.nextInt();
            System.out.println("Digite o total de empates do " + times[i].getNome() + ":");
            resultados[1] = scanner.nextInt();
            System.out.println("Digite o total de derrotas do " + times[i].getNome() + ":");
            resultados[2] = scanner.nextInt();
            times[i].setResultados(resultados);
        }

        for (Time time : times) {
            time.calcularPontuacao();
        }

        System.out.println("Pontuações dos times:");
        for (Time time : times) {
            System.out.println(time.getNome() + ": " + time.getPontos() + " pontos");
        }

        scanner.close();
    }
}
