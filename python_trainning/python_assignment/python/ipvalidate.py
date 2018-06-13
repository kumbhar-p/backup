#!/usr/bin/python

"""
	Script : ipvalidate.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Program to implement isipaddr() function python program.
"""

def isipaddr(str1):
	part=str1.split(".")
	count=0
	for char in part:
		if char.isdigit():
			char=int(char)
			count+=1
			if char<0 or char>255:
				return False
		else:
		 	return False
	else:
		if count==4:
			return True
		else:
			return False


#Calling function isipaddr


IpAddress=raw_input("enter ip address:")

if isipaddr(IpAddress):
	print "Valid Ip Address"
else:
	print "Invalid Ip Address"

