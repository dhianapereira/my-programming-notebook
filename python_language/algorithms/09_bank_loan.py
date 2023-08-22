house_value = float(input("Qual o valor da casa? "))
wage = float(input("Qual o valor do seu salário? "))
years = int(input("Em quanto tempo (anos) pretende pagar? "))

monthly_value = house_value / (years * 12)

if monthly_value < (wage * 0.3):
    print("Empréstimo aprovado!\n")
else:
    print("Empréstimo não aprovado!\n")
