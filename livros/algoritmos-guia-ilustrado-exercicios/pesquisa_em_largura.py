from collections import deque
from random import randint


grafo = {}
grafo["voce"] = ["alice", "bob", "claire"]
grafo["bob"] = ["anuj", "peggy"]
grafo["alice"] = ["peggy"]
grafo["claire"] = ["thom", "jonny"]
grafo["anuj"] = []
grafo["peggy"] = []
grafo["thom"] = []
grafo["jonny"] = []

fila_de_pesquisa = deque()
fila_de_pesquisa += grafo['voce']


def pessoa_e_vendedor(pessoa):
    num = randint(0, 3)
    if num == 1:
        return True
    else:
        return False


# while fila_de_pesquisa:
#   pessoa = fila_de_pesquisa.popleft()
#    if pessoa_e_vendedor(pessoa):
#        print(f'{pessoa} é um vendedor de manga!')
#    else:
#        fila_de_pesquisa += grafo[pessoa]


def pesquisa(nome):
    fila_de_pesquisa = deque()
    fila_de_pesquisa += grafo[nome]
    verificadas = []

    while fila_de_pesquisa:
        pessoa = fila_de_pesquisa.popleft()
        if not pessoa in verificadas:
            if pessoa_e_vendedor(pessoa):
                print(f'{pessoa} é um vendedor de manga!')
                return True
            else:
                fila_de_pesquisa += grafo[pessoa]
                verificadas.append(pessoa)
    return False


pesquisa('voce')
