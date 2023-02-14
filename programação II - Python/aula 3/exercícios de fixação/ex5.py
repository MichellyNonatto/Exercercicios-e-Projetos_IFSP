#Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

lado = float(input("Digite o valor do lado do quadrado: "))
area = lado*lado

print("O dobro da área do quadrado é equivalente á: {:.2f}m².".format(area*area))
print("Fim da execução do programa.")