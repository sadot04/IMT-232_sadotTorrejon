def imprimirTriangulo(N):
    for i in range(1, N + 1):
        linea = ""
        for j in range(i): 
            linea += chr(65 + j) + " " 
        print(linea.strip())  
