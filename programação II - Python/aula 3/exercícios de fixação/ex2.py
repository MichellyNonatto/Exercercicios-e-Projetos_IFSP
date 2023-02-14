#Faça um Programa que peça as 4 notas bimestrais e mostre a média.

print("Digite 4 notas para fazer a média bimestral.")

x = float(input())
y = float(input())
z = float(input())
n = float(input())

soma = x+y+z+n
media = soma/4

print(f"A média é de {media:.2f}")
print("Fim da execução do programa.")