def energyValue(kwh, type_of_installation):

    if type_of_installation == 'R':
        if kwh <= 500:
            return kwh * 0.4
        else:
            return kwh * 0.65
    elif type_of_installation == 'C':
        if kwh <= 1000:
            return kwh * 0.55
        else:
            return kwh * 0.6

    elif type_of_installation == 'I':
        if kwh <= 5000:
            return kwh * 0.55
        else:
            return kwh * 0.6
    else:
        print("Operação inválida")
        exit()


kwh = float(input("Qual a quantidade de Kwh consumida? "))
type_of_installation = str(
    input("Qual o tipo de instalação? (R para residências, I para indústrias e C para comércios)\n")
)

print("O valor da energia é de R$%.2lf" % energyValue(kwh, type_of_installation))
