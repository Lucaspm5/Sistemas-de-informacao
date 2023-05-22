custo_total = 200
max_lucro = 0
max_preco = 0
max_vendas = 0

for preco_ingresso in range(500, 100, -50):

    quantidade = 120 + (500 - preco_ingresso) * 26 // 50
    lucro_esperado = (preco_ingresso / 100 * quantidade) - custo_total

    print(f"preço ingresso = {preco_ingresso / 100:.2f}, quantidade = {quantidade}, lucro = {lucro_esperado:.2f}")

    if lucro_esperado > max_lucro:
        max_lucro = lucro_esperado
        max_preco = preco_ingresso / 100
        max_vendas = quantidade

print(f"\nLucro máximo = {max_lucro:.2f}")
print(f"Preço do ingresso = {max_preco:.2f}")
print(f"Quantidade vendida = {max_vendas}")
