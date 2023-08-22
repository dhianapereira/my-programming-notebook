
def calculator(operation):

    if operation == 1:
        print("\n")
        for i in range(10):
            for j in range(10):
                print(f"{i} + {j} = {i + j}")
            print("\n")
    elif operation == 2:
        print("\n")
        for i in range(10):
            for j in range(10):
                print(f"{i} - {j} = {i - j}")
            print("\n")
    elif operation == 3:
        print("\n")
        for i in range(10):
            for j in range(10):
                print(f"{i} * {j} = {i * j}")
            print("\n")
    elif operation == 4:
        print("\n")

        i = 1
        j = 1

        while(i <= 10):
            while(j <= 10):
                print(f"{i} / {j} = {i/j:.1f}")
                j += 1
                
            i += 1
            j = 1

        print("\n")
    elif operation == 0:
        exit()
    else:
        print("Operação inválida")


while(1):
    print("CALCULADORA - MENU")
    print("1 - Adição")
    print("2 - Subtração")
    print("3 - Multiplicação")
    print("4 - Divisão")
    print("0 - Sair")

    op = int(input("Qual a opção?\n"))

    calculator(op)
