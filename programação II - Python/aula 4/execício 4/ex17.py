# Elabore um programa que calcule e exiba quantas notas de 50, 10 e 1 são necessárias para se pagar uma conta cujo valor é fornecido.

n = float(input("Insira um valor: "))
x = n

notasDe50 = int(n//50)
n -= notasDe50*50
notasDe10 = int(n//10)
n -= notasDe10*10
notasDe1 = int(n//1)
n -= notasDe1*1

print(f"Para pagar R${x:.2f} você irá precisar de {notasDe50} notas de 50 reais, {notasDe10} notas de 10 reais e {notasDe1} moedas de 1 real.")
