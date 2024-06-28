package exercicioInterfaces;

import java.util.Scanner;

public class appInterfaces {
	public static void main(String[] args) {
		String nome;
		long cpf;
		double salario;
		
		Scanner teclado = new Scanner(System.in);
		System.out.print("Digite o nome do assalariado: ");
		nome = teclado.nextLine();
		
		System.out.print("Digite o cpf: ");
		cpf = teclado.nextLong();
		
		System.out.print("Digite o salário: ");
		salario = teclado.nextDouble();
		
		
		Assalariado a1 = new Assalariado(nome, cpf, salario);
		
		teclado.close();
		
		a1.descontarInss(10);
		System.out.println("Salário: " + a1.getSalario());
		a1.calcularAumento(10);
		System.out.println("Salário: " + a1.getSalario());

	}
}
