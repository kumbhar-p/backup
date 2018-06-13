#!/usr/bin/python

"""
	Script : palindrome.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : check if the string is palindrome or not python program.
"""
string = raw_input("enter string:")
length=len(string)
rev=''
for char in string:
	rev = char+rev 
if rev== string:
	print "Palindrome"
else:
	print "Not Palindrome"

