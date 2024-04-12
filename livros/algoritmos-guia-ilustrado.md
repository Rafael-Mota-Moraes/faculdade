# Anotações do livro "Algoritmos: Um guia ilustrado para programadores e outros curiosos"

## Introdução
- Author cita Wikipedia e **Khan Academy** como fontes, não conheço a segunda, seria interesante pesquisar sobre

### Introdução a algoritmos
- Uma boa definiição de algoritmo seria "Um conjunto de instruções"

### Pesquisa Binária
- Precisa de uma lista ORDENADA
- Se o elemento que você procura está na lista, ele retorna o elemento, caso o elemento não esteja ele retorna None
- **Pesquisa simples** é pesquisar o item de um por um, partindo do inicio, por exemplo na lista: 1, 2, 3...10, quero encontrar o número 7, começo chechando 1 == 7, 2 == 7, 3 == 7 e assim por diante, até chegar em 7 == 7.
- Se eu estivesse pesquisando o número 99 em uma lista de 100 números eu iria precisar executar a checagem 99 vezes.
- Uma maneira melhor de chegar ao 99 seria começando pelo meio, por exemplo chegando se 50 é maior que o número que estou buscando, caso seja eu sei que o número está na metade esquerda da lista, caso seja menor, sei que está na direita da lista.
- Da próxima vez chuto 75, e fasso a mesma checagem.
- Ou seja, na pesquisa binária chutamos o número do meio da lista e eliminamos metade da lista em cada checagem, reduzindo **MUITO** o número de checagem que precisamos fazer.
- O tamanho de uma lista de 100 itens diminui da seguinte forma utilizando a busca binária:
100 -> 50 -> 25 -> 13 -> 7 -> 4 -> 2 -> 1
- Já na busca sequencial...
100 -> 99 -> 98 -> 97 ... 3 -> 2 -> 1
- Ou seja **Elimine metade dos números a cada tentativa com a pesquisa binária.**
- De maneira geral, para uma lista de n números, a pesquisa binária precisa de
log2n para retornar o valor correto, enquanto a pesquisa simples precisa de n
etapas.
### Logaritmos
- log10 100 quer dizer: "Quantos 100 podemos multiplicar para chegar em 100?"
- Ou seja 2, pois 10 * 10 = 100
- Então log10 100 = 2
- Logaritmos são o oposto de exponenciais.
- Nesse caso levamos em conta que log sempre significa log2
