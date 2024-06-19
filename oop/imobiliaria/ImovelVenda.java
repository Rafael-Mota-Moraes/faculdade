public class ImovelVenda extends Imovel {
  float valorVenda;
  float valorDesconto;
  float prazoFinanciamento;

  public ImovelVenda() {

  }

  public ImovelVenda(Pessoa proprietario, float area, String tipo, float valorVenda, float valorDesconto,
      float prazoFinanciamento) {

    super(proprietario, area, tipo);
    this.valorVenda = valorVenda;
    this.valorDesconto = valorDesconto;
    this.prazoFinanciamento = prazoFinanciamento;
  }

  public ImovelVenda(Pessoa proprietario, float area, String tipo, String cidade, float valorVenda, float valorDesconto,
      float prazoFinanciamento) {
    super(proprietario, area, tipo, cidade);
    this.valorVenda = valorVenda;
    this.valorDesconto = valorDesconto;
    this.prazoFinanciamento = prazoFinanciamento;
  }

  public ImovelVenda(Pessoa proprietario, float area, String tipo, String endereco, int numero, String complemento,
      String bairro, String cidade, String estado, float valorVenda, float valorDesconto,
      float prazoFinanciamento) {
    super(proprietario, area, tipo, endereco, numero, complemento, bairro, cidade, estado);
    this.valorVenda = valorVenda;
    this.valorDesconto = valorDesconto;
    this.prazoFinanciamento = prazoFinanciamento;
  }

  public float calcularVenda() {
    return this.valorVenda - this.valorDesconto;
  }

  public float calcularITBI(float taxa) {
    return this.valorVenda * (taxa / 100);
  }

  @Override
  public float calcularIptu(float fator) {
    return fator * this.area + (this.valorVenda * 0.05f);
  }

}