public class appConta {
  public static void main(String[] args) {
    Pessoa p1 = new Pessoa("Rafa", "rafa@email.com", 1322483);
    Conta c1 = new Conta(10, p1);
    Conta c2 = new Conta(10, p1);
    Conta c3 = new Conta(10, p1);
    System.err.println(Conta.getNumeroContas());
  }
}
