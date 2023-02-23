"""
Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo. Calcule e mostre o salário a receber seguindo as regras abaixo:
a hora trabalhada vale a metade do salário mínimo;
o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
o imposto equivale a 3% do salário bruto;
o salário a receber equivale ao salário bruto menos o imposto."""

horaTrabalhada = int(input("Informe o total de horas trabalhada: "))

salarioMinimo = float(input("Informe o valor do salário mínimo: "))

valorHoraTrabalhada = salarioMinimo/2
salarioBruto = valorHoraTrabalhada * horaTrabalhada
imposto = 0.03 * salarioBruto
salario = salarioBruto - imposto

print(f"Descontando os 3% de impostos, o salário a receber é de: R${salario:.2f}")