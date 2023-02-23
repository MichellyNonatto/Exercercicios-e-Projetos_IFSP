#Escreva um programa que solicite ao usuário dois números e apresente na tela os resultados das operações aritméticas (soma, subtração, multiplicação, divisão, resto da divisão, exponenciação, radiciação).

x = float(input("Informe um valor: "))
y = float(input("Informe um valor: "))

print("%.0f + %.0f = %.0f\n"%(x, y, (x+y)))
print("%.0f - %.0f = %.0f\n"%(x, y, (x-y)))
print("%.0f x %.0f = %.0f\n"%(x, y, (x*y)))
print("%.0f / %.0f = %.0f\n"%(x, y, (x/y)))
print("%.0f /r %.0f = %.0f\n"%(x, y, (x%y)))
print("%.0f ^ %.0f = %.0f\n"%(x, y, pow(x, y)))
print("%.0f \u221A %.0f = %.0f\n"%(x, y, pow(x, 1/y)))



