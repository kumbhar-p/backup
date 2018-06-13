#!/usr/bin/python

"""
	Script : strrot.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose :String rotation
"""

string1=raw_input("enter string:")
count=int(raw_input("enter number of times rotation:"))

if len(string1)!=count:
	for i in range(0,count):
		string1=string1[-1]+string1[0:len(string1)-1]

print string1
