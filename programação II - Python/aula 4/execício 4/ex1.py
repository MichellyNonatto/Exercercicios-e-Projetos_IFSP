#Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas. Exiba, as notas, e a respectiva média.

lista = {
  'Adiministração': 0,
  'Linguagem de Programação II: ': 0,
  'Engenharia de Software: ': 0,
  'Banco de Dados: ': 0
}

soma = 0

for chave, nota in lista.items():
  lista[chave] = float(input(f"Digite a nota em {chave}: "))
  soma += lista[chave]

media = soma/len(lista)
print(f"A média de suas notas foi de: {media}")
print("Fim da execução do programa.")