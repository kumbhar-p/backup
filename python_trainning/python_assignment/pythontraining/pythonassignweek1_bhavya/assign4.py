#Prime Numbers


num = int(raw_input("enter limit:")) #Input from user,limit for number

for count1 in range(1,num+1):
	n=0
	for count2 in range(1,count1+1):
		if count1%count2==0:
			n=n+1
	if n==2:
		print count1
