#!/usr/bin/python

"""
	Script : pythogorean.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Pythogorean triple python program.
"""

def istriple(num):
	number=[]
	for data1 in range(1,num+1):
		for data2 in range(1,num+1):
			for data3 in range(1,num+1):
				if (data1**2)==((data2**2)+(data3**2)):
					if (data1,data2,data3) not in number:
						number.append((data1,data2,data3))
	return number



num=int(raw_input("enter limit:"))

triple=[]
triple=istriple(num)

print triple

