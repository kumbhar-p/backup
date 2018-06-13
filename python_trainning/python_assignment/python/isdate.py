#!/usr/bin/python

"""
	Script : isdate.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : To validate date python program.
"""
def isdate(str1):
	month31=['jan','mar','may','jul','aug','oct','dec']
	month30=['apr','jun','sep','nov']
	part=str1.split('-')
	
	if len(part[0])==2 and len(part[1])==3 and len(part[2])==4:
		date=int(part[0])
		month=part[1]
		year=int(part[2])
		if month in "febFEB":
			if isleap(year):
				if date>=1 and date<=29:
					return True
				else:
					return False
			else:
			 	if date>=1 and date<=28:
			 		return True
			 	else:
			 		return False
		if date>31:
			return False
		elif date==31 and month in month31:
			return True
		elif (date>=1 and date<=30) and (month in month30 or month in month31):
			return True
	else:
	  return False
		

		
def isleap(year):		
	if (year%4==0 and not year%100==0) or (year%4==0):
		return True
	else:
		return False







date=raw_input("enter date:")

if isdate(date):
	print "valid date"
else:
	print "invalid date"
