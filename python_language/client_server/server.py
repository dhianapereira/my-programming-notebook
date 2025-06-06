from config.server_config import *
from utils.get_amount_vowels import *
from socket import *

serverSocket = socket(AF_INET, SOCK_DGRAM)
serverSocket.bind((SERVER_NAME, SERVER_PORT))
print("The server is ready!")

while 1:
	word, clientAddress = serverSocket.recvfrom(RECV_FROM)
	amountVowels = str(getAmountVowels(word.decode())).encode()
	serverSocket.sendto(amountVowels, clientAddress)