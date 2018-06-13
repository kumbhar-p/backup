#!/usr/bin/python
"""
	Script : listrev.py
	Author : Bhavya
	Date : Sept-07-2017
	Purpose :To print list in reverse order using while and for loops
"""

list1=[]

count=int(raw_input("Enter number of elements for list"))

for i in range(0,count):
	input1=raw_input("enter element")
	list1.append(input1)

print list1

for i in range(count,0,-1):
	print list1[i]

