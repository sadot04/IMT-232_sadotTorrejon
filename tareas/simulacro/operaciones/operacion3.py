def serieAlernada(N):
    for i in range(1, N + 1):
        if i % 2 == 0:
            print(-i, end=", ")
        else:
            print(i, end=", ")