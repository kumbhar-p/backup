#!/usr/bin/python

"""
	Script : control.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Selection control statements python program.
			How can we say a candidate is eligible for a job or not based 
			on age factor?
"""
age = int(raw_input("enter your age(in years):"))

if age >= 18 and age <=60:
	print "Eligible for the job."

else:
	print "Not eligible for the job."
	if age < 18:
		print "You are too young for the job."
	elif age > 60:
		print "You are already a SENIOR CITIZEN."
		print "Stay home and relax."
