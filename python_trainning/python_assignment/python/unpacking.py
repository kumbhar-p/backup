#!/usr/bin/python
"""
	Script : unpacking.py
	Author : Bhavya
	Date : Sept-06-2017
	Purpose : To demonstrateUnpacking the list to send as arguments to a function
"""


def f(a,b,c,d):
	return a+b+c+d


list1=[1,2,3,4]

print f(*list1)
