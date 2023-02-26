"""Faça um programa para calcular e exibir a quantidade de parcelas sem juros e o valor de cada parcela, conforme o valor da compra digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Valor da Compra	Número de Parcelas
Até 100,00	2
De 100,00 a 200,00	3
De 200,00 a 400,00	4
Acima de 400,00	5"""

valor = float(input("Informe o valor pago: "))
parcela = 0

if(valor < 100):
  parcela = 2
elif(valor >= 100 and valor < 200):
  parcela = 3
elif(valor >= 200 and valor < 400):
  parcela = 4
else:
  parcela = 5

print(f"Até {parcela} vezes sem juros.")