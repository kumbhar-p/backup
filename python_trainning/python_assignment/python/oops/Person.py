#!/usr/bin/python
"""
	Script : Person.py
	Author : Bhavya
	Date : April-21-2017
	Purpose :ADT for 'Persion' with attributes like name,age,gender etc.
			Methods like showPersonDetails() etc
"""

class Person(object):
	"""
		Has attributes like name, age and gender besides a method by name showPersonDetails()
	"""
	#Similar to constructor in other prog. lang.
	def __init__(self,name='no name',age=0,gender='X'):
		"""
			Instance variables are: name,age and gender
		"""
		self.name=name
		self.gender=gender
		self.age=age

	#Getters and setters
	def getname(self):
		"""
			Return the Person's name
		"""
		return self.name

	def getage(self):
		"""
			Return the Person's age
		"""
		return self.age

	def getgender(self):
		"""
			Return the Person's gender
		"""
		return self.gender


	def setname(self,name):
		"""
			Set or alter the Person's name
		"""
		self.name=name

	def setage(self,age):
		"""
			Set or alter the Person's age
		"""
		self.age=age

	def setgender(self,gender):
		"""
			Set or alter the Person's gender
		"""
		self.gender=gender

	def showPersonDetails(self):
		""" 
			Display Person's details.
		"""
		print "Name:",self.name
		print "Age:",self.age
		print "Gender:",self.gender

	#Destructor i.e. __del__
	def __del__(self):
		"""
			The Person's destructor method.
		"""
		print "Person has kicked his bucket.."
		print "Meet him in heaven"
	#The string representation of the object.Done using __str__
	def __str__(self):
		"""
			The String representation of the object.
		"""
		return "Name={}\nAge={}\nGender={}\n".format(self.name,self.age,self.gender)

