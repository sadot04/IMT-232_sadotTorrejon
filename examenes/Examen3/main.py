from funciones import sumaDeDivisores, imprimirTriangulo, mostrarNPrimos, fibonacciInversa
while True:
    print("----- MENÚ DE FUNCIONES -----\n" 
    "1. Calcular la suma de todos los divisores de un número N (excluyendo el propio número).\n"
    "2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N.\n" 
    "3. Mostrar los primeros N números primos.\n" 
    "4. Generar la secuencia de los primeros N términos de la serie de Fibonacci inversa.\n" \
    "5. Salir del programa." )
    opcion = int(input("Seleccione una opción:"))
    
    if opcion == 1:
        N = int(input("Ingrese un numero: "))
        sumaDeDivisores(N)
    if opcion == 2:
        N = int(input("Ingrese un numero: "))
        imprimirTriangulo(N)
    if opcion == 3:
        N = int(input("Ingrese un numero: "))
        mostrarNPrimos(N)      
    if opcion == 4:
        N = int(input("Ingrese un numero: "))
        fibonacciInversa(N)
    if opcion == 5:
        print("Adios \n Saliendo del programa ...")
        break

