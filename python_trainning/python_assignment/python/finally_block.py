#!/usr/bin/python
"""
	Script : finally_block.py
	Author : Bhavya
	Date : April-21-2017
	Purpose :Understanding the behaviour of 'finally' block.
		The finally block gets executed at any cost.
"""

from custfunc import *
import sys
for n in range(9):
	try:
		print divide(10.0,n)
#print divide(12,0)
		print "character at index position",n," is:",charAt('global',n)
#print "character at index position '9' is:",charAt('global',9)
	except:
		print "Some error occured....."
		print "Type:",sys.exc_info()[0]
		print "name:",sys.exc_info()[1]
		print "Traceback:",sys.exc_info()[2]
	finally:
		print "Get's executed in all cases"
