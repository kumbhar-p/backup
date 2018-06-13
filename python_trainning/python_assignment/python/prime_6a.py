#!/usr/bin/python

"""
	Script : prime_6a.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : To check whether number is prime or not upto specified	
				limit python program.
"""

num = int(raw_input("enter limit:"))

for count1 in range(1,num+1):
	n=0
	for count2 in range(1,count1+1):
		if count1%count2==0:
			n=n+1
	if n==2:
		print count1
