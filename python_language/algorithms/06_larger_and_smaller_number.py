array = []

for i in range(3):
    array.append(int(input("Digite o %dº número: " % (i + 1))))

    if i != 0:
        if larger_number < array[i]:
            larger_number = array[i]

        else:
            smallest_number = array[i]
    else:
        larger_number = array[i]
        smallest_number = array[i]

print("O MAIOR número é: %d" % larger_number)
print("O MENOR número é: %d" % smallest_number)
