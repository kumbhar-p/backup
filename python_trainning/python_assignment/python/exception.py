#!/usr/bin/python

"""
	Script : exception.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To illustrate iterative control structure 'for' python program.
				Generate a multiplication table for a given integer.
				Illustrating nested loops, and infinite loop.
				Using branch control structure 'continue'
				'Try except statement'
"""
while True:
	try:
		number = int(raw_input("table of:"))
		break
	except ValueError:
		print "It is not an integer.Try again..."

count = 1

for count in range(1,11):
	product = number*count
	print number,'x',count,'=',product
		#Incrementing the value of 'count' by 1
"""	again = raw_input("Quit:Yes or no??")
if again=='No' or again=='no':
		continue
	else:
		break
"""
print "Thats it!!"
