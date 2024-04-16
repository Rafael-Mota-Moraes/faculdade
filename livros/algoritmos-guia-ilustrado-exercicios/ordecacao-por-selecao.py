def busca_menor(arr):
    menor = arr[0]  # armazena o menor valor
    menor_indice = 0  # armazena o índice do menor valor

    for i in range(1, len(arr)):
        if arr[i] < menor:
            menor = arr[i]
            menor_indice = i

    return menor_indice


def ordenacao_por_selecao(arr):
    novoArr = []

    for i in range(len(arr)):
        menor = busca_menor(arr)
        novoArr.append(arr.pop(menor))

    return novoArr


arr = [4, 5, 2, 7, 3, 8, 6, 1]
arr_ordenado = []
arr_ordenado = ordenacao_por_selecao(arr)

print(arr_ordenado)
