#!/usr/bin/python
"""
	Script : assert_ex.py
	Author : Bhavya
	Date : April-21-2017
	Purpose :Understanding assertion in Python
"""

def factorial(n):
	assert n>=0,"cannot be negative...."
	if n==0 or n==1:
		return 1
	else:
   		return n*factorial(n-1)

number=int(raw_input('factorial of:'))
print 'Factorial of',number,"is",factorial(number)
"""
#Method-1
if number>=0:
	print 'Factorial of',number,"is",factorial(number)
else:
	print "Factorial of negative number is not possible....."
"""
