#!/usr/bin/python
"""
	Script : regex_ex1.py
	Author : Bhavya
	Date : April-23-2017
	Purpose :Understanding the difference between 'match()' and 'search()'
			methods
"""
import re

def check_match(string,pattern):
	res=re.match(pattern,string,re.I)
	print res
	if res!=None:
		print "Pattern found."
	else:
		print "Pattern not found."

def check_search(string,pattern):
	res=re.search(pattern,string,re.I)
	print res
	if res!=None:
		print "Pattern found."
	else:
		print "Pattern not found."

s1 = 'We are learning python. Python is simple, powerful and....'
s2 = "python can be used for Numerical and Scientific computing."

print "s1=",s1
print "S2=",s2

patten=raw_input("Enter the pattern to search:")

#Both match() and search() return 'None' if a pattern is not found
print "Understanding 'match()' method:"
check_match(s1,patten)
check_match(s2,patten)
	
print "Understanding 'search()' method:"
check_search(s1,patten)
check_search(s2,patten)
