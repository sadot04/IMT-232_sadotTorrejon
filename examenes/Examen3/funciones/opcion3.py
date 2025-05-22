def mostrarNPrimos(N):
    contador = 0  
    numero = 2   

    while contador < N:  
        esPrimo = True
        for i in range(2, int(numero ** 0.5) + 1): 
            if numero % i == 0:
                esPrimo = False
                break
        if esPrimo:
            print(numero)  
            contador += 1 
        numero += 1 