#!/usr/bin/python

"""
	Script : strsqueeze.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose :String squeezing
"""

string=raw_input("enter string:")
string1=""
for i in range(0,len(string)-1):
	print i
	if string[i]==string[i+1]:
		string1=string1+string[i]


print string1


#for i in range(0,len(string)):
