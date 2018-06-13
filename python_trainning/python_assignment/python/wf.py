#!/usr/bin/python

"""
	Script : wf.py
	Author : Bhavya
	Date : April-20-2017
	Purpose : Calculate word frequency in a file(Finding the frequency of words
			in a given file python program
"""
import sys

if len(sys.argv)==1:
	print "Usage wf.py <filename>"
	sys.exit(2)

f=open(sys.argv[1])
frequency=[]

all_lines=f.readlines()

for line in all_lines:
	line=line.split(' ')
	i=1
	for i in range(0,len(l1)):
		count=0
		if line[i] not in frequency:
			frequency.append(line[i])
			count+=1
			


