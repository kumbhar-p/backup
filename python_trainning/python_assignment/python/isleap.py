#!/usr/bin/python

"""
	Script : isleap.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : To check whether given year is leap year or not python program.
"""

def isleap(year):
	if (year%4==0 and not year%100==0) or (year%4==0):
		return True
	else:
		return False

#Calling isleap function

year = int(raw_input("enter year:"))


if isleap(year):
	print "%i is a leap year"%(year)
else:
	print "%i is not a leap year"%(year)
