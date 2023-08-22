SMALLEST = 0.00001

number = float(input("Digite um numero: "))
b = 2

while abs(number - (b * b)) > SMALLEST:
    p = (b + (number / b)) / 2
    b = p

print(f"O resultado aproximado da raiz quadrada de {number:.2f} é {p:.2f}")
