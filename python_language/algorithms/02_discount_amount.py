product_value = float(input("Digite o valor da mercadoria: "))
discount_percentage = float(input("Digite o percentual de desconto: "))

payment = product_value - (product_value * (discount_percentage / 100))

print("O valor do desconto é de %.2f%%" % discount_percentage)
print("Com o desconto o valor à ser pago é de R$%.2f" % payment)