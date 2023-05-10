a = float(input("Insira o valor que você ganha por hora: "))
b = float(input("Insira o número de horas trabalhadas no mês: "))

salario_bruto = a * b
ir = salario_bruto * 0.11
inss = salario_bruto * 0.08
sindicato = salario_bruto * 0.05
total_descontos = ir + inss + sindicato
salario_liquido = salario_bruto - total_descontos

print("Salário bruto: R$ {:.2f}".format(salario_bruto))
print("Desconto de IR (11%): R$ {:.2f}".format(ir))
print("Desconto de INSS (8%): R$ {:.2f}".format(inss))
print("Desconto de sindicato (5%): R$ {:.2f}".format(sindicato))
print("Total de descontos: R$ {:.2f}".format(total_descontos))
print("Salário líquido: R$ {:.2f}".format(salario_liquido))
