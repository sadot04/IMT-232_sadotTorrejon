def esPalindromo(N):
    if N <= 0:
        print("El número debe ser un entero positivo mayor a 0.")
        return
    
    N_str = str(N)
    if N_str == N_str[::-1]:
        print(f"El número {N} es un palíndromo.")
    else:
        print(f"El número {N} no es un palíndromo.")