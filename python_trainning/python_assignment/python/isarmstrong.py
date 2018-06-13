#!/usr/bin/python

"""
	Script : isarmstrong.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Function for isarmstrong python program.
"""

def isarmstrong(number):
	tem=number
	s=0
	while number:
		rem=number%10
		s=s+rem**3
		number=number/10
	if tem==s:
		return True
	else:
	 	return False

number=int(raw_input("enter number:"))

if isarmstrong(number):
	print "%i is armstrong number"%(number)
else:
	print "%i is not armstrong number"%(number)
