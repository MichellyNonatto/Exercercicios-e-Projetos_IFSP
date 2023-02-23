#Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos para os quais fornece a quantidade de ração em gramas. Faça um programa que receba o peso do saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após cinco dias.

sacoDeRacao = float(input("Informe o peso do saco de Ração em quilos (Kg): "))
quantidadePorGato = float(input("Informe a quantidade de ração fornecida no dia para cada gato em gramas (g): "))
quantidadePorGato = (quantidadePorGato * 2)/1000
sacoDeRacao -= (quantidadePorGato * 5)

if(sacoDeRacao > 0): print(f"Restará um total de {sacoDeRacao}Kg de ração")
else: print(f"A quantidade de reação não é suficiente, falta o total de {sacoDeRacao*(-1)}Kg")