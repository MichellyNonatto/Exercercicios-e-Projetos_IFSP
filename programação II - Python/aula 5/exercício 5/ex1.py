"""Faça um programa para calcular e exibir o desconto de INSS conforme o valor do salário digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Faixa salarial	Desconto de INSS
Até 600,00	7%
De 600,00 a 800,00	8%
De 800,00 a 1.200,00	9%
Acima de 1.200,00	11%"""

salarioBruto = int(input("Inserir o valor do seu salário: "))
desconto = 0

if (salarioBruto < 600):
  desconto = 7
elif (salarioBruto >= 600 and salarioBruto < 800):
  desconto = 8
elif (salarioBruto >= 800 and salarioBruto < 1200):
  desconto = 9
else:
  desconto = 11

salarioLiquido = salarioBruto - (salarioBruto * (desconto / 100))

print(
  f"O INSS descontará {desconto:.2f}%, seu salário liquido será de R${salarioLiquido}.")
