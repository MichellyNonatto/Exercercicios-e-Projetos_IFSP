# Faça um programa que leia as repostas de três questões de múltipla escolha (a, b, c, d). Em seguida, leia o gabarito dessas questões, ou seja, as respostas corretas. Depois, compare as respostas dadas com as do gabarito e indique quantas respostas estão corretas

respostas = ['a', 'd', 'a', 'c']
n = [input("Insira a resposta 1: "),input("Insira a resposta 2: "),input("Insira a resposta 3: "),input("Insira a resposta 4: ")]
acerto, erro = 0, 0
for x in range(len(respostas)):
  if n[x] == respostas[x]:
       acerto += 1
  else: 
    erro += 1
  x += 1

print(f"\nVocê acertou um total de {acerto} e errou um total de {erro}.\n\nSuas respostas: {n}.\nRespostas corretas: {respostas}.")