#Faça um programa que leia três valores que representam os lados de um triângulo. Primeiramente, verifique se os lados podem formar um triângulo ( a soma de dois lados não pode ser menor que o terceiro lado ). Caso possa formar um triângulo, indique se este é equilátero, isósceles ou escaleno.

lados, igual = [], 0
while len(lados) < 3:
     lado = int(input("Insira o lado do triângulo: "))
     lados.append(lado)

if lados[0] + lados[1] >= lados[2] and lados[1] + lados[2] >= lados[0] and lados[2] + lados[0] >= lados[1]: print("É um triângulo")
else: print("Não é um triângulo.\n")

for i in lados:
     

print("equilátero.") if igual == len(lados) else print("não sei")
