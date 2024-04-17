def regresiva(i):
    print(i)
    if i <= 1:  # caso base
        return
    else:  # caso recursivo
        regresiva(i - 1)


regresiva(4)
