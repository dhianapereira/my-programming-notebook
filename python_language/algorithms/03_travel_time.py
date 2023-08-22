distance = int(input("Qual a distância do seu destino (Km)? "))
average_speed = int(input("Qual a velocidade média esperada para a viagem (Km/h)? "))

time = distance / average_speed

print("O tempo gastado da viagem de carro é de %dh" % time)