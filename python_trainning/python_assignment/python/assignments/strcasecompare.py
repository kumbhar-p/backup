#!/usr/bin/python

"""
	Script : strcasecompare.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose : Strings comparision
"""

string1=raw_input("enter string1:")
string2=raw_input("enter string2:")

if len(string1)!=len(string2):
	print "Lengths of strings are not same"
else:
	for i in range(0,len(string1)):
		if string1[i]>string2[i]:
			print string1+" is greater"
			break
		elif string1[i]<string2[i]:
			print string2+" is greater"
			break
	else:
		print "both are equal"

