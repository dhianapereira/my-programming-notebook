number = str(input("Digite o numero: "))
size = len(number) - 1

i = 0

if (size + 1) < 3:
    print("É necessário um número de até três dígitos!")
else:
    while i < size and number[i] == number[size]:
        size -= 1
        i += 1

    if number[i] == number[size]:
        print("É um número palíndromo")
    else:
        print("Não é um número palíndromo")
