#!/usr/bin/python
"""
	Script : indirect_except.py
	Author : Bhavya
	Date : April-21-2017
	Purpose :Understanding indirect exceptions
"""

from custfunc import *
import sys

try:
	print divide(10.0,3)
	print divide(12,0)
	print "character at index position '2' is:",charAt('global',2)
	print "character at index position '9' is:",charAt('global',9)
except:
	print "Some error occured....."
	print "Type:",sys.exc_info()[0]
	print "name:",sys.exc_info()[1]
	print "Traceback:",sys.exc_info()[2]
