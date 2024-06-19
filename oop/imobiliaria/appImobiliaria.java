public class appImobiliaria {
    public static void main(String[] args) {
        Pessoa p = new Pessoa("João", "joao@email.com", 97346174);
        ImovelAluguel iap = new ImovelAluguel(p, 10, "apto", "rua dos bobos numero zero", 0, "Perto do bar do zé",
                "floresta",
                "Bagé", "RS", "Locação", 100, 500);

        ImovelVenda iv = new ImovelVenda(p, 150.0f,
                "Apartamento",
                "Rua das Flores",
                123,
                "Apt 45",
                "Centro",
                "São Paulo",
                "SP",
                500000.0f,
                50000.0f,
                360.0f);

        Financeiro f = new Financeiro();

        System.out.printf("Valor do iptu no imovel de aluguel: %.2f\n", iap.calcularIptu(10));
        System.out.printf("Valor do iptu no imovel de venda: %.2f\n", iv.calcularIptu(10));
        System.out.printf("Valor do financiamento: %.2f\n", f.calcularFinanciamento(100, 10, 10));
        System.out.printf("Valor do imóvel com desconto: %.2f\n", f.calcularDesconto(100, 10));
        System.out.printf("Valor com imposto: %.2f\n", iv.calcularITBI(10));
        System.out.printf("Valor do aluguel: %.2f\n", iap.getValorAluguel());
        System.out.printf("Valor do acrescimo: %.2f\n", f.calcularAcrescimo(100, 1.10f));
    }
}
