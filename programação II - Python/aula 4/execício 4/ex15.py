#Elabore um programa que permita a entrada de dois valores ( x, y ), troque seus valores entre si e então exiba os novos resultados.

x = int(input("Inserir o valor de x: "))
y = int(input("Inserir o valor de y: "))

x = x + y
y = x - y
x = x - y


print(f"x = {x}\t y = {y}")