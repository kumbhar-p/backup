#!/usr/bin/python

"""
	Script : nl.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To implement 'nl' command which prints file with line number
   				python program
"""
import sys


if len(sys.argv)==1:
	print "Usage:nl.py <filename>"
	sys.exit(12)

"""f=open(sys.argv[1])
num=1
"""
num=1
for i in range(1,len(sys.argv)):
	f=open(sys.argv[i])
	char=f.readline()
	while char:
		print num,'.',char,
		char=f.readline()
		num+=1
	f.close()
