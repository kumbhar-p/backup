#!/usr/bin/python

"""
	Script : recursion.py
	Author : Bhavya
	Date : April-20-2017
	Purpose :Recursion module for all recursion programs
"""


#factorial of a given number

def fact(n):
	"""
		Returns factorial of a given number
	"""
	if n==1 or n==0:
		return 1
	else:
		return n*fact(n-1)

#fibonacci series

def fibo_s(n):
	"""
		Returns fibonacci series of a given number
	"""
	fibon=[]
	f=0
	s=1
	for n in range(1,n+1):
		su=f+s;
		fibon.append(su)
		f=s
		s=su
	return fibon
	
#GCD of two numbers

def gcd(n1,n2):
	"""
		Returns gcd of two given number
	"""
	if n1<n2:
		n1,n2=n2,n1
	if n1%n2==0:
		return n2
	else:
		return gcd(n2,n1%n2)

#LCM of two numbers

def lcm(n1,n2):
	"""
		Returns lcm of two given numbers
	"""
	if n1<n2:
		n1,n2=n2,n1
	gc=gcd(n1,n2)
	lm=n1	
	while lm%n1!=0 or lm%n2!=0:
		lm+=gc
	return lm

if __name__=='__main__':
	number1=int(raw_input("enter first number:"))
	number2=int(raw_input("enter second number:"))
	print fact(number1)
	print fibo_s(number1)
	print gcd(number1,number2)
	print lcm(number1,number2)
