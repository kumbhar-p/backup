fil_op = open("data.txt", "a+")
while 1 :
	strg = raw_input()
	if strg != EOFError :
		fil_op.writelines(strg)
		continue
	else:
		break
