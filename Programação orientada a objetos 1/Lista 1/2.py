a = float(input())

auxiliary = (a > 50)

if auxiliary:
    cobranca = (a - 50) * 4
    print(cobranca)
else:
    print("Não há cobrança")