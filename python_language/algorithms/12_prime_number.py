number = int(input("Digite um número: "))

if number == 1 or number == 0:
    print("Não é um número primo!")
elif number == 2:
    print("É um número primo!")
else:
    if number % 2 != 0:
        i = 3
        while i < number:
            if number % i == 0:
                print("Não é um número primo!")
                exit()

            i += 2
        print("É um número primo!")
    else:
        print("Não é um número primo!")
