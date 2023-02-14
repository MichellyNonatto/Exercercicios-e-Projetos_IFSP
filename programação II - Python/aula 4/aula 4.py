#Converção de valores
x = 50
y = 2.567
z = '''44'''

print(type(x), type(y), type(z))
x = float(x)
y = int(y)
z = int(z)
print(type(x), type(y), type(z))

#Arredondamento
y = 74.166
print(round(y, 2))

#Modificação das strings
frase = 'O rato roeu a roupa do rei de Roma'

print("\n")
print(frase.upper())
print(frase.lower())
print(frase.split())
print(frase.split('o'))
print(frase.capitalize())
print(frase.replace('o', '#'))

#Mais sobre o print
print("Rave\'s Home")
#print("Isto é um sol: \u2600")


