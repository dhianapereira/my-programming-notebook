def calculator(first_number, second_number, operation):
    if operation == '+':
        return first_number + second_number

    elif operation == '-':
        return first_number - second_number

    elif operation == '*':
        return first_number * second_number

    elif operation == '/':
        return first_number / second_number

    else:
        print("Operação inválida")
        exit()


first_number = float(input("Digite o primeiro número: "))
second_number = float(input("Digite o segundo número: "))
operation = str(
    input("Qual a operação? soma (+), subtração (-), multiplicação (*) e divisão (/)\n")
)

print("O resultado é: %.2lf" % calculator(first_number, second_number, operation))
