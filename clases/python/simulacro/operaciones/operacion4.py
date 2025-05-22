def imprimirCuantosPrimos(N):
    contador = 0
    for i in range(2, N + 1):
        es_primo = True
        for j in range(2, int(i ** 0.5) + 1):
            if i % j == 0:
                es_primo = False
                break
        if es_primo:
            contador += 1
    print(f"Cantidad de números primos entre 1 y {N}: {contador}")