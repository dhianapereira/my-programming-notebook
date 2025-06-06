def getAmountVowels(word):
	count = 0
	vowels = 'aeiou'
	modifiedWord = word.lower()

	for vowel in vowels:
		count += modifiedWord.count(vowel)
		
	return count