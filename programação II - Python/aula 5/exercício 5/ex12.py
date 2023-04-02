#Faça um programa que determine se um dado número é par ou ímpar.

n = int(input("Informe um valor: "))
print("O valor %i é par."%(n)) if n%2 == 0 else print("O valor %i é ímpar."%(n))