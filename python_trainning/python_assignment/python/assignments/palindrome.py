#!/usr/bin/python

"""
	Script : palindrome.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose :To check whether string is palindrome or not
"""

string=raw_input("enter string:")

for i in range(0,len(string)):
	if string[i]!=string[-1-i]:
		print "not a palindrome"
		break
else:
	print "palindrome"

