#!/usr/bin/python

"""
	Script : tailchar.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To implement 'tailchar' command python program
"""
import sys


if len(sys.argv)==1:
	print "Usage:tailchar.py [number of lines] <filename>"
	sys.exit(12)

if sys.argv[1][0] in "-":
	n=-(int(sys.argv[1]))
	i=2
else:
	n=10
	i=1

for i in range(i,len(sys.argv)):
	rev=""
	char=""
	f=open(sys.argv[i])
	f.seek(0,2)
	for num in range(0,n):
		f.seek(-2,1)
		char=f.read(1)
		rev=rev+char
	print "********",sys.argv[i],"*********"
	print rev
	f.close()




f.close()
