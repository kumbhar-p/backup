#!/usr/bin/python

"""
	Script : fibo_6c.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Fibonacci series upto specified limit python program.
"""

num = int(raw_input("enter limit:"))

f=0
s=1

for num in range(1,num+1):
	su=f+s;
	print su
	f=s
	s=su

