def insertion_sort(vetor, n):
    for i in range(0, n):
        chave = vetor[i]
        j = i
        while j > 0 and vetor[j-1] > chave:
            vetor[j] = vetor[j - 1]
            j -= 1
        vetor[j] = chave


v = [3, 5, 2, 1, 9]
insertion_sort(v, len(v))
print(v)
