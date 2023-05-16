try:
    x = int(input("Informe um valor: "))
    print(y['p'])
    print(x/0)

except ZeroDivisionError as e:
    print(e)

except NameError:
    print("A variável 'y' não foi declarada!")