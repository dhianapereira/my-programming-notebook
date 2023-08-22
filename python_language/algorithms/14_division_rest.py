number_1 = int(input("Digite o primeiro número (inteiro): "))
number_2 = int(input("Digite o segundo número (inteiro): "))

i = number_1
quotient = 0

while i >= number_2:
    i -= number_2
    quotient += 1

print("O resto da divisão é %d" % i)
