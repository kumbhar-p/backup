#!/usr/bin/python

"""
	Script : write2csv.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To write employee details to a csv file by name emp.csv 
			  which will have the following details:
			  EmpID, Name, Age, Gender and Salary
"""
# Step-1
f = open('emp.csv','w')

# Step-2
# Accept employee details and write until no more records.
while True:
	#Accepting the employee details.
	EmpID = raw_input("Enter employee ID:")
	EName = raw_input("Enter employee Name:")
	Age = int(raw_input("Age (in years):"))
	Gender = raw_input("Gender [F/M] :")
	Salary = float(raw_input("Salary (INR) :"))

	EmpRecord="{},{},{},{},{}\n".format(EmpID,EName,Age,Gender,Salary)

	#Write the employee record
	f.write(EmpRecord)

	#Asking for continuation
	again = raw_input("Another record[Y/N]:")
	if again in "Nn":
		break

#Step-3
f.close()
	
	
