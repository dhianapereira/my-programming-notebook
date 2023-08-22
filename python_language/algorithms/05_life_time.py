LOST_MINUTES_LIFE = 10;
DAYS_IN_A_YEAR = 365;
MINUTES_IN_A_DAY = 1440;

amount_cigarettes = int(input("Quantos cigarros você fuma por dia? "))
years = int(input("Há quantos anos você fuma? "))

life_time = (amount_cigarettes * LOST_MINUTES_LIFE) * (years * DAYS_IN_A_YEAR)

print("Você perdeu %d dias de vida." % (life_time/MINUTES_IN_A_DAY))