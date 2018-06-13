#!/usr/bin/python

"""
	Script : manager_func.py
	Author : Bhavya
	Date : April-19-2017
	Purpose :  python program.
"""
import os
#left most characters in a string

def left(string,n):
	"""
		Returns left most characters in a string
	"""
	return string[:n]

#right most characters in a string

def right(string,n):
	"""
		Returns right most characters in a string
	"""
	return string[-n:]

#mid characters from given position in a string

def mid(string,p,n):
	"""
		Returns mid characters in a string from specified position
	"""
	return string[p:p+n+1]

#reverse of a string

def str_reverse(str1):
	"""
		Returns reverse of a string
	"""
	rev=""
	for char in str1:
		rev = char+rev
	return rev

#count vowels in a string

def vowel_count(string):
	"""
		Returns number of vowels in a string
	"""
	vowels="aeiouAEIOU"
	v=0
	for char in string:
		if char in vowels:
			v+=1
	return v

#count consonants in a string

def conso_count(string):
	"""
		Returns number of consonants in a string
	"""
	vowels="aeiouAEIOU"
	c=0
	for char in string:
		if char not in vowels:
			if char.isalpha():
				c+=1
	return c

#find_all in string

def find_all(string,substr):
	"""
		Returns indices of substring in a string
	"""
	index1=[]
	while True:
	 	if len(index1)==0:
	 		ind=string.find(substr)
		else:
			ind=string.find(substr,ind+1)
		if ind==-1:
		 	break
		index1.append(ind)
	return index1

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


while True:
	os.system('clear')
	print """******FUNCTIONS*******
		1. LEFT MOST CHARACTERS IN STRING

		2. RIGHT MOST CHARACTERS IN STRING

		3. MID CHARACTERS FROM GIVEN POSITION IN STRING

		4. STRING REVERSE

		5. COUNT VOWELS IN A STRING

		6. COUNT CONSONANTS IN A STRING

		7. FIND ALL INDICES OF THE SUB STRING IN STRING

		8. FACTORIAL OF A NUMBER

		9. FIBONACCI SERIES

		10. GCD OF TWO NUMBERS

		11. LCM OF TWO NUMBERS

		12. TOWER OF HANOI
	
		13. QUIT
		"""
	choice = int(raw_input("Enter your choice:"))

	if choice==1:
		string=raw_input("enter string:")
		number=int(raw_input("Enter number of characters:"))
		char=left(string,number)
		print "left %i characters:%s"%(number,char)
	elif choice==2:
	
		string=raw_input("enter string:")
		number=int(raw_input("Enter number of characters:"))
		char=right(string,number)
		print "left %i characters:%s"%(number,char)
	elif choice==3:
		string=raw_input("enter string:")
		number=int(raw_input("Enter number of characters:"))
		position=int(raw_input("Enter position:"))
		char=mid(string,position,number)
		print "left %i characters:%s"%(number,char)
	elif choice==4:
		string=raw_input("enter string:")
		rev=str_reverse(string)
		print "Reverse of string is:%s"%(rev)
	elif choice==5:
		string=raw_input("enter string:")
		print "number of vowels are:%i"%(vowel_count(string))
	elif choice==6:
		string=raw_input("enter string:")
		print "number of consonants are:%i"%(conso_count(string))
	elif choice==7:
		string=raw_input("enter string:")
		substring=raw_input("enter substring:")
		indices=[]
		indices=find_all(string,substring)
		print indices
	elif choice==8:
		number=int(raw_input("enter number:"))
		print "factorial of %i is %i"%(number,fact(number))
	elif choice==9:
		fibo=[]
		number=int(raw_input("enter number:"))
		fibo=fibo_s(number)
		print fibo
	elif choice==10:
		number1=int(raw_input("enter first number:"))
		number2=int(raw_input("enter second number:"))
		print "GCD is %i"%(gcd(number1,number2))
	elif choice==11:
		number1=int(raw_input("enter first number:"))
		number2=int(raw_input("enter second number:"))
		print "lcm is %i"%(lcm(number1,number2))
	elif choice==13:
		break

	dummy=raw_input("Press ENTER to continue....")
