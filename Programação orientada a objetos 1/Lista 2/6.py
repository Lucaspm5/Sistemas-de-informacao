def verifica_primo(n):
    for i in range(2, n):
        if n % i == 0:
            return False
    return True
#---------------------------
while True:
    try:
        a, b = map(int, input().split())
        if a < 0 or b < 0:
            raise ValueError('Os valores devem ser positivos')
        break
    except ValueError as apont_error:
        print(apont_error)

existe_primo = False
auxiliary = a < b

if auxiliary:
    for i in range(a + 1, b):
        if verifica_primo(i):
            print(f'{i}', end=' ')
            existe_primo = True
elif not auxiliary:
    for i in range(a, b,-1):
        if verifica_primo(i):
            print(f'{i}', end=' ')
            existe_primo = True

if not existe_primo:
    print('Nenhum primo na sequencia')
