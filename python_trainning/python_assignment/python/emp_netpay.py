#!/usr/bin/python

"""
	Script : emp_netpay.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : First python program.
"""

employee={}

def netpay(employee):
	if employee['id'][0] in "Ff":
		if employee['gender'] in "fF":
			net_pay=employee['salary']+(30*employee['salary']/100.0)+(20*employee['salary']/100.0)-(8*employee['salary']/100.0)
		elif employee['gender'] in "mM":
			net_pay=employee['salary']+(30*employee['salary'])/100.0+(15*employee['salary'])/100.0-(8*employee['salary'])/100.0
	elif employee['id'][0] in "pP":
		net_pay=employee['salary']-(8*employee['salary'])/100.0
	return net_pay



employee['id']=raw_input("enter id:")
employee['name']=raw_input("enter name:")
employee['salary']=float(raw_input("enter salary:"))
employee['gender']=raw_input("enter gender:")

print "netpay:",netpay(employee)
