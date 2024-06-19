public class ImovelAluguel extends Imovel {
  String modalidade;
  float calcao;
  float valorAluguel;

  public ImovelAluguel() {
  }

  public ImovelAluguel(Pessoa proprietario, float area, String tipo, String modalidade, float calcao,
      float valorAluguel) {
    super(proprietario, area, tipo);
    this.modalidade = modalidade;
    this.calcao = calcao;
    this.valorAluguel = valorAluguel;
  }

  public ImovelAluguel(Pessoa proprietario, float area, String tipo, String cidade, String modalidade, float calcao,
      float valorAluguel) {
    super(proprietario, area, tipo, cidade);
    this.modalidade = modalidade;
    this.calcao = calcao;
    this.valorAluguel = valorAluguel;
  }

  public ImovelAluguel(Pessoa proprietario, float area, String tipo, String endereco, int numero,
      String complemento,
      String bairro, String cidade, String estado, String modalidade, float calcao, float valorAluguel) {
    super(proprietario, area, tipo, endereco, numero, complemento, bairro, cidade, estado);
    this.modalidade = modalidade;
    this.calcao = calcao;
    this.valorAluguel = valorAluguel;
  }

  public float calcularTaxas(float iptu, float agua, float condominio) {
    return iptu + agua + condominio;
  }

  @Override
  public float calcularIptu(float fator) {
    return fator * this.area;
  }

  // getters / setters
  public float getCalcao() {
    return calcao;
  }

  public String getModalidade() {
    return modalidade;
  }

  public float getValorAluguel() {
    return valorAluguel;
  }

  public void setCalcao(float calcao) {
    this.calcao = calcao;
  }

  public void setModalidade(String modalidade) {
    this.modalidade = modalidade;
  }

  public void setValorAluguel(float valorAluguel) {
    this.valorAluguel = valorAluguel;
  }

}
