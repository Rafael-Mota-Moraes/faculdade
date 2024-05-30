class Pessoa {
  private String nome;
  private String email;
  private long celular;

  public Pessoa() {

  }

  public Pessoa(String nome, String email, long celular) {
    this.nome = nome;
    this.email = email;
    this.celular = celular;
  }

  public long getCelular() {
    return celular;
  }

  public String getEmail() {
    return email;
  }

  public String getNome() {
    return nome;
  }

  public void setCelular(long celular) {
    this.celular = celular;
  }

  public void setEmail(String email) {
    this.email = email;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public float calculoIr(float valor) {
    return valor * 0.02f;
  }
}