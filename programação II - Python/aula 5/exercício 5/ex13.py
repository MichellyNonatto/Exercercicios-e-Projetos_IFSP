"""Faça um programa que simule uma calculadora com as quatro operações básicas (+, -, *, / ). O programa deve solicitar ao usuário a entrada de dois operandos e da operação a ser executada, na forma de menu. Dependendo da opção escolhida, deve ser executada a operação solicitada e escrito seu resultado. Utilize uma variável do tipo inteiro para armazenar a operação e utilize o comando caso para escolher a operação a ser executada a partir do operador."""

operador1 = float(input("Informe um valor: "))
operador2 = float(input("Informe um valor: "))

calculadora = [operador1+operador2, operador1-operador2, operador1*operador2, operador1/operador2]
print("\nEscolha uma das opções:\n1- soma\n2- subtrair\n3- multiplicar\n4- dividir")

x = int(input("\nEscolha: "))
x -= 1

print(f"\nO resultado é: {round(calculadora[x])}") if x >= 0 and x <= 3 else print("\nValor inserido estár incorreto.")
  