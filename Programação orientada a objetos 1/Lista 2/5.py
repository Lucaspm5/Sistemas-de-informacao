def Fatorial(n):
    fat = 1
    for i in range(n, 1, -1):
        fat *= i
    return fat
#---------------------------
n, p = map(int, input().split())

result = Fatorial(n)
auxiliary = Fatorial(n-p)

arranjo = result/auxiliary
combinacao =  result/(Fatorial(p) * auxiliary)

print(f'Arranjo: {arranjo} Combinacao: {combinacao}')
