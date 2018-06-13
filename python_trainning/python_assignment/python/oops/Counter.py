#!/usr/bin/python
"""
	Script : Counter.py
	Author : Bhavya
	Date : April-22-2017
	Purpose :Implementing Class Variables and Class method(s)
"""
class Counter(object):
	#The following is a class variable
	count=0
	def __init__(self):
		#Increment the object count
		self.__class__.count+=1
	
	def __del__(self):
		#Decrement the object count
		self.__class__.count-=1
	
	#The '@classmethod' tells the following method is a 
	#class method; which means it does not require an object for its invocation
	#and it requires a class name
	
	@classmethod
	def ObjectCount(self):
		print "No. of objects:",self.count

