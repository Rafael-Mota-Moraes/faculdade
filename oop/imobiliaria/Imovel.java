public abstract class Imovel {
  Pessoa proprietario;
  float area;
  String tipo;
  String endereco;
  int numero;
  String complemento;
  String bairro;
  String cidade;
  String estado;

  public Imovel() {
  }

  public Imovel(Pessoa proprietario, float area, String tipo) {
    this.proprietario = proprietario;
    this.area = area;
    this.tipo = tipo;
  }

  public Imovel(Pessoa proprietario, float area, String tipo, String cidade) {
    this.proprietario = proprietario;
    this.area = area;
    this.tipo = tipo;
    this.cidade = cidade;
  }

  public Imovel(Pessoa proprietario, float area, String tipo, String endereco, int numero, String complemento,
      String bairro, String cidade, String estado) {
    this.proprietario = proprietario;
    this.area = area;
    this.tipo = tipo;
    this.endereco = endereco;
    this.numero = numero;
    this.complemento = complemento;
    this.bairro = bairro;
    this.cidade = cidade;
    this.estado = estado;

  }

  public abstract float calcularIptu(float fator);
}