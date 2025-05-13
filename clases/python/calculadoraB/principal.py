from operaciones import sumar, restar, multiplicar, dividir

print("Seleccione una operación:")
print("1. Sumar")
print("2. Restar")
print("3. Multiplicar")
print("4. Dividir")
opcion = int(input("Ingrese el número de la operación deseada:"))

n1 = int(input("Ingrese el primer numero: "))
n2 = int(input("Ingrese el segundo numero: "))

if opcion == 1:
    print("La suma es:", sumar(n1, n2))
if opcion == 2:
    print("La resta es:", restar(n1, n2))
if opcion == 3:
    print("La multiplicación es:", multiplicar(n1, n2))
if opcion == 4:
    print("La división es:", dividir(n1, n2))
