#!/usr/bin/python
"""
	Script : mirrorcopy.py
	Author : Bhavya
	Date : April-20-2017
	Purpose :Copy contents of file as a mirror image
"""
import sys

stdout_ref=sys.stdout

def str_reverse(string):
	rev=""
	for char in string:
		rev=char+rev
	return rev

if len(sys.argv)<=2 or len(sys.argv)>3:
	print "Usage:mirrorcopy.py <filename>"

f1=open(sys.argv[1],"r")
f2=open(sys.argv[2],"w")
sys.stdout=f2

string=str_reverse(f1.readline())
print string

while string:
	string=str_reverse(f1.readline())

	print string

#print "done with redirection..."

sys.stdout=stdout_ref

print "done with redirection..."
f1.close()
f2.close()





