public class PessoaJuridica extends Pessoa {
  private long cnpj;
  private String razaoSocial;

  public PessoaJuridica(String nome, String email, long celular, long cnpj, String razaoSocial) {
    super(nome, email, celular);
    this.cnpj = cnpj;
    this.razaoSocial = razaoSocial;
  }

  public long getCnpj() {
    return cnpj;
  }

  public String getRazaoSocial() {
    return razaoSocial;
  }

  public void setCnpj(long cnpj) {
    this.cnpj = cnpj;
  }

  public void setRazaoSocial(String razaoSocial) {
    this.razaoSocial = razaoSocial;
  }

  @Override
  public float calculoIr(float valor) {
    return valor * 0.05f;
  }

}
