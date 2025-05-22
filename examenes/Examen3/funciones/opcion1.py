def sumaDeDivisores(N):
    suma = 0
    for i in range(1,N):
        if (N%i == 0):
            suma = i + suma
    print("La suma de los divisores de",N , "desde 1 hasta", N, " es: " , suma)