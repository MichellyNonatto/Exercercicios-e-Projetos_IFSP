# Elaborar um programa que calcule e apresente em metros por segundo o valor da velocidade de um projétil que percorre uma distância em quilômetros a um espaço de tempo em minutos.

km = float(input("Indique um valor em quilometros por minuto (k/h): "))

ms = km/3.6

print(f"O resultado é {ms:.2f}m/s")