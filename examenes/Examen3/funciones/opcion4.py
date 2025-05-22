def fibonacciInversa(N):
    a = 0
    b = 1
    for i in range(N - 2): 
        a, b = b, a + b
    for i in range(N):
        print(b)
        b, a = a, b - a  

