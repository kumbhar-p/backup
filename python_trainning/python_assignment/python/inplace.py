#!/usr/bin/python
"""
	Script : inplace.py
	Author : Bhavya
	Date : Sept-06-2017
	Purpose :To demonstrate between inplace and standard operators
"""

import operator

#For immutable objects
x=1
y=2
a=1
b=2

z=operator.add(x,y) #add using normal operator

c=operator.iadd(a,b) #add using inplace operator

print "Addition with normal operator",z
print "Addition with inplace operator",c

print "First argument with normal operator",x #unchanged
print "First argument with inplace operator",a	#unchanged

#For mutable objects

d=[1,2,3]
e=operator.add(d,[4,5,6])

print "Addition with normal operator",e
print "First argument",d

f=operator.iadd(d,[4,5,6])

print "Addtion with inplace operator",f
print "First argument(changed)",d
