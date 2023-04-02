#Faça um programa que leia um número inteiro e diga se este é positivo, negativo ou zero.

n = int(input("Digite um valor  inteiro: "))

if n > 0:
  print("%i é positivo."%(n))
elif n == 0:
  print("%i é igual a 0"%(n))
else:
  print("%i é negativo."%(n))