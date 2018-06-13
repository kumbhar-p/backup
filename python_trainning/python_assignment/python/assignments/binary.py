#!/usr/bin/python

"""
	Script : binary.py
	Author : Bhavya
	Date : Aug-31-2017
	Purpose :Converting number to binary format without bitwise
"""

num=int(raw_input("enter a number:"))
rev=""
while num!=0:
	rem=num%2
	num=num/2
	rev=str(rem)+(rev)


print rev
