public class appPessoa {
  public static void main(String[] args) {
    PessoaFisica pf = new PessoaFisica("Fisico", "email_do_fisico@rmail.com", 101010, 101001);
    PessoaJuridica pj = new PessoaJuridica("Juridico", "email_do_juridico@email.com", 443274, 93274897,
        "Juridico company");

    System.out.println(pf.calculoIr(100));
    System.out.println(pj.calculoIr(100));
  }
}
