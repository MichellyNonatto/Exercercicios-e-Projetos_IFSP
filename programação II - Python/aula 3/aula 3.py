# -*- coding: utf-8 -*- 

#Tipos de variáveis
print(type(1))
print(type("texto"))
print(type(True))
print(type([123, "abc", 2.5697, "programa em python"]))
print(type((6484, 2.54648, "Programação")))
print(type({4568, "Computação", "Informação", 100101}))
print(type({"fruta":"maçã", "número":"25"}))


"""
Diferença de 
type(variável) 
isinstance(variável, tipoDeDado)
"""

x = "string"

if type(x) == str:
    print("A variável x é uma string!")
else:
 print("A variável x não é um string!")


z = 10
if isinstance(z, int):
    print("A variável z é uma instância do tipo de dado inteiro!")
else:
    print("A variável z não é uma instância do tipo de dado inteiro!" )
type(z)

print(isinstance(z, int))

#comentário em uma linha com Python
"""Comentário
em multiplas
linhas com 
Python"""

#Funções de saída
nome = "Michelly"
numero = 19
altura = 1.65
dados = ["feminino", 15, "abril", 2003]

print("\nMeu nome é %s e tenho %i anos"%(nome, numero))
print("Tenho {0} de altura".format(altura))
print(f"Sou do genêro {dados[0]}, e nasci em {dados[1]} {dados[2]} {dados[3]}.\n")



#Formatando casas decimais
a = 35000.214
print("Valor original: %f"%(a))                        
print("Antes da vírgula: {:.5}".format(a))
print(f"Depois da vírgula: {a:.1f}\n")

milhao = 2001564
print(f"{milhao:,}")

ip = 121314677
print("{:_}".format(ip))

#Porcentagem
print("\nPORCENTAGEM----------------")
print(f"A porcentagem de 5/8 é igual à: {5/8:.2%}")
