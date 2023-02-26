"""Faça um programa para calcular e exibir a valor do imposto de ICMS de um produto, conforme a classificação do tipo de produto e do valor de custo do mesmo digitado pelo usuário (incluindo centavos – cuidado com o uso do tipo de dados correto).¶
Classificação do Produto	Porcentagem de ICMS
Cesta básica	isento
Eletrônicos	25%
Serviços	18%
Os demais produtos	12%"""

produtoLista = ["Cesta básica", "Eletrônicos", "Serviços"]
valor = float(input("Informe o valor produto adquirido: "))
i = int(0)
print("Lista de tipos de produtos\n")
for i in produtoLista:
  print(produtoLista[i])


produto = input("\nInforme o nome do tipo de produto adquirido: ")
imposto = 0

if(produto == produtoLista[0]): 
  print("O imposto ICMS vem insento")
  imposto == 0
elif(produto == produtoLista[1]): 
  imposto = 25
elif(produto == produtoLista[2]):
  imposto = 18
else:
  imposto = 12

icms = valor*(imposto/100)
print(f"\nO valor acrescentado do imposto é de R${icms:.2f}.")