#Sabendo que a relação entre vértices, arestas e faces de um objeto geométrico é dada pela fórmula: vértices + faces = arestas + 2. Elabore um programa que calcule o número de vértices de um objeto geométrico genérico. A entrada será o número de faces e arestas (dadas por um número inteiro e positivo) e a saída será o número de vértices.

f = int(input("Inserir a quantidade de faces do objeto geométrico: "))
a = int(input("Inserir a quantidade de arestas do objeto geométrico: "))
v = a + 2 - f
print("A quantidade de vértices deste objeto é igual à: %i"%(v))