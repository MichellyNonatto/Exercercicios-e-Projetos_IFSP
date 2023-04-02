lista = [11, 56, 87]
lista1= []
lista2 = [[2,[3,5,69],21,3], [123,12],5]
print(lista2[0][1][1])
lista[2] = 1000
lista.append(87)
print("\n") #PULA LINHA

#Manipulando listas 

numeros = []
quadrados = []

for i in range(5):
  numeros.append(int(input("Insira um valor: ")))
  quadrados.append(pow(numeros[i], 2))

print(f"Números inseridos: {numeros}\nQuadrado desses números: {quadrados}.")

print("\n") #PULA LINHA

lista = [2, 3, "Palavra"]
for j in range(len(lista)):
  print(j) 
  
print("\n") #PULA LINHA

for p in range(len(lista)):
  print(p, lista[p])

lista1 = ['Ana', 'Paula', 'Müller', 'Giancoli']
lista2 = ['lab401', 'lab402', 'lab403']
lista3 = [10, 20, 30, 40] 
lista4 = lista1+lista2

for i in lista4[:]:
  if lista4.count('Ana') >= 1: lista4.remove('Ana')
print(lista4)

#compreensão de lista
lista = [pow(item, 2) for item in range(11)]
for i in lista: print(i)

nomes = ["fulano", 'ciclano', 'beutrano']
resultado = [str(item).upper() for item in nomes]

#com estrutura de desição
resultado.append([numero for numero in range(21) if numero%2==0])

#com estrutura de desição encadeado
resultado.append([1 if numero % 5 == 0 else 0 for numero in range(16)])

#Encremento de indice e elemento  em uma única linha do for
personagens = ['Batman', 'Conringa', 'Hulk', 'Mulher Maravilha']
for i, j in enumerate(personagens):
  print(i + 1, j)
