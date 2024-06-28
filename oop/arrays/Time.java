package arrays;

public class Time {
    private String nome;
    private int pontos;
    private int resultados[] = new int[3];

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getPontos() {
        return pontos;
    }

    public void setPontos(int pontos) {
        this.pontos = pontos;
    }

    public int[] getResultados() {
        return resultados;
    }

    public void setResultados(int[] resultados) {
        this.resultados = resultados;
    }

    public void calcularPontuacao() {
        this.pontos = (resultados[0] * 3) + (resultados[1] * 1);
    }
}
