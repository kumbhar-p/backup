string=raw_input("Enter string:")
substring=raw_input("Enter substring:")

c=0

for i in range(0,len(string)):
	if substring==string[i:i+3]:
		print string[i:i+3]
		c+=1

print c
