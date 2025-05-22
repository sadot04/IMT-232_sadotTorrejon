from operaciones import funcion1, piramide, serieAlernada, imprimirCuantosPrimos, esPalindromo
while True:
    print("----- MENÚ DE OPCIONES -----")
    print("1. Contar cuántos números entre 1 y N son divisibles por 3 o terminan en 3.")
    print("2. Imprimir una pirámide de asteriscos de altura N.")
    print("3. Dado un número N, mostrar la secuencia de los primeros N términos de la serie: 1, -2, 3, -4, 5, -6, ...")
    print("4. Mostrar la cantidad de números primos entre 1 y N.")
    print("5. Verificar si un número es palíndromo (número capicúa).")
    print("6. Salir del programa.")
    opcion = int(input("Ingrese el número de la opción deseada: "))
    if opcion == 1:
        N = int(input("Ingrese un número entero positivo: "))
        funcion1(N)
    if opcion == 2:  
        N = int(input("Ingrese la altura de la pirámide: "))
        piramide(N)
    if opcion == 3:
        N = int(input("Ingrese un número entero positivo: "))
        serieAlernada(N)
    if opcion == 4:
        N = int(input("Ingrese un número entero positivo: "))
        imprimirCuantosPrimos(N)
    if opcion == 5:
        N = int(input("Ingrese un número entero positivo: "))
        esPalindromo(N)
    if opcion == 6:
        print("Saliendo del programa... ,adiós")
        break
