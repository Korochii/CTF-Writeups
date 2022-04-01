input = [104, 290, 356, 313, 262, 337, 354, 229, 146, 297, 118, 373, 221, 359, 338, 321, 288, 79, 214, 277, 131, 190, 377]
output = ''

for i in input:
	i = pow(i, -1, 41)

	if (i >= 1 and i <= 26):
		output += chr(i + 64)
	elif (i == 37):
		output += '_'
	else:
		output += str(i-27)

print(output)



