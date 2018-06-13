
def print_formatted(number):
	max=0
	for i in range(1,number+1):
		bina=bin(i)
		bina=bina[2:]
		if len(bina)>max:
			max=len(bina)
		bina=""
	for i in range(1,number+1):
		octa=oct(i)
		octa=octa[1:]
	  	hexa=hex(i)
		hexa=hexa[2:]
	  	bina=bin(i)
	  	bina=bina[2:]
	  	print str(i).rjust(2),octa.rjust(2),hexa.rjust(2),bina.rjust(max)

number=raw_input()
print_formatted(number)
