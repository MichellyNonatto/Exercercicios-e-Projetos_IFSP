""" Faça um programa para calcular e exibir o desconto na compra do cliente em uma farmácia, conforme o valor da compra do mesmo digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Valor da Compra	Desconto Medicamento
Até 150,00	5%
De 150,00 a 300,00	7%
De 300,00 a 500,00	10%
Acima de 500,00	20%"""

valor = float(input("Informe o valor a ser pago: "))
desconto = 0

if(valor < 150):
  desconto = 5
elif(valor >= 150 and valor < 300):
  desconto = 7
elif(valor >= 300 and valor < 500):
  desconto = 10
else: 
  desconto = 20

print(f"\n{desconto}% de desconto na sua compra.")
print(f"Valor total a ser pago: R${valor-(valor*(desconto/100)):.2f}")