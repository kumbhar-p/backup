#!/usr/bin/python

"""
	Script : abstraction.py
	Author : Bhavya
	Date : April-22-2017
	Purpose : Understanding abstraction in Python.
				Done by convention.
"""
class MyTest(object):
	def __init__(self,p1,p2,p3):
		self.public=p1
		self._protected=p2
		self.__private=p3

	def __str__(self):
		return "public={}\nprotected={}\nprivate={}\n".format(
				self.public,self._protected,self.__private)

if __name__=='__main__':
	obj=MyTest(10,20,30)

	print obj
	print "Changing the data in the object directly:"
	obj.public+=15
	obj._protected+=10
	
	print obj
	print "Trying to acces private data:"
	print obj.__private
