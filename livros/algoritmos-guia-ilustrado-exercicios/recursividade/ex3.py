def contar_itens(lista):
    # Caso base: se a lista estiver vazia, o número de itens é 0
    if not lista:
        return 0
    # Caso recursivo: retira o primeiro item da lista e conta o restante recursivamente
    return 1 + contar_itens(lista[1:])


# Exemplo de uso:
minha_lista = [1, 2, 3, 4, 5]
print("Número de itens na lista:", contar_itens(minha_lista))
