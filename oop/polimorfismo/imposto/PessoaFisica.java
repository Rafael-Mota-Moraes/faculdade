public class PessoaFisica extends Pessoa {
  private long cpf;

  public PessoaFisica(String nome, String email, long celular, long cpf) {
    super(nome, email, celular);
    this.cpf = cpf;
  }

  public void setCpf(long cpf) {
    this.cpf = cpf;
  }

  public long getCpf() {
    return cpf;
  }

  @Override
  public float calculoIr(float valor) {
    return valor * 0.15f;
  }
}
