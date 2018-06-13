#!/usr/bin/python

"""
	Script : multi_excep.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To read data from a file with name numbers.txt and find the 
			reciprocal of each of them, one by one
"""
import sys

try:
	f=open("numbers.txt")
	number=int(f.readline())
	print "Reciprocal of",number,"is",1/number
except IOError as e: #e has error message
	print "File opening error"
	print e
	sys.exit(12)

except ValueError as e:
	print "unable to convert to an integer......"
	print e
	sys.exit(13)
except:			#A wildcard exception
	print "Some error occured....."
	print "exception type:",sys.exc_info()[0]
	print "exception value:",sys.exc_info()[1]
	print "exception traceback:",sys.exc_info()[2]
	sys.exit(10)
