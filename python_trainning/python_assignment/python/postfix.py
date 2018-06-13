#!/usr/bin/python

"""
	Script : postfix.py
	Author : Bhavya
	Date : April-19-2017
	Purpose : Evaluating postfix expression
"""
l1=[]
express=raw_input("enter postfix expression:")

for char in express:
	if char not in "+*/%-":
		l1.append(char)
	else:
		if len(l1)==1:
			print "Invalid"
			break
		l1.append(l1.pop()+l1.pop())
else:
	print "Valid Expression"
