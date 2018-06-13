#!/usr/bin/python
"""
	Script : regex_ex3.py
	Author : Bhavya
	Date : April-23-2017
	Purpose :Understanding re.sub() method.
		To perform find and replace
"""
import re

s1="Hello World.We live in this world."

print "s1=",s1
find_what=raw_input('Find what?')
replace_with=raw_input('Replace with:')

s2=re.sub(find_what,replace_with,s1,flags=re.I)
print "After substitution:"
print "s2=",s2
