#!/usr/bin/python

"""
	Script : circle.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : area and circumference of a circle python program.
"""

radius = int(raw_input("enter radius of a circle:"))

area = (3.14*radius**2)
circumference = 2*3.14*radius

print "area of a circle with radius %i is %i"%(radius,area)
print "circumference of a circle with radius %i is %i"%(radius,circumference)
