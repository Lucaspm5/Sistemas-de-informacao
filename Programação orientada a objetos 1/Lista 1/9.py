n = int(input("Digite a quantidade de termos da sequência de Fibonacci: "))

a = 0
b = 1

for i in range(n):
  print(a, end=" ")
  c = a + b
  a = b
  b = c
print()


