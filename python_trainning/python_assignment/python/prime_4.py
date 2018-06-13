#!/usr/bin/python

"""
	Script : prime_4.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : To check whether number is prime or not python program.
"""

num = int(raw_input("enter number:"))
count = 0
for count in range(2,num):
	if num%count==0:
		print "Not prime"
		break;
	else:
		print "Prime"
		break;
