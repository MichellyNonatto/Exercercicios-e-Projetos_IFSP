"""Faça um programa para calcular e exibir a porcentagem de comissão de vendas de um vendedor, conforme o volume mensal de vendas do mesmo digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).
Volume Mensal de Vendas	Comissão de Vendas
Até 5.000,00	2%
De 5.000,00 a 10.000,00	5%
De 10.000,00 a 15.000,00	7%
Acima de 15.000,00	9%"""

vendas = float(input("Informe seu volume de vendas mensais: "))
porcentagem = 0

if(vendas < float(5000.00)):
  porcentagem = 2
elif(vendas >= float(5000.00) and vendas < float(10000.00)):
  porcentagem = 5
elif(vendas >= float(10000.00) and vendas < float(15000.00)):
  porcentagem = 7
else: 
  porcentagem = 9

comissao = vendas*(porcentagem/100)
print(f"A porcentagem conquistada foi de {porcentagem}%, a sua comissão é de R${comissao:.2f}.")