def pesquisa_binaria(lista, item):

    # Baixo e alto acompanham a parte da lista que você está procurando
    baixo = 0
    alto = len(lista) - 1

    while baixo <= alto:  # Enquando não conseguiu chegar a um único elemento
        meio = int((baixo + alto) / 2)  # Verifica o elemento central
        chute = lista[meio]

        if chute == item:  # acha o item
            return meio

        if chute > item:  # O chute foi muito alto
            alto = meio - 1
        else:  # O chute foi muito baixo
            baixo = meio + 1

    return None  # O item não existe


minha_lista = [1, 3, 5, 7, 9]
print(pesquisa_binaria(minha_lista, 3))  # -> 1
print(pesquisa_binaria(minha_lista, -1))  # None (Item não existe)
