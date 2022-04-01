input = [91, 322, 57, 124, 40, 406, 272, 147, 239, 285, 353, 272, 77, 110, 296, 262, 299, 323, 255, 337, 150, 102]
output = ''

for i in input:
	i = i % 37

	if (i >= 0 and i <= 25):
		output += chr(i + 65)
	elif (i == 36):
		output += '_'
	else:
		output += str(i-26)

print(output)



