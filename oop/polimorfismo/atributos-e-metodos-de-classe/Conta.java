public class Conta {
  protected int numero;
  protected Pessoa correntista;
  protected float saldo;
  private static int numeroContas;

  public Conta() {
    Conta.incrementa();
  }

  public Conta(int numero, Pessoa correntista) {
    this.numero = numero;
    this.correntista = correntista;
    this.saldo = 0;
    Conta.incrementa();
  }

  public static int getNumeroContas() {
    return numeroContas;
  }

  private static void incrementa() {
    Conta.numeroContas++;
  }
}