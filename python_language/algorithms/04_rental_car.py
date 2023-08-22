CAR_VALUE = 60.00
VALUE_KM = 0.15

km = int(input("Qual a quantidade de Km percorridos? "))
days = int(input("Qual a quantidade de dias que o carro passou alugado? "))

total = (days * CAR_VALUE) + (km * VALUE_KM)

print("O valor à ser pago é de R$%.2f" % total)