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
#### Exercícios
1.1 - Suponha que você tenha uma lista com 128 nomes, e esteja fazendo uma pesquisa binária. Qual seria o número máximo de etapas que você levaria para encontrar o nome desejado?
  - 128 -> 64 -> 32 -> 16 -> 8 -> 4 -> 2 -> 1
  - 1      2     3     4     5    6    7    8 etapas
1.2 - Suponha que você duplique o tamanho da lista. Qual seria o número máximo de etapas agora?
  - 9 etapas
### Logaritmos
- log10 100 quer dizer: "Quantos 100 podemos multiplicar para chegar em 100?"
- Ou seja 2, pois 10 * 10 = 100
- Então log10 100 = 2
- Logaritmos são o oposto de exponenciais.
- Nesse caso levamos em conta que log sempre significa log2


### Tempo de execução
- Busca simples tem tempo linear, pois o tempo cresce de forma linear de acordo com o crescimento do tamanho da lista.
- Na busca binária, se a lista tem 100 itens, precisa-se de, no máximo, sete tentativas. Se tem 4 bilhões, precisa-se de no máximo 32 tentativas. A busca binária é executada em tempo logaritmico.

### Notação BigO
- A notação BigO é uma notação que diz o quão rápido é um algoritmo.
- Tempos de execução crescem com velocidades diferentes
- A notação BigO não forneçe o tempo em segundos, ela permite que você compare o número de operações, ela informa o quão rapidamente um algoritmo cresce.
- A pesquisa binária precisa de log n operações e a pesquisa simples precisa de n operações.
- A notação bigO forneçe o tempo de execução para a pior das hipóteses.

#### Alguns exemplos comuns de tempos de execução Big O
- O(log n), também conhecido como tempo logarítmico. Exemplo: Pesquisa binária.
- O(n), também conhecido como tempo linear. Exemplo: Pesquisa simples.
- O(n * log n), Exemplo: um algoritmo rápido de ordenação, como a ordenação quicksort.
- O(n²), Exemplo: Um algoritmo de ordenação, como a ordenação por seleção.
- O(n!), Exemplo: Um algoritmo bastante lento, como o caixeiro viajante.
**Existem outros tempos de execução, mas esses são os 5 mais comuns**

#### Principais pontos até agora
- A rapidez de um algoritmo não é medida em segundos, mas pelo crescimento do número de operações.
- Em vez disso, discutimos sobre o quão rapidamente o tempo de execução de um algoritmo aumenta conforme o número de elementos aumenta.
- O tempo de execução de algoritmos é expresso na notação Big O.
- O(Log n) é mais rápido que O(n), e O(log n) fica ainda mais rápido conforme a lista aumenta.

#### Exercícios
- Forneça o tempo de execução para cada um dos casos a seguir em termos da notação Big O.
1.3 - Você tem um nome e deseja encontrar o número de telefone para esse nome em uma agenda telefônica.
O(log n)
1.4 - Você tem um número de telefone e deseja encontrar ele em uma agenda telefônica. (Dica: Deve procurar pela agenda inteira).
O(n)
1.5 - Você quer ler o número de cada pessoa na agenda telefonica.
O(n)
1.6 - Você quer ler os números apenas dos nomes que começam com A.
?

#### O caixeiro-viajante
- Tem complexidade O(n!)
- O caixeiro precisa percorrer todas as cidades de uma determinada lista de cidades, para chegar ao percurso mais simples, o caixeiro precisa percorrer num_cidades! vezes.
- Ou seja tempo de execução do caixeiro viajante é O(n!)
- É um problema até o momento sem solução.

### Recaptulando...
- A pesquisa binária é muito mais rápida que a pesquisa simples
- O(log n) é mais rápido que O(n), e O(log n) fica mais rápido conforme os elementos da lista aumentam.
- A rapidez de um algoritmo não é medida em segundos.
- O tempo de execução de um algoritmo é medido por meio de seu crescimento.
- O tempo de execução de algoritmos é expresso na notação Big O.

## Ordenação por seleção - Arrays e listas encadeadas
- Arrays e listas encadeadas são 2 tipos de estruturas básicas.
- Arrays são fundamentais, porém as vezes é melhor usar listas encadeadas.

### Como funciona a memória
- O computador se parece com um grande conjunto de gavetas, cada gaveta tem seu endereço, e cada gaveta guarda um item.
- Se quiser armazenar multiplos items, existem 2 formas, arrays e listas

### Arrays e listas encadeadas
- Usar um array significa dizer que toda suas tarefas estão armazenadas contiguamente (uma ao lado da outra) na memória.
- Caso falte memória em um determinado lugar é necessario mover todos os itens para algum lugar que eles caibam contiguamente.
- Por via das dúvidas você pode solicitar mais espaços que o necessário, porém isso gera várias desvantagens.
- Pode ser que sobre espaços, mas ele está reservado para você, então ninguém mais poderá usar a memória.

#### Listas encadeadas
- Com uma lista encadeada os itens podem estar em qualquer lugar da memória.
- Cada item além do valor, armazena o próximo item da lista.
- Um monte de endereços aleatórios estão armazenados.
- Tenho que percorrer toda a lista até achar o item que procuro.

#### Arrays
- Você sabe o endereço de cada item.
- Arrays são ótimos se você deseja ler elementos aleatórios.

#### Terminologia
- Os elementos de um array são numerados, essa numeração começa no zero e não no um.
- A posição de um elemento é chamado de índices

#### Inserindo algo no meio da lista
##### Lista desordenada
- Para inserir algo em uma lista encadeada, basta mudar o endereço do item anterior.
- Para arrays, você deve mover todos os itens que estão abaixo do endereço
de inserção.

### Deleções
- É mais fácil em listas encadeadas, pois é necessário apenas mudar o endereço ao qual o elemento anterior está apontando.
**O que é mais usado?**
Depende...
Porém arrays são mais comuns...

### Ordenação por seleção
- Tempo de execução O(n²)

### Recapitulando
- A memória do seu computador é como um conjunto gigante de gavetas.
- Quando se quer armazenar múltiplos elementos, usa-se um array ou uma
lista.
- No array, todos os elementos são armazenados um ao lado do outro.
- Na lista, os elementos estão espalhados e um elemento armazena o
endereço do próximo elemento.
- Arrays permitem leituras rápidas.
- Listas encadeadas permitem rápidas inserções e eliminações.
- Todos os elementos de um array devem ser do mesmo tipo (todos ints,
todos doubles, e assim por diante).

## Recursão
- É uma técnica usada em muitos algoritmos.
- Estratégia dividir para conquistar
- Função chama a sí própria

### Caso base e caso recursivo
- Como a função recursiva chama a sí própria, é fácil causar um loop infinito.

### A pilha
- Call stack
- push **adicione um item ao topo**
- pop **remova um item do topo e leia ele**

### A pilha de chamada
- 
A pilha de chamadas, ou call stack em inglês, é uma estrutura de dados fundamental em programação. Funciona como uma pilha de pratos em um buffet: o último prato colocado é o primeiro a ser retirado. Da mesma forma, na call stack, as funções chamadas são empilhadas uma sobre a outra conforme são invocadas, e a última função adicionada é a primeira a ser executada. Isso ocorre porque as funções precisam esperar que suas funções internas sejam concluídas antes de retornarem seus resultados. Quando uma função termina, ela é removida da pilha, permitindo que a execução retorne para a função anterior. Isso continua até que todas as funções na pilha tenham sido executadas e a pilha esteja vazia. A call stack é essencial para o controle de fluxo em programas e é fundamental para entender como as linguagens de programação funcionam internamente.

### Recapitulando recursão.
- Recursão é quando uma função chama a si mesma
- Toda função recursiva **deve** ter dois casos, o caso base e o caso recursivo.
- Uma pilha tem duas operações, push e pop
- Todas as chamadas de funções vão para a call-stack.
- A call-stack pode ficar muito grande e ocupar muita memória.

## Quicksort
- Esse algoritmo usa a técnica dividir para conquistar.

### Técnica dividir para conquistar
- Dividir para conquistar (DC)
- Os algoritmos que usam essa técnica são recursivos.
- Para resolver um problema utilizando essa técnica, você tem que seguir 2 passos:
  - Descubra o caso-base, que deve ser o caso mais simples possível.
  - Divida ou diminua o seu problema até que ele se torne o caso base.
