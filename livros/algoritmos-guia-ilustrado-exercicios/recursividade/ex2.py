
def soma_recursiva(lista):
    final = len(lista)
    total = 0
    final = final - 1
    if final >= 0:
        total = lista[final] + soma_recursiva(lista[:final])  # Correção aqui
    return total


print(soma_recursiva([2, 4, 6]))
