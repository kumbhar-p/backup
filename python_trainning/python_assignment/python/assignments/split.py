#!/usr/bin/python

"""
	Script : split.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose : Split() function implementation
"""

string=raw_input("enter string:")
delim=raw_input("enter delimiter:")

counter=0
for i in range(0,len(string)):
	if delim is string[i]:
		print string[counter:i]
		counter=i+1
		
if counter>0:
	print string[counter:]
