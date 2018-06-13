#!/usr/bin/python
"""
	Script : yield.py
	Author : Bhavya
	Date : Sept-07-2017
	Purpose :To demonstrate yield keyword
"""

def nextSquare():
	i=1
	while True:
		yield i*i
		i+=1




for num in nextSquare():
	if num>100:
		break
	print(num)
