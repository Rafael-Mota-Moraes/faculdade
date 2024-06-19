public class Financeiro {
  public Financeiro() {
  }

  public float calcularFinanciamento(float montante, int meses, float taxa) {
    for (int i = 0; i < meses; i++) {
      montante *= (1 + (taxa / 100.0));
    }
    return montante;
  }

  public float calcularAcrescimo(float montante, float juros) {
    return montante * juros;
  }

  public float calcularDesconto(float montante, float percentual) {
    float desconto = montante * (percentual / 100);
    return montante - desconto;
  }
}
