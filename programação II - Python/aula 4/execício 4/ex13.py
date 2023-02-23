#Dado um polígono convexo de n lados, podemos calcular o número de diagonais diferentes (nd) desse polígono pela fórmula: nd = n * (n - 3) / 2. Fazer um programa que leia quantos lados tem o polígono, calcule e escreva o número de diagonais diferentes (nd) do mesmo.

n = int(input("Inserir a quantidade de lados do polígono: "))
nd = int(n*(n-3/2))
print(f"A quantidade de diagonais diferentes é de: {nd}.")
