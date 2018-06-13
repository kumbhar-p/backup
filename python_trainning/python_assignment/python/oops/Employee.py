#!/usr/bin/python
"""
	Script : Employee.py
	Author : Bhavya
	Date : April-22-2017
	Purpose : Employee class which inherits the attributes of
			base class:Person class.(Inheritence)
"""
from Person import Person

class Employee(Person): #Inherit the features of the 'Person' class
	def __init__(self,ID,name,age,gender,salary):
		self.ID=ID
		#Call the constructor of the base class.i.e.Person
		Person.__init__(self,name,age,gender)
		self.salary=salary

	def __str__(self):
#n=self.getname()
#a=self.getage()
#g=self.getgender()
		return "ID={}\nName={}\nAge={}\nGender={}\nSalary={}\n".format(
				self.ID,self.name,self.age,self.gender,self.salary)
	
	
