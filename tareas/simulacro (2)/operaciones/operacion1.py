def funcion1(N):
    contador = 0
    for i in range(1, N + 1):
        if i % 3 == 0 or i % 10 == 3:
            contador += 1
    print(f"El número de enteros entre 1 y {N} que son múltiplos de 3 o terminan en 3 es: {contador}")
    