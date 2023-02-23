"""Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário."""

salarioAntigo = float(input("Informe o seu salário: "))
percentual = float(input("Informe o percentual de aumento: "))

salarioNovo = (percentual/100)*salarioAntigo

print(f"O seu salário aumentou R${salarioNovo:.2f}. O total será de R${salarioAntigo+salarioNovo:.2f}")
print("Fim da execução do programa")