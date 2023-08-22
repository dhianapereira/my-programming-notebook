wage = float(input("Digite o valor do salário: "))

if wage > 1250:
    increase = wage * 0.1
else:
    increase = wage * 0.15

print("O valor do aumento foi de R$%.2lf" % increase)
