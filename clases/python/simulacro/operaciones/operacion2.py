def piramide(n):
    for i in range(1, n + 1):
        espacios = n - i 
        print(" " * espacios + "*" * (2 * i - 1))