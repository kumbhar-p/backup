#!/usr/bin/python

"""
	Script : crud_app.py
	Author : Bhavya
	Date : April-18-2017
	Purpose : To implement CRUD application for RTO python program.
"""
import os

rto={}
while True:
	os.system('clear')
	print """********CRUD OPERATIONS********
	1. CREATE

	2. READ

	3. UPDATE

	4. DELETE

	5.QUIT"""

	choice=int(raw_input("enter your choice:"))

	if choice==1:
		StateCode = raw_input("enter statecode:")
		if StateCode not in rto:
			StateName=raw_input("enter statename:")
			rto[StateCode]=StateName
		else:
			print "StateCode already exists"
	elif choice==2:
		StateCode = raw_input("enter statecode:")
		if StateCode in rto:
			print "State Name is:",rto[StateCode]
		else:
			print "State Name is not exists for State Code"
	elif choice==3:
		StateCode = raw_input("enter statecode:")
		if StateCode not in rto:
			print "No Existing State Code to update"
		else:
			StateName = raw_input("enter state name:")
			rto[StateCode]=StateName
	elif choice==4:
		StateCode = raw_input("enter statecode to delete")
		if StateCode not in rto:
			print "Entered Statecode does not exists"
		else:
			rto.pop(StateCode)
	elif choice==5:
		break
	else:
		print "Invalid Choice"
	
	dummy = raw_input("Press ENTER to continue...")
		
	
