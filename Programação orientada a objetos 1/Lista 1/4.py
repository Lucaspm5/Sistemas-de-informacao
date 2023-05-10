a = float(input("Digite o número de litros vendidos: "))
b = input("Digite o tipo de combustível (A para álcool, G para gasolina): ")

if b.lower() == 'a':
    preco = 3.45
    if a <= 20:
        desconto = 0.03
    else:
        desconto = 0.05
elif b.lower() == 'g':
    preco = 4.53
    if a <= 20:
        desconto = 0.04
    else:
        desconto = 0.06

valor_total = a * preco
valor_desconto = valor_total * desconto
valor_final = valor_total - valor_desconto

print("O valor a ser pago pelo cliente é R$ {:.2f}".format(valor_final))