#!/usr/bin/python

"""
	Script : isprime.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : To check whether given number is prime or not python program.
"""

def isprime(number):
	for i in range(2,number):
		if number%i==0:
			return False
	else:
		return True

number=int(raw_input("enter number"))

if isprime(number):
	print "%i is a prime number"%number
else:
	print "%i is not a prime number"%number
			
