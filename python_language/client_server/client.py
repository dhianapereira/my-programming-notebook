from config.server_config import *
from socket import *

clientSocket = socket(AF_INET, SOCK_DGRAM)

word = input("Type a word: ")

clientSocket.sendto(word.encode(), (SERVER_NAME, SERVER_PORT))
amountVowels, serverAddress = clientSocket.recvfrom(2048)
print("The amount of vowels is " + amountVowels.decode())

clientSocket.close()