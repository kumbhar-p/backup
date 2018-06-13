#!/usr/bin/python

"""
	Script : for_ex.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : To illustrate iterative control structure 'for' python program.
				Generate a multiplication table for a given integer.
				Illustrating nested loops, and infinite loop.
				Using branch control structure 'continue'
"""
while True:
	number = int(raw_input("table of:"))

	count = 1

	for count in range(1,11):
		product = number*count
		print number,'x',count,'=',product
		#Incrementing the value of 'count' by 1
	again = raw_input("Quit:Yes or no??")
	if again=='No' or again=='no':
		continue
	else:
		break
print "Thats it!!"
