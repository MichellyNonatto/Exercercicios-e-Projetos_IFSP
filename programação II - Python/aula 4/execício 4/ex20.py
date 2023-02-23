#Escreva um programa que calcule e exiba na tela o perímetro e área de uma circunferência. Dados: area = Pi raio ** 2, perimetro = 2 Pi * raio.
raio = int(input("Informe o raio do círculo: "))
area = 3.14 * pow(raio, 2)
perimetro = 2*3.14*raio
print(f"A áre do círculo é igual á {area:.2f}m² e o perímetro é igual á {perimetro:.2f}m.")