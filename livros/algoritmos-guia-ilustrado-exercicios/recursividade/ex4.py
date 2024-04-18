def encontrar_maior(lista):
    # Verifica se a lista está vazia
    if not lista:
        return None  # Se a lista estiver vazia, retorna None

    # Inicializa o valor máximo com o primeiro elemento da lista
    maximo = lista[0]

    # Percorre a lista a partir do segundo elemento
    for item in lista[1:]:
        # Se o item atual for maior que o máximo atual, atualiza o máximo
        if item > maximo:
            maximo = item

    return maximo


# Exemplo de uso:
minha_lista = [10, 5, 8, 20, 15]
print("O valor mais alto na lista é:", encontrar_maior(minha_lista))
