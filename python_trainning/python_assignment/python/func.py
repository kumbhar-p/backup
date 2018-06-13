#!/usr/bin/python

"""
	Script : func.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : Define and invoke the functions python program.
"""
def simple_interest(P,T,R):
	"""Computes and return Simple Interest.
	"""
	si = (P*T*R)/100.0

	return si



def suming(*args):
	"""
		Return the sum of the arguments passed.
	"""
	s=0
	for data in args:
	 	s+=data
	return s


#Calling the function.

P = float(raw_input("Enter principle amount:"))
T = float(raw_input("Enter time of period(in years):"))
R = float(raw_input("Enter rate of interest per annum:"))

int_amount=simple_interest(P,T,R)

print "Simple interest:",int_amount

#Calling the suming function.

print "Understanding the behaviour of 'suming()' function..."
print "suming(1,2,3)=",suming(1,2,3)
print "suming(1,2,3,4,5)=",suming(1,2,3,4,5)
print "suming(1,2,3,4,5,6,7,8,9,10)=",suming(1,2,3,4,5,6,7,8,9,10)

	
