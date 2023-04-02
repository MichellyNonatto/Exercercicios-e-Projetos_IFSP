"""Faça um programa para calcular e exibir a categoria do nadador, dado a sua idade.
Categoria	Faixa Etária
infantil A	de 5 a 8 anos
infantil B	de 8 a 10 anos
juvenil A	de 11 a 13 anos
juvenil B	de 14 a 17 anos
senior	maiores de 17 anos"""

idade = int(input("Informe sua idade: "))
turmaLista = ['não obtida','Infantil A', 'Infantil B', "Juvenil A", 'Juvenil B', 'Senior']
turma = 0

if idade >= 5 and idade < 8:
  turma = 1
elif idade >= 8 and idade <= 10:
  turma = 2
elif idade >= 11 and idade <= 13:
  turma = 3
elif idade >= 14 and idade <= 17:
  turma = 4
elif idade >= 18: 
  turma = 5
else:
  print("\nNão obtêmos turmas para está idade.")


print("Sua turma é: %s."%(turmaLista[turma]))