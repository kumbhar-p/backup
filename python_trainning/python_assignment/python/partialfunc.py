#!/usr/bin/python
"""
	Script : partialfunc.py
	Author : Bhavya
	Date : Sept-06-2017
	Purpose :To demonstrate Partial functions
"""

from functools import partial

def f(a,b,c,x):
	return a+b+c+x

g=partial(f,1,2)

print g(3,4)
