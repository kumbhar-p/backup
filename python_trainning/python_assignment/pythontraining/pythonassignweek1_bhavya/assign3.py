#Fibonacci series

num=input("Enter limit:") #Input limit from user,limit for fibonaci series

f=0 #first number
s=1 #second number

for num in range(1,num+1):
	su=f+s
	print su
	f=s
	s=su

