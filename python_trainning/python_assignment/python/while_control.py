#!/usr/bin/python

"""
	Script : while_control.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : To illustrate iterative control structure 'while' python program.
				Generate a multiplication table for a given integer.
"""

number = int(raw_input("table of:"))

count = 1

while count <=10:
	product = number*count
	print number,'x',count,'=',product
	#Incrementing the value of 'count' by 1
	count+=1
print "Thats it"
