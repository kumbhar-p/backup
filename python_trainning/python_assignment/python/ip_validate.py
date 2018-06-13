#!/usr/bin/python

"""
	Script : ip_validate.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Accept IP address from the user and validate python program.
"""

ip = raw_input("enter ip address:")

part=ip.split(".")
count=0
for char in part:
	char=int(char)
	count+=1
	if char<0 or char>255:
		print "Invalid IP Address"
		break

else:
	if count==4:
		print "Valid IP Address"
	else:
		print "Invalid IP Address"

