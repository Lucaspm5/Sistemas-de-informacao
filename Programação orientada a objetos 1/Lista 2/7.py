def binario(decimal):
    binario = ''
    while decimal > 0:
        resto = decimal % 2
        binario = str(resto) + binario #concateno
        decimal //= 2
    return binario
#---------------------------
decimal = int(input('Digite um número decimal: '))

result = binario(decimal)

print(f'O número binário é: {result}')
