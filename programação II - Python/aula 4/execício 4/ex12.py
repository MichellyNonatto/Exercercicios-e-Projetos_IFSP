#Criar um programa que efetue o cálculo da hora aula líquida (descontado o percentual de imposto) de um professor. Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.

valorAula = int(input("Informe o valor ganho por aula: "))
aulas =int(input("Informe a quantidade de aulas fornecidas: "))
inss = float(input("Informe o descondo do INSS: "))

valor = aulas*valorAula
desconto = (inss/100)*valor
salario = valor - desconto

print("O valor que irá receber é de R${:.2f}.".format(salario))