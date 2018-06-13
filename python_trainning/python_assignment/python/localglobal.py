#!/usr/bin/python
"""
	Script : localglobal.py
	Author : Bhavya
	Date : Sept-06-2017
	Purpose :To demonstrate between local and global variables
"""

def f():
	print s
	global s

	s="local to f"

	print s


s="Local and global variable"
f()
print s
