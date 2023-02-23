#Um trabalhador recebeu seu salário e o depositou em sua conta corrente bancária. Esse trabalhador emitiu dois cheques e agora deseja saber seu saldo atual. Sabe-se que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da conta está zerado.

contaCorrente = 0

contaCorrente = float(input("Informe o valor depositado: "))

cpmf = (0.38/100)*contaCorrente
valorFinal = contaCorrente - (cpmf*2)

print(f"O valor descontado da sua conta foi de: R${cpmf:.2f}. \n O valor restante na sua conte é de R${valorFinal:.2f}")