# Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas. Exiba, as notas, seus respectivos pesos e a média.

lista = {
  'Prova 1': 0,
  'Prova 2': 0,
  'Prova 3': 0,
}

soma, somaPeso = 0, 0


for chave, nota in lista.items():
  peso = 1
  
  lista[chave] = float(input(f"\nDigite a nota em {chave}: "))
  
  peso = float(input(f"Peço da {chave}: "))
  somaPeso += peso 
  
  if(peso<0): peso = 1

  nota = lista[chave] * peso
    
  soma += nota

media = soma/somaPeso
print(f"A média de suas notas foi de: {media:.1f}")
print("Fim da execução do programa.")