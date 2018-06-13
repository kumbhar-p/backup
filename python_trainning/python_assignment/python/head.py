#!/usr/bin/python

"""
	Script : head.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To implement 'head' command python program
"""

import sys

if len(sys.argv)==1:
	print "Usage:head.py [number of lines] <filename>"
	sys.exit(12)

"""if len(sys.argv)==2:
	f=open(sys.argv[1])
	n=10
	length=len(sys.argv)-1

elif len(sys.argv)==3:
	f=open(sys.argv[2])
	n=int(sys.argv[1])
	n=-n
	length=len(sys.argv)-2

"""

if sys.argv[1][0] in "-":
	n=-(int(sys.argv[1]))
	i=2
else:
	n=10
	i=1

for i in range(i,len(sys.argv)):
	f=open(sys.argv[i])
	print '=======',sys.argv[i],'======'
	for num in range(0,n):
		char=f.readline()
		print char,

#f.close()
