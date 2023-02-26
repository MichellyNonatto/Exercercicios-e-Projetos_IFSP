"""Faça um programa para calcular e exibir o desconto na compra do cliente, conforme o valor da compra do mesmo digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Valor da Compra	Desconto
Até 50,00	5%
De 50,00 a 100,00	8%
De 100,00 a 150,00	12%
Acima de 150,00	15%
"""

valor = float(input("Informe o valor total da compra: "))
desconto = 0

if (valor < 50):
  desconto = 5
elif (valor >= 50 and valor < 100):
  desconto = 8
elif (valor >= 100 and valor < 150):
  desconto = 12
else:
  desconto = 15

print(
  f"\nA porcentagem de desconto é de {desconto}%, o valor total subtraido é de R${valor*(desconto/100):.2f}."
)
print(f"O valor final da compra é de R${valor-(valor*(desconto/100)):.2f}.")