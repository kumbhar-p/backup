#!/usr/bin/python

"""
	Script : elsepow.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Understand the behaviour of 'else' clause with iterative
   	control structures like 'for' or 'while' python program.
"""

print "Start"

for data in range(1,11):
	print data
	if data==4:
		break
else:
	print "The loop was normally terminated"

print "End"
