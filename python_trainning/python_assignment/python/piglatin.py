#!/usr/bin/python

"""
	Script : piglatin.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Generate PIGLATIN words for a multiword string python program.
"""

string = raw_input("enter string:")

words=string.split(' ')
newstring=""
vowels="aeiou"
for char in words:
	if char[0] in vowels:
		newstring = newstring+char[1:]+char[0]+'y '
	else:
		newstring = newstring+char[1:]+char[0]+'ay '

print newstring
	
