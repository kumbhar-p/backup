#!/usr/bin/python

"""
	Script : read_from_csv.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To read employee details from csv file by name emp.csv 
			  which has the following details:
			  EmpID, Name, Age, Gender and Salary
"""
# Step-1
f = open('emp.csv')

# Step-2
# Read employee records and process
for EmpRecord in f: #fetches line by line
	#print EmpRecord,
	EmpRecordList = EmpRecord.strip().split(',')
	print "EmpID:",EmpRecordList[0]	
	print "Name:",EmpRecordList[1]
	print "Age:",EmpRecordList[2],"in years."
	if EmpRecordList[3] in "mM":
		gender = 'Male'
	elif EmpRecordList[3] in "Ff":
		gender = 'Female'
	else:
		gender = 'Unknown'
	print "Gender:",gender
	EmpRecordList[4].lstrip()
	print "Salary:",EmpRecordList[4],"in INR"


#Step-3
f.close()
	
	
