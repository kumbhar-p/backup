#!/usr/bin/python

"""
	Script : pytho_5.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Pythogorous theorem  python program.
"""

side1 = float(raw_input("enter side1:"))
side2 = float(raw_input("enter side2:"))
side3 = float(raw_input("enter side3:"))

if side1**2==side2**2+side3**2or side2**2==side3**2+side1**2 or side3**2==side1**2+side2**2:
	print "right angled triangle"
else :
	print "not right angled triangle"


