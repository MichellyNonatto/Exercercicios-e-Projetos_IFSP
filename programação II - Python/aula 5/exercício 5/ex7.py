""" Faça um programa para calcular e exibir a valor dos juros de um empréstimo bancário, conforme o valor emprestado e o número de parcelas digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).¶
Números de Parcelas	Juros
Até 3	6%
De 3 a 6	9%
De 6 a 12	22%
Acima de 12	34%"""


valor = float(input("Informe o valor total do empréstimo: "))
parcelas = int(input("Informe o número de parcelas: "))
juros = 0

if(parcelas < 3):
  juros = 6
elif(parcelas >= 3 and parcelas < 6):
  juros = 9
elif(parcelas >= 6 and parcelas < 12):
  juros = 22
else: 
  juros = 34

print(f"\nO percentual de juros é de {juros}%. O valor acrecentado ao total a ser pago é de R${valor*(juros/100):.2f}.")
print(f"Valor total da compra é de R${valor+(valor*(juros/100)):.2f}.")