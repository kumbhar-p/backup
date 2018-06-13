#!/usr/bin/python

"""
	Script : computermarks.py
	Author : Bhavya
	Date : April-21-2017
	Purpose : To illustrate iterative control structure 'for' python program.
				Generate a multiplication table for a given integer.
				Illustrating nested loops, and infinite loop.
				Using branch control structure 'continue'
"""
while True:
	try:
		marks = int(raw_input("marks obtained[0-100]:"))
		break
	except ValueError:
		print "It is not an integer.Try again..."

if marks>=0 and marks<=100:	
	print "Computer Science:",marks
else:
	#Raise an exception with the message 'Marks out of range.'
	raise ValueError('Marks out of range...')

