#!/usr/bin/python

"""
	Script : redirection.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : Understanding redirection from python's perspective
"""
import sys
#Remembering the reference of sys.stdout

stdout_ref=sys.stdout

#Opening a file for redirecting the output.
f=open("output2.txt",'w')

#Mapping the file 'f' reference to 'stdout' for redirection..
sys.stdout = f
print "This data is sent to the file and not to the screen."
print "Please open the file and check."

#Ensuring 'stdout' behaves normally.
sys.stdout=stdout_ref
print "Redirection complete.Please check the 'output2.txt' file."

f.close()
