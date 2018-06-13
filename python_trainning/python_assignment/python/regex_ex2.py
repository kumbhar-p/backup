#!/usr/bin/python
"""
	Script : regex_ex2.py
	Author : Bhavya
	Date : April-23-2017
	Purpose :Understanding the behaviour of 'findall()' method.
"""
import re

def check_findall(string,pattern):
	res=re.findall(pattern,string,re.I | re.M)
	
	if len(res):
		print "Pattern found."

		print "The matching words are as follows:"
		for word in res:
			print "'{}'".format(word)
	else:
		print "Pattern not found."

#s1='A big fat cat rather sat on a mat and ate a big rat.'
s1="""We are learning Python
Python support numerical and scientific computing.
Python can be used for testing.
Python
Python is a Python
We can build GUI Apps using Python.
There are many frameworks in Python for Web-Development.
and we can do lot more in Python.
"""

print "s1=",s1

pattern=raw_input("Enter the pattern to search:")

print "Understanding the behaviour of findall() method:"
check_findall(s1,pattern)
