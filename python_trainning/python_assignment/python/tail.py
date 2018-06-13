#!/usr/bin/python

"""
	Script : tail.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : To implement 'tail' command python program
"""
import sys


if len(sys.argv)==1:
	print "Usage:tail.py [number of lines] <filename>"
	sys.exit(12)


if sys.argv[1][0] in "-":
	n=-(int(sys.argv[1]))
	i=2
else:
	n=10
	i=1

for i in range(i,len(sys.argv)):
	all_lines=[]
	f=open(sys.argv[i])
	all_lines=f.readlines()
	print '**************',sys.argv[i],'***********'
	for line in all_lines[-n:]:
		print line,

#f.close()
