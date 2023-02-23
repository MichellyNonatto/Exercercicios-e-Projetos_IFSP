"""Efetuar o cálculo e apresentar o valor de uma prestação de um bem em atraso, utilizando a fórmula:
prestacao = valor + (valor (taxa / 100) tempo)"""

valor = float(input("Informe o valor em débito: "))
taxa = float(input("Informe a taxa sobre o produto: "))
tempo = float(input("Informe o tempo de atraso: "))
prestacao = valor+(valor*(taxa/100)*tempo)
print("O valor á ser pago é de R${:.2f}".format(prestacao))