#Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre salário-base.

salarioBase = float(input("Informe seu salário base: "))

imposto = (7/100)*salarioBase
gratificação = (5/100)*salarioBase

print(f"O salário que você irá receber é de R${(salarioBase-imposto)+gratificação}")