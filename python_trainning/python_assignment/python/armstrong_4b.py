#!/usr/bin/python

"""
	Script : armstrong_4b.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Armstrong number between 1 and 500 python program.
"""

#num = int(raw_input("enter limit:"))

for num in range(1,501):
	tem=num
	s=0
	while num:
		rem=num%10
		s=s+rem**3
		num=num/10
	if tem==s:
		print tem

