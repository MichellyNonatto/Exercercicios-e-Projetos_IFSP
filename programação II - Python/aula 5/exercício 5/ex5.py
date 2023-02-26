"""Faça um programa para calcular e exibir a valor do imposto de ISS de uma nota fiscal de serviços, conforme o valor total de serviços especificado na mesma digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Valor da Nota Fiscal	Porcentagem de ISS
Até 5.000,00	4%
De 5.000,00 a 10.000,00	6%
De 10.000,00 a 20.000,00	13%
Acima de 20.000,00	16%"""

valor = float(input("Informe o valor totaal do serviço: "))
iss = 0

if(valor < 5000):
  iss = 4
elif(valor >= 5000 and valor < 10000):
  iss = 6
elif(valor >= 10000 and valor < 20000):
  iss = 13
else:
  iss = 16

print(f"A porcentagem o iss é de {iss}%, o valor será de R${valor*(iss/100):.2f}.")