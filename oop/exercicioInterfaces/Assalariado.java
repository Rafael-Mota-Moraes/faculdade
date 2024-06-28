package exercicioInterfaces;

public class Assalariado extends Funcionario implements Encargos {
	private double comisao;
	
	public Assalariado() {}
	
	
	
	public Assalariado(String nome, long cpf, double salario) {
		super(nome, cpf, salario);
	}

	public double getComisao() {
		return comisao;
	}

	public void setComisao(double comisao) {
		this.comisao = comisao;
	}

	public void calculaComissao(float percentual, double totalVendas) {
	    this.comisao = (percentual / 100) * totalVendas;
	}

	@Override
	public void descontarInss(float taxa) {
	    this.setSalario(this.getSalario() - (this.getSalario() * (taxa / 100)));
	}

	@Override
	public void calcularAumento(float percentual) {
	    this.setSalario(this.getSalario() + (this.getSalario() * (percentual / 100)));
	}
	
}
