#Elabore um programa que calcule e exiba a média aritmética de 5 números ( k, x, y, z, w).

k = float(input("Inserira a nota: "))
x = float(input("Inserira a nota: "))
y = float(input("Inserira a nota: "))
z = float(input("Inserira a nota: "))
w = float(input("Inserira a nota: "))

media = (k + x + y + z + w) / 5
print("A média aritimética das notas é de: {:.1f}".format(media))