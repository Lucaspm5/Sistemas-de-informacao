def binario(decimal):
    if decimal == 0:
        return ''
    else:
        return binario(decimal // 2) + str(decimal % 2)
#---------------------------
decimal = int(input('Digite um número decimal: '))

result = binario(decimal)

print(f'O número binário é: {result}')
