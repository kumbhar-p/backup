#!/usr/bin/python

"""
	Script : voconso.py
	Author : Bhavya
	Date : April-14-2017
	Purpose : Count number of vowels and consonants and frequency
   				python program.
"""

string = raw_input("enter string:")
string=string.lower()
vowels="aeiou"
v=0
c=0
for char in string:
	if char in vowels:
		v+=1
	elif char.isalpha():
		c+=1
print "vowels:%i"%(v)
print "consonants:%i"%(c)

print "frequency of vowels:%f"%(((v/float(len(string))))*100)

print "frequency of consonants:%f"%(((c/float(len(string))))*100)
