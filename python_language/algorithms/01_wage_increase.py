wage = float(input("Digite o valor do salário: "))
percentage = float(input("Digite a porcentagem do aumento: "))

increase = (wage * (percentage / 100))
new_wage = wage + increase

print("O valor do aumento foi de R$%.2f" % increase)
print("Com o aumento o novo salário é de R$%.2f" % new_wage)