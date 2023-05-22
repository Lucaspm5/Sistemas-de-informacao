def fatorial(n):
    fatorial = 1
    for i in range(n, 1, -1):
        fatorial *= i
    return fatorial
#---------------------------
def Fatorial(n):
    if n == 0 or n == 1: return 1
    else:
        return n * Fatorial(n-1)
#---------------------------
a = int(input('Informe um número:'))

result = fatorial(a)

print('Fatorial iterativo:')
print(f'{a}! - ', end = '')

for i in range(1, a+1):
    if i == a:
        print(f'{i}', end = ' ')
    else:
        print(f'{i} X', end = ' ')

print(f'= {result}')
print('Fatorial recursivo:')
print(f'{a}! - ', end = '')

for i in range(1, a+1):
    if i == a:
        print(f'{i}', end = ' ')
    else:
        print(f'{i} X', end = ' ')

print(f'= {Fatorial(a)}')
