while True:
    a = int(input())
    if a < 0:
        break
    else:
        if a < 16:
            fatorial = 1
            for i in range(1,a+1):
                fatorial *= i
            print(fatorial)
