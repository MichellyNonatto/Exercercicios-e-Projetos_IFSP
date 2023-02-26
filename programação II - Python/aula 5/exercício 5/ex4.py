"""Faça um programa para calcular e exibir o desconto de IR conforme o valor do salário digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Faixa Salarial	Desconto de IR
Até 1.250,00	isento
De 1.250,00 a 1.900,00	11%
De 1.900,00 a 2.700,00	25%
Acima de 2.700,00	27.5%"""

salario = float(input("Informe o valor do seu salário: "))
ir = 0

if(salario < 1250):
  print("A taxa do IR é insenta.")
elif(salario >= 1250 and salario < 1900):
  ir = 11
elif(salario >= 1900 and salario < 2700):
  ir = 25
else: 
  ir = 27.5

print(f"\nA porcentagem do IR é de {ir:.2f}%, tendo assim um desconto de R${salario*(ir/100):.2f}.")