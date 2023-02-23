"""Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
O número digitado ao quadrado;
O número digitado ao cubo;
A raiz quadrada do número digitado;
A raiz cúbica do número digitado;
A soma do quadrado mais o cubo do número digitado."""

n = 0
while n <= 0:
  n = int(input("Declare um valor maior que 0: "))

print(f"\nO número digitado ao quadrado: {pow(n,2):.2f}")
print(f"\nO número digitado ao cubo: {pow(n,3):.2f}")
print(f"\nA raiz quadrada do número digitado: {pow(n,1/2):.2f}")
print(f"\nA raiz cúbica do número digitado: {pow(n,1/3):.2f}")
print(f"\nA soma do quadrado mais o cubo do número digitado: {(pow(n,2))+(pow(n,3)):.2f}")